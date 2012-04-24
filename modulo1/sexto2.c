/*
Programa: sexto2.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo1
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Arreglos. Escriba un programa que modifique un arreglo de números flotantes según se especifique en un segundo arreglo de enteros. Cada número flotante se divide por el número entero correspondiente (igual indice) y en caso de ser nulo (el número entero) se deja sin modificar. Los arreglos iniciales se definen explícitamente en su declaración. Realizar dos versiones:
-Utilizando un ciclo for.
*/

#include <stdio.h>

int main() {

	int i;
	int z[5] = {0, 1, 2, 3, 4};
	double f[5] = {9.34, 5.43, 2.34, 2.56, 0.001};
	
	for (i=0; i<5 ; i++){
		printf("El valor de %f dividido %d queda: ",f[i],z[i]);
		f[i] = (z[i]==0)? f[i] : f[i]/z[i] ;
		printf("%f\n",f[i]);
	};
}
