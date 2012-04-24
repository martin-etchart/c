/*
Programa: genera_senales.h
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo3
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Diseño de un filtro FIR.

-Para crear la señal de entrada y los coeficientes se sugiere escribir funciones auxiliares:
	-Función escalón: recibe como parámetros: arreglo, altura y muestra en donde comienza 		el 	escalón (void step (sample_t arreglo[], int tsubida, sample_t altura);).
	-Funcion impulso.

-Dentro de la función fir imprima las variables que crea conveniente para verificar el 		correcto funcionamiento.

-Experimentar cambiando los modificadores a las variables y a las funciones y verificar si son visibles o no desde otros módulos.
*/
#include "fir.h"

void step (sample_t* pu, int tsubida, sample_t altura);

void impulso(sample_t* pu, int tsubida, sample_t altura);
