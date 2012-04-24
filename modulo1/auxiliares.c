/*
Programa: auxiliares.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo1
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Funciones.
-Escribir una función que devuelva el máximo de dos números enteros: 
	int maximo(int a, int b).
-En el mismo archivo escribir la función main() que defina dos enteros (darles cualquier valor) y luego llamar la función para hallar el máximo. Imprimir el resultado.

-Mover la función maximo a un archivo diferente. Guardar este nuevo archivo con el nombre auxiliares.c. Escribir el archivo de encabezado correspondiente.

Compilar sin enlazar el archivo auxiliares.c.
>gcc -c auxiliares.c
Compilar sin enlazar el archivo que contiene el main (para ejemplificar supondremos se llama quinto.c).
>gcc -c quinto.c
Enlazar ambos códigos objeto (.o) para crear el ejecutable quinto.
>gcc auxiliares.o quinto.o -o quinto
Verificar el funcionamiento del programa.

Agregar al archivo auxiliares.c (del anterior ejercicio) una función que devuelva el mínimo de dos números enteros: int minimo(int a, int b).
*/

int maximo(int a, int b){
	return (a>b)? a : b;
}

int minimo(int a, int b){
	return (a>b)? b : a;
}


