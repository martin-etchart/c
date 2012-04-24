/*
Programa: segundo.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo1
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Variables. Cast.
*/

#include <stdio.h>

int main() {
	
	int a=3;
	int b=10;
	int sum;
	
	sum = a+b;
	printf("La suma de %d y %d es %d.\n",a,b,sum);

	float div;

	// División sin cast
	div = a/b;
	printf("El cociente entre %d y %d da (sin cast a float) %f.\n", a, b, div);

	float div2;

	// División con cast
	div2 = (float)a/(float)b;
	printf("El cociente ente %d y %d da (con cast a float) %f.\n", a, b, div2);

	// Prueba de caso inverso
	int div3;
	float c = 7.3;
	float d = 2.7;
	
	div3 = c/d;
	printf("El cociente ente %f y %f da (sin cast a int) %d.\n", c, d, div3);
	
/*
-¿Por qué es necesario realizar la conversión de int a float? ¿Es necesario en el caso inverso?
La división entera trunca. Las partes fraccionales son descartadas.
En el caso inverso el cast se realiza automáticamente (en la asignación?) como se ve en el último ejemplo.
*/

}
