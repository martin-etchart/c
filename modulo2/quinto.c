/*
Programa: quinto2.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo2
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Uniones.
Ahora queremos implementar un tipo de datos registro que permita acceder y modificar los datos de tres formas:
>byte
>nibble
>bit
*/

#include <stdio.h>

int main(){

	typedef struct{
		unsigned char byte;
	} tipo_byte;

	typedef struct{
		unsigned char nibble0 : 4;
		unsigned char nibble1 : 4;
	} tipo_nibble;
	
	typedef struct{
		unsigned char bit0 : 1;
		unsigned char bit1 : 1;
		unsigned char bit2 : 1;
		unsigned char bit3 : 1;
		unsigned char bit4 : 1;
		unsigned char bit5 : 1;
		unsigned char bit6 : 1;
		unsigned char bit7 : 1;
	} tipo_bit;

	typedef union {
		tipo_byte byte;
		tipo_nibble nibble;
		tipo_bit bit;
	} tipo_datos;
	
	tipo_datos data1;
	
	
	

}
