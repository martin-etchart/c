/*
Programa: tercer.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo2
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Arreglos y cadenas de carácteres.
-Escribir una función que reciba cadena de caracteres (arreglo de caracteres, tipo char, terminada en null) e imprima la misma omitiendo las vocales. Utilizar primero if-else y otra versión case-switch.
*/

#include <stdio.h>
#include <ctype.h>

void sinvocales_if(char *pc){
	char ci;	
	
	while ((*pc)!= '\0') {
		ci = tolower(*(pc));
		if (ci!='a' && ci!='e' && ci!='i' && ci!='o' && ci!='u'){
			printf("%c",*pc);
		} else {
		}
		pc++;
	}
	printf("\n");		
	return;
}

void sinvocales_switch(char *pc){
	char ci;
	
	while ((*pc)!= '\0') {
		ci = tolower(*(pc));
		
		switch (ci) {
	
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				break;
			default : 
				printf("%c",*pc);
				break;
		}
		pc++;
	}
	printf("\n");		
	return;
}



int main(){
	char c[] = "Come on and dance with Vesubio!";
	
	printf("La cadena de caracteres es: %s\n",c);
	
	printf("La cadena sin vocales (versión if) queda: ");	
	sinvocales_if(&c[0]);

	printf("La cadena sin vocales (versión switch) queda: ");	
	sinvocales_switch(&c[0]);

}
