#include <stdio.h>

int main(){
  
  /*
   | Regla del espiral:
   | 1) Comenzando con el elemento desconocido, moverse en espiral
   | reemplazando:
   | [X]      --> "arreglo de tam X"
   | []       --> "arreglo de tam desconocido"
   | (tipo1, tipo2, ..., tipoN) --> "funcion que toma (tipo1, tipo2, ..., tipoN) y devuelve"
   | * --> "puntero a"
   | 2) Resolver parentesis primero!
   */
  
  int (*f)[3]; // f puntero a un arreglo de tam 3 de enteros.
  int *f[3];   // f arreglo de tam 3 de punteros a enteros.
  int *(f[3]); // f arreglo de tam 3 de punteros a enteros.
  int *f();    // f funcion que toma void y devuelve un puntero a entero.
  int (*f)();  // f puntero a funcion que toma void y devuelve entero.
  
  // PD: esto no anda, jaja
  
  return 0;
}
