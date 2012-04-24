/*
Programa: cuarto.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo2
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Estructuras.
-Definir una estructura persona, que tenga los campos siguientes: peso (float), edad (int), sexo (char).

-Investigar el tamaño de la estructura utilizando la función sizeof().

-Defina una estructura estudiante, que tenga los mismos atributos que la anterior y agregue (al final) un atributo nota (char). Investigar el tamaño de la nueva estructura utilizando la función sizeof().

-Defina una nueva estructura estudiante2, que tenga los mismos atributos que la anterior, pero en el siguiente orden: peso, sexo, edad, nota. Investigar el tamaño de la nueva estructura utilizando la función sizeof().
*/

#include <stdio.h>

int main(){

	typedef struct {
		float peso;
		int edad;
		char sexo;
	} persona;
	persona pabloflores;
	
	typedef struct {
		float peso;
		int edad;
		char sexo;
		char nota;
	} estudiante;
	estudiante matiasiglesias;
	
	typedef struct {
		float peso;
		char sexo;
		int edad;
		char nota;
	} estudiante2;
	estudiante2 mauricioviolencia;
	
	printf("Tamaño de 'persona' es de: %lu bytes\n" , sizeof(pabloflores));
	printf("Tamaño de 'estudiante' es de: %lu bytes\n" , sizeof(matiasiglesias));
	printf("Tamaño de 'estudiante2'es de: %lu bytes\n" , sizeof(mauricioviolencia));
}


