/*
Programa: testfir.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo3
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Diseño de un filtro FIR.

Para verificar el correcto funcionamiento:

-Escribir un programa de prueba, por ejemplo en un archivo testfir.c, donde se defina dos arreglos de igual tamaño (SIGNAL_LENGTH), uno para la señal de entrada elegida convenientemente (por ejemplo: impulso o escalón) y otro para escribir el resultado del filtrado de dicha señal. Se debe incializar el filtro eligiendo coeficientes de manera conveniente (utilizar una media movil, coeficientes=1/TAP_LENGTH) y luego en un bucle llamar la función fir para realizar el filtrado.

-Para crear la señal de entrada y los coeficientes se sugiere escribir funciones auxiliares:
	-Función escalón: recibe como parámetros: arreglo, altura y muestra en donde comienza el 	escalón (void step (sample_t arreglo[], int tsubida, sample_t altura);).
	-Funcion impulso.

-Dentro de la función fir imprima las variables que crea conveniente para verificar el 		correcto funcionamiento.

-Experimentar cambiando los modificadores a las variables y a las funciones y verificar si son visibles o no desde otros módulos.
*/

#include "fir.h"
#include "genera_senales.h"
#include <stdio.h>

int main(){

	sample_t u[SIGNAL_LENGTH]; 					//señal de entrada
	sample_t y[SIGNAL_LENGTH]; 					//señal de salida del filtro
	
	sample_t ma = 1.0/TAP_LENGTH; 				//moving average
	sample_t coefs[TAP_LENGTH] = {ma,ma,ma,ma};	//coeficientes de media movil
	
	int retardo = 4;							//retardo
	sample_t altura = 4;						//altura
	
	printf("\n");
	printf("************** Filtrado FIR ***************\n");
	printf("*                                         *\n");
	printf("*                _________                *\n");
	printf("*        U      |         |    Y          *\n");
	printf("*      -------->|   FIR   |------->       *\n");
	printf("*               |_________|               *\n");
	printf("*                                         *\n");
	printf("*******************************************\n");
	printf("\n");
	
	/*Generar señal de entrada*/
	step(&u[0],retardo,altura);
	//impulso(&u[0],retardo,altura);
	
	/*Imprimir señal de entrada*/
	printf("Señal de entrada al filtro:\n");
	for (int i=0;i<=SIGNAL_LENGTH;printf("%1.1f ",u[i]),i++);
	printf("\n\n");
	
	/*Inicialización del filtro*/
	ini_fir(coefs);  //printf("Coeficientes del filtro: %1.1f\n",c[0]);
	
	/*Filtrado de la señal*/
	for (int i=0;i<=SIGNAL_LENGTH;i++){
		//printf("Taps disponibles: %d\n",taps);
		y[i] = fir(&u[i]); //printf("Señal de salida: %f\n",y[i]);
	};
	
	/*Imprimir señal de salida*/
	printf("Señal de salida al filtro:\n");
	for (int i=0;i<=SIGNAL_LENGTH;printf("%1.1f ",y[i]),i++);
	printf("\n\n");

}
