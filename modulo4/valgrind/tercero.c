/*
Programa: tercero.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo4
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Profiler. 
Valgrind también sirve para buscar memory leaks, o huecos de memoria que dejan los programas (memoria que se pide pero no se libera). Analizar entonces el código implementado en tercero.c, compilarlo, y utilizar Valgrind con la opción --leak-check=full para ver un informe del uso de memoria del programa. Encontrar los memory leaks.
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    
  int i;
  int* a;

  for (i=0; i < 10; i++){
    a = malloc(sizeof(int) * 100);
  }
  
  free(a);
  
  return 0;
}