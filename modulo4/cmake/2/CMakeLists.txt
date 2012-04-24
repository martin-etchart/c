# Programa: CMakeLists
# Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo4
# Proyecto: encuadro
# Autor: Martin Etchart
#
# Descripción:
# Analizar el código que se implementa en los archivos a.c, b.c, c.c, libabc.h y demo.c. 
#
# 1. Generar un archivo CMakeLists.txt para compilar este programa utilizando cmake.
# Compilar utilizando cmake.
# Salida:
# > cmake .
# -- The C compiler identification is GNU
# -- The CXX compiler identification is GNU
# -- Check for working C compiler: /usr/bin/gcc
# -- Check for working C compiler: /usr/bin/gcc -- works
# -- Detecting C compiler ABI info
# -- Detecting C compiler ABI info - done
# -- Check for working CXX compiler: /usr/bin/c++
# -- Check for working CXX compiler: /usr/bin/c++ -- works
# -- Detecting CXX compiler ABI info
# -- Detecting CXX compiler ABI info - done
# -- Configuring done
# -- Generating done
# -- Build files have been written to: /home/haldo/Documentos/IPOL/C/ipol/examples/cmake/primer
# > make
# Scanning dependencies of target demo
# [ 25%] Building C object CMakeFiles/demo.dir/demo.c.o         
# [ 50%] Building C object CMakeFiles/demo.dir/a.c.o                               
# [ 75%] Building C object CMakeFiles/demo.dir/b.c.o
# [100%] Building C object CMakeFiles/demo.dir/c.c.o                                     
# Linking C executable demo                                                   
# [100%] Built target demo
#
# 2. Cambiar la fecha de modificación (utilizando el comando touch) de alguno de los archivos (por ejemplo b.c), y volver a compilar utilizando cmake.
# Salida:
# > touch b.c 
# > cmake .
# -- Configuring done
# -- Generating done
# -- Build files have been written to: /home/haldo/Documentos/IPOL/C/ipol/examples/cmake/primer
# > make
# Scanning dependencies of target demo
# [ 25%] Building C object CMakeFiles/demo.dir/b.c.o                                   
# Linking C executable demo                                                         
# [100%] Built target demo


cmake_minimum_required (VERSION 2.6)
project (demo)

set(SRC
	demo.c
	a.c
	b.c
	c.c)
	
add_executable(demo ${SRC})
