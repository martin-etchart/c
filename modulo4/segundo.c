/*
Programa: segundo.c
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo4
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Debugger. Para el segundo ejemplo (segundo.c), analizar como se guarda en memoria una lista encadenada. Ver la asignación de punteros en el ciclo for que imprime el valor de los elementos de la lista.
*/

#include <stdio.h>

struct elemento{
    int valor;
    struct elemento* next;
};
 
typedef struct elemento item;
 
int main(){
 
    item item1, item2, item3;
    item1.next = &item2; item1.valor = 10;
    item2.next = &item3; item2.valor = 20;
    item3.next = &item1; item3.valor = 25;
 
    int i;
    item * actual = &item1;
    for ( i=0 ; i<10 ; i++){
        printf("Valor del elemento: %d.\n",actual->valor);
        actual = actual->next;
    }
 
    return 0;
}
