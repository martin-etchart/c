/*
Programa: genera_senales.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo3
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Diseño de un filtro FIR.

-Para crear la señal de entrada y los coeficientes se sugiere escribir funciones auxiliares:
	-Función escalón: recibe como parámetros: arreglo, altura y muestra en donde comienza 		el 	escalón (void step (sample_t arreglo[], int tsubida, sample_t altura);).
	-Funcion impulso.
*/

/** @file 
  * \brief Genera señales sintéticas para la prueba de la implementación  del filtro FIR.  
  * Genera señales tipo escalón e impulso.
*/


#include "genera_senales.h"
#include <stdio.h>


/** \fn step(sample_t* pu, int tsubida, sample_t altura)
  * \brief Genera señales tipo escalón.
  * \param pu Puntero al array de la señal de entrada.
  * \param tsubida Retardo (en muestras) del escalón.
  * \param altura Altura del escalón a generar.
  * @return No tiene salida.
*/
void step (sample_t* pu, int tsubida, sample_t altura){
	
	for (int i=0;i<SIGNAL_LENGTH;i++){	
		*pu = (i<tsubida)? 0 : altura ;
		pu++;
	};
	return;
};


/** \fn impulso(sample_t* pu, int tsubida, sample_t altura)
  * \brief Genera señales tipo impulso
  * \param pu Puntero al array de la señal de entrada.
  * \param tsubida Retardo (en muestras) del impulso.
  * \param altura Altuda del impulso a generar.
  @return No tiene salida.
*/
void impulso(sample_t* pu, int tsubida, sample_t altura){

	for (int i=0;i<SIGNAL_LENGTH;i++){	
		*pu = (i!=tsubida)? 0 : altura ;
		pu++;
	};
	return;
};