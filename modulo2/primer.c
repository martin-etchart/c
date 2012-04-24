/*
Programa: primer.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo2
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Punteros. 
-Escribir una función intercambiar que recibe dos punteros a enteros e intercambie los valores de los enteros entre sí. Para verificar el correcto funcionamiento escribir un programa que imprime los enteros antes y después de invocar la función.
-Intentar realizar la misma función pasando como parámetros los enteros.
*/

#include <stdio.h>

void intercambiar(int *pa, int *pb){
	int z;
	
	z=*pa;
	*pa=*pb;
	*pb=z;
}

void intercambiar2(int a, int b){
	int z;
	
	z=a;
	a=b;
	b=z;
}

int main() {

	int a = 1;
	int b = 2;

	printf("Las variables a intercambiar son: a=%d y b=%d.\n",a,b);	
	intercambiar2(a,b);
	printf("Pasando int's como parámetros quedan: a=%d y b=%d.\n", a, b);	
	
	a=1;
	b=2;
	
	printf("Las variables a intercambiar son: a=%d y b=%d.\n",a,b);
	intercambiar(&a,&b);
	printf("Pasando punteros como parámetros las variables quedan: a=%d y b=%d.\n",a,b);

}
