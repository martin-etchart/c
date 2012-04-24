/*
Programa: cuarto.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo4
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Profiler. 
Valgrind no sirve en casos de memoria estática, por ejemplo cuando se define un array de tamaño fijo: int a[10];. Para ver esto, compilar el archivo cuarto.c, ejecutarlo, y encontrar el error que se produce. Luego usar Valgrind para analizar el funcionamiento del programa y ver que la herramienta no encuentra errores.
*/


// tercero.c

#include <stdio.h>

#define TAM 10

int main(){
    int arreglo[TAM];
    int veinte = 20;
    
    int i;
    for(i=0;i<=TAM+1;i++){
        arreglo[i] = i;
    }
    
    printf("veinte -> %d.\n",veinte);
    printf("i -> %d.\n",i);
}
