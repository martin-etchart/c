/*
Programa: octavo.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo1
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Tipos de variables. Para el compilador que utilice (en este caso gcc), investigar el tamaño asignado a variables de tipo:
-int
-float
-double
-char

Sugerencia: Utilizar la función sizeof().
*/

#include <stdio.h>

int main() {

	int i;
	float a;
	double b;
	char c;
	
	printf("El tamaño de los integers es: %d bytes.\n",sizeof(i));
	printf("El tamaño de los char es: %d bytes.\n",sizeof(c));
	printf("El tamaño de los single float es: %d bytes.\n",sizeof(a));
	printf("El tamaño de los double float es: %d bytes.\n",sizeof(b));
}
