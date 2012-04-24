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

#include "fir.h"

sample_t c[TAP_LENGTH]; // coeficientes del filtro

int taps = 0;			// taps disponibles

void ini_fir (sample_t coefs[]){

	/*Inicialización de coeficientes*/
	for(int n=0;n<TAP_LENGTH; n++){
		c[n] = coefs[n];
	};
	
	/*Inicialización de taps*/
	taps = 0;
	
	return;
};

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
