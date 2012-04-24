/*
Programa: tercer.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo1
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Operadores. Considere las expresiones dadas a continuación. Asuma que x, y y z valen 0, 1 y 2 respectivamente. Para cada expresión piense que valor toma. Verificar que el resultado pensado sea el correcto.
x + y * z
x == 0 && y != 4
!z || y
y ? x : z
x - y < z
*/

#include <stdio.h>

int main(){
	int x=0;
	int y=1;
	int z=2;

	printf("Dados x=%d, y=%d, z=%d': ",x,y,z);

	printf("\nResultado de x + y * z es: %d",x + y * z); 
	// Respuesta: 2

	printf("\nResultado de x == 0 && y != 4 es: %d", x == 0 && y != 4);
	// Respuesta: 1

	printf("\nResultado de !z || y es: %d", !z || y);
	// Respuesta: 1

	printf("\nResultado de y ? x : z es: %d", y ? x : z);
	// Respuesta: 0

	printf("\nResultado de x - y < z es: %d", x - y < z);
	// Respuesta: 1

	printf("\n");
}
