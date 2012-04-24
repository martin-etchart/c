/*
Programa: segundo2.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo2
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Punteros y Arreglos. 
-Escriba un programa que defina un array de enteros de tamaño 10. Recorra el array utilizando punteros, imprima en pantalla el valor de los enteros y su dirección de memoria. Verifique que el comportamiento sea coherente con el tamaño reportado por sizeof().
-Realice nuevamente la parte anterior, pero con un array de chars. Compare los resultados.
*/

#include <stdio.h>
#define TAM 10

int main(){
	char a[TAM];
	int i;
	char *pa;
	
	for (i=0;i<TAM;a[i]='a'+i,i++); /*Defino array*/
	
	
	printf("Address\t\t\tValue\t\tSize (bytes)\n"); /*Creo cabecera*/
	
	pa = &a[0];	/*Apunto al primer elemento del array*/
	
	for (i = 0;i<TAM;i++){
	printf("%p\t\t%c\t\t%lu\n",pa,*(pa),sizeof(*(pa)));
	pa++;
	};
}
