/*
Programa: fir.h
Curso: Programación C - http://iie.fing.edu.uy/rosaluna/wiki/Ipol:Modulo3
Proyecto: encuadro
Autor: Martin Etchart

Descripción:
Diseño de un filtro FIR.

La interfaz pública incluye:

-Definir un tipo nuevo sample_t representado por un float y utilizarlo de aquí en más para la implementación del FIR.

-Función de inicialización del FIR con los coeficientes correspondientes (void ini_fir( sample_t coefs[]);).

-Función de filtrado: recibe como parámetro la muestra actual y devuelve la muestra de la señal filtrada (calculada como convolución de los coeficientes y la señal de entrada). (sample_t fir(sample_t muestra);).

-Recordar proveer un archivo de encabezado para ser incluido por los módulos que utilicen éste. Este debe incluir una defición macro (utilizar, #define TAP_LENGTH 4 y #define SIGNAL_LENGTH 10) para especificar el orden del filtro y largo de la señal respectivamente
*/

#define TAP_LENGTH 5 // orden del filtro
#define SIGNAL_LENGTH 15 // numero de muestras de la señal

typedef float sample_t;

void ini_fir (sample_t coefs[]);

sample_t fir(sample_t* muestra);

