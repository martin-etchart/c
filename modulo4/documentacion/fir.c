/*
Programa: fir.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo3
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Diseño de un filtro FIR.

Escribir un módulo para realizar el filtrado de una señal utilizando un filtro FIR. En esta etapa no es de importancia la eficiencia del algoritmo.

-Función de inicialización del FIR con los coeficientes correspondientes (void ini_fir( sample_t coefs[]);).

-Función de filtrado: recibe como parámetro la muestra actual y devuelve la muestra de la señal filtrada (calculada como convolución de los coeficientes y la señal de entrada). (sample_t fir(sample_t muestra);).

*/

/** @file
  * \brief Implementa las funciones de inicialzación del filtro y la función de filtrado.	
*/

#include "fir.h"

///Coeficientes del filtro
sample_t c[TAP_LENGTH]; // coeficientes del filtro

///Contador de taps disponibles para la inicialización
int taps = 0;			// taps disponibles

/** \fn ini_fir(sample_t coefs[])
  * \brief Inicializa el filtro
  * \param coefs[] Coeficientes del filtro (array de elementos tipos sample_t)
  * @return No tiene salida.
*/
void ini_fir (sample_t coefs[]){

	/*Inicialización de coeficientes*/
	for(int n=0;n<TAP_LENGTH; n++){
		c[n] = coefs[n];
	};
	
	/*Inicialización de taps*/
	taps = 0;
	
	return;
};


/** \fn fir(sample_t* muestra)
  * \brief Aplica filtrado FIR a la muestra de entrada
  * \param muestra Puntero a la muestra de la señal de entrada (tipo sample_t)
  * @return Devuelve la muestra de la señal de salida del filtro.
*/
sample_t fir(sample_t* muestra){
	sample_t y = 0;
	
	/*Filtrado de la señal*/
	for (int t=0;t<=taps;t++){
		y +=*(muestra)*c[t];
		muestra--;
	};
	/*Incremento del numero de TAPS hasta alcanzar régimen*/
	if (taps<TAP_LENGTH)
		taps++;
		
	return y;
};
