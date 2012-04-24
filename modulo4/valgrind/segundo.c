/*
Programa: segundo.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo4
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Profiler. 
Otro error común es olvidarse de inicializar una variable o un array antes de usarlo. Investigar el código implementado en segundo.c y utilizar Valgrind para encontrar los errores de no inicialización de variables.

Nota: probar el funcionamiento de la opción --track-origins=yes de Valgrind. En ese caso se ejecutaría:
> valgrind --track-origins=yes ./segundo
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    
  int i;
  int a[10];
  for (i = 0; i < 9; i++)
    a[i] = i;
    
  for (i = 0; i < 10; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
  
  return 0;
  
}
