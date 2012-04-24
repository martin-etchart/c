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
		unsigned char byte0;
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
	
	tipo_datos reg1;
	
	reg1.bit.bit7 = 1;
	printf("Se escribe un '1' en el bit7\n");
	printf("reg1 : 0x%x%x%x%x%x%x%x%x \n",
			reg1.bit.bit0,reg1.bit.bit1,reg1.bit.bit2,reg1.bit.bit3,
			reg1.bit.bit4,reg1.bit.bit5,reg1.bit.bit6,reg1.bit.bit7);
	
	printf("Se escribe un '1111' en el nibble0\n");
	reg1.nibble.nibble0 = 127;
	printf("reg1 : 0x%x%x%x%x%x%x%x%x \n",
			reg1.bit.bit0,reg1.bit.bit1,reg1.bit.bit2,reg1.bit.bit3,
			reg1.bit.bit4,reg1.bit.bit5,reg1.bit.bit6,reg1.bit.bit7);
			
	printf("Se escribe un '10101010' en el byte0\n");
	reg1.byte.byte0 = 170;
	printf("reg1 : 0x%x%x%x%x%x%x%x%x \n",
			reg1.bit.bit0,reg1.bit.bit1,reg1.bit.bit2,reg1.bit.bit3,
			reg1.bit.bit4,reg1.bit.bit5,reg1.bit.bit6,reg1.bit.bit7);

	printf("Se escribe un '256d' en el byte0\n");
	reg1.byte.byte0 = 256;
	printf("reg1 : 0x%x%x%x%x%x%x%x%x \n",
			reg1.bit.bit0,reg1.bit.bit1,reg1.bit.bit2,reg1.bit.bit3,
			reg1.bit.bit4,reg1.bit.bit5,reg1.bit.bit6,reg1.bit.bit7);

}
