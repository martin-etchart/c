/*
Programa: segundo2.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo1
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Escriba un programa que reciba desde la entrada estándar (teclado en este caso) y ponga en la salida estándar (pantalla) el carácter presionado, el carácter siguiente y el carácter precedente. Utilizar las funciones char, getchar() y putchar(char c) de la biblioteca stdio.
*/

#include <stdio.h>

int main() {
	char c; // Funciona tanto con 'int' como con 'char'. El compilador lo permte. Según la 			// norma el largo de int lo determina el entorno en donde se trabaje.
	
	// Mediante putchar

	printf("Ingrese un caracter: ");
	c = getchar();
	
	printf("\nCaracter tecleado: ");
	putchar(c);
	
	printf("\nCaracter siguiente: ");
	putchar(c+1);

	printf("\nCaracter precedente: ");	
	putchar(c-1);
	printf("\n");

	// Mediante printf

	// Esto no funciona por q lee el caracter siguiente al tecleado. No la posición actual
	//printf("Ingrese un caracter: ");
	//c = getchar();

	printf("\nCaracter tecleado: %c",c); 	
	printf("\nCaracter siguiente: %c",c+1);
	printf("\nCaracter precedente: %c",c-1);	
	printf("\n");

	
}
