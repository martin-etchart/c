# Programa: makefile
# Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo1
# Proyecto: encuadro
# Autor: Martin Etchart
#
# Descripción:
# Makefile. 
# make es una herramienta de generación o automatización de código, que lee las
# instrucciones para generar el programa u otra acción del archivo makefile. Más información # sobre makefile.
#
# Crear un makefile que compile sin enlazar los archivos auxiliares.c y quinto.c, y luego
# enlace ambos códigos objeto (.o) para crear el ejecutable quinto.

enlazar : auxiliares.o quinto.o
	gcc auxiliares.o quinto.o -o quinto
	
auxiliares : auxiliares.c
	gcc -c auxiliares.c

quinto : quinto.c
	gcc -c quinto.c

