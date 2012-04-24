#Programa: makefile
#Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo3
#Proyecto: encuadro
#Autor: Martin Etchart
#
#Descripción:
#Diseño de un filtro FIR.
#

testfir: fir.o genera_senales.o testfir.o 
	gcc -o testfir testfir.o fir.o genera_senales.o
	
testfir.o: testfir.c fir.h genera_senales.h
	gcc -std=c99 -c testfir.c
        
fir.o: fir.c fir.h
	gcc -std=c99 -c fir.c
	
genera_senales.o: genera_senales.c
	gcc -std=c99 -c genera_senales.c 

clean: 
	rm testfir genera_senales.o fir.o testfir.o

#########################################
# Solución en página.
#
#!/bin/bash
#
#OBJ = fir.o genera_señales.o test_fir.o
# 
# 
#test_fir : $(OBJ)
#	gcc -g $(OBJ) -o $@
# 
#%.o: %.c
#	gcc -c $^
#########################################
