/*
Programa: cuarto2.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo1
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Control de flujo. Escriba un programa que dado un número inicial x, lo divida repetidamente entre 2 hasta que el resultado sea menor que 1.
*/

#include <stdio.h>

int main(){
	float x;
	printf("Ingrese el numero: ");
	scanf("%f",&x);
	
	float x2 ;
	
	x2 = x;
	while (x2>=1) {
		printf("%2.2f dividido 2 es: ",x2);
		x2 = x2/2;
		printf("%2.2f\n",x2);	
	}
}
