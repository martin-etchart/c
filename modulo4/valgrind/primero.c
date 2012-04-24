/*
Programa: primero.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo4
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Profiler. 
Un error común es intentar acceder a elementos de un array fuera de sus límites (ejemplo en primero.c).

> gcc -g primero.c -o primero
> valgrind ./primero
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    
  int i;
  int* a = malloc(sizeof(int) * 10);
  
  if (!a) return -1; /*malloc failed*/
  
  for (i = 0; i < 11; i++){
    a[i] = i;
  }
  
  free(a);
  
  return 0;
  
}
