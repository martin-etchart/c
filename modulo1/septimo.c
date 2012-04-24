/*
Programa: septimo.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo1
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Preprocesado. 
En el programa de "arreglos":
-Definir el tamaño de los arreglos utilizando #define TAM 10 (si no lo ha hecho aún, en este caso el tamaño es 10).
-Compilar deteniendo el proceso luego del preprocesado (para ejemplificar supondremos que el archivo se llama septimo.c)
>gcc -E septimo.c -o septimo.i
Inspeccionar la salida del preprocesador septimo.i e identificar las ocurrencias de TAM.
Sugerencia: Si desea que la salida sea más sencilla, no incluya stdio.h y elimine los printf.
*/

//#include <stdio.h>
#define TAM 10

int main() {


	int i=0;
	int z[TAM] = {0, 1, 2, 3, 4};
	double f[TAM] = {9.34, 5.43, 2.34, 2.56, 0.001};
	
	for (i=0; i<TAM ; i++){
//		printf("El valor de %f dividido %d queda: ",f[i],z[i]);
		f[i] = (z[i]==0)? f[i] : f[i]/z[i] ;
//		printf("%f\n",f[i]);
	};
}
