/*
Programa: cuarto.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo1
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Control de flujo. Escriba un programa que imprima el cuadrado de los primeros 10 enteros.
*/

#include <stdio.h>
//#include <math.h>

int main(){
	int i;

	printf("La lista de los primeros 10 enteros es: ");
	for (i=0;i<10;i++)
		printf("\n%d",i*i);
		//printf("\n%f",pow(i,2));
	printf("\n");
}
