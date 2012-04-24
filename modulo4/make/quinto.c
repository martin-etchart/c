/*
Programa: quinto.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo4
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Funciones.
-Escribir una función que devuelva el máximo de dos números enteros: 
	int maximo(int a, int b).
-En el mismo archivo escribir la función main() que defina dos enteros (darles cualquier valor) y luego llamar la función para hallar el máximo. Imprimir el resultado.

*/

#include <stdio.h>
#include "auxiliares.h"


int main(){

	int a;
	int b;

	printf("Ingrese un numero: ");
	scanf("%d",&a);	
	printf("Ingrese otro numero: ");
	scanf("%d",&b);
	
	printf("El máximo entre %d y %d es: %d\n", a, b, maximo(a,b));
	printf("El mínimo entre %d y %d es: %d\n", a, b, minimo(a,b));
}


/* Primera parte sin función modularizada.
int maximo(int a, int b){
	return (a>b)? a : b;
}
*/



