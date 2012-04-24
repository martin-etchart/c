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

#include "genera_senales.h"
#include "fir.h"
#include <stdio.h>

void step (sample_t* pu, int tsubida, sample_t altura){
	
	for (int i=0;i<=SIGNAL_LENGTH;i++){	
		*pu = (i<tsubida)? 0 : altura ;
		pu++;
	};
	return;
};

void impulso(sample_t* pu, int tsubida, sample_t altura){

	for (int i=0;i<=SIGNAL_LENGTH;i++){	
		*pu = (i!=tsubida)? 0 : altura ;
		pu++;
	};
	return;
};
