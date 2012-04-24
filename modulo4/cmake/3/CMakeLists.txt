# Programa: CMakeLists
# Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo4
# Proyecto: encuadro
# Autor: Martin Etchart
#
# Descripción:
# cmake. Analizar el código que se implementa en los archivos a.c, b.c, c.c, libabc.h y demo.c. 
#
# 3. Nuevamente se utilizarán los archivos a.c, b.c, c.c, libabc.h y demo.c. Ahora mover los archivos a.c, b.c, c.c y libabc.h a un subdirectorio library y el archivo demo.c a otro subdirectorio demo. Generar entonces los tres archivos CMakeLists.txt necesarios (uno en el directorio raíz, y uno en cada subdirectorio creado). Compilar utilizando cmake.
# Nota: Considerar los comandos ADD_SUBDIRECTORY y ADD_LIBRARY de cmake.


CMAKE_MINIMUM_REQUIRED (VERSION 2.6)
PROJECT(Demo)

ADD_SUBDIRECTORY(library)
ADD_SUBDIRECTORY(demo)
