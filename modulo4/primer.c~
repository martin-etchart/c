/*
Programa: primer.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo4
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Debugger. Para el primer ejemplo (primero.c), utilizar el ddd para ver como queda guardado en memoria una variable de tipo struct. Analizar también el puntero a un struct declarado en el programa.
*/

#include <stdio.h>
 
int main(){
 
    typedef struct {
        char *name;
        char sexo;
        int edad;
    } persona;
 
    persona p1;
    p1.name = "Juan";
    p1.sexo = 'M';
    p1.edad = 30;
    persona *pp1;
    pp1 = &p1;
 
    return 0;
}
