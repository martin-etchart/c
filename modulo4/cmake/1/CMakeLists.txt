# Programa: CMakeLists
# Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo4
# Proyecto: encuadro
# Autor: Martin Etchart
#
# Descripción:
# CMake es una herramienta multiplataforma de generación o automatización de código. El 	nombre es una abreviatura para cross platform make (make multiplataforma). El proceso de construcción se controla creando uno o más ficheros CMakeLists.txt en cada directorio (incluyendo subdirectorios). Cada CMakeLists.txt consiste en uno o más comandos.
# Para el ejemplo utilizado en el ejercicio de makefile, generar el correspondiente archivo CMakeLists.txt y probar compilar el proyecto.
# Una vez creado el archivo CMakeLists.txt se deben correr dos comandos; cmake <directorio> y make:
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
# -- Build files have been written to: /home/haldo/Documentos/Investigación/IPOL/ipol/curso_c/parte1
# > make
# Scanning dependencies of target quinto
# [ 50%] Building C object CMakeFiles/quinto.dir/quinto.c.o
# [100%] Building C object CMakeFiles/quinto.dir/auxiliares.c.o
# Linking C executable quinto
# [100%] Built target quinto

cmake_minimum_required (VERSION 2.6)
project (Quinto)

set(SRC
	quinto.c
	auxiliares.c)
	
add_executable(Quinto ${SRC})
