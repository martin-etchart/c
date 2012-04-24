/*
Programa: tercer2.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo2
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Arreglos y cadenas de carácteres
-Escribir una función que reciba un puntero a un arreglo de enteros de tamaño MAX_ENTEROS y que imprima los números que sean mayores que el número en la posición anterior del array. Recorrer el arreglo utilizando un índice. En una segunda versión utilizar punteros para la recorrida.
*/

#include <stdio.h>
#define MAX_ENTEROS 10


void imprimemayores_indice(int *pa){
	int i;
	int ai[MAX_ENTEROS];
	
	for(i=0;i<MAX_ENTEROS; i++){
		ai[i] = *pa;
		pa++;
	}
	
	for (i=1; i<MAX_ENTEROS ; (ai[i]>ai[i-1])? printf("%d\t",ai[i]) : printf("") , i++);
	printf("\n");
}

void imprimemayores_puntero(int *pa){
	int i;
	
	for (i=1; i<MAX_ENTEROS ; i++){
		(*(pa+1)>*(pa))? printf("%d\t",*(pa+1)) : printf("") ;
		pa++;
	}
	printf("\n");
}

int main(){
	int a[MAX_ENTEROS] = {12,33,15,14,61,3,54,32,33,21};
	int i;
	
	// Imprime numeros del arreglo de enteros.
	printf("Lista de numeros enteros: \n");
	for (i=0;i<MAX_ENTEROS;printf("%d\t",a[i]),i++);
	printf("\n");
	
	// Imprimer los mayores al anterior del arreglo por indice
	printf("Los mayores al anterior en la lista son (por indice): \n");
	imprimemayores_indice(a);
	
	// Imprimer los mayores al anterior del arreglo por puntero
	printf("Los mayores al anterior en la lista son (por puntero): \n");
	imprimemayores_puntero(&a[0]);

}
