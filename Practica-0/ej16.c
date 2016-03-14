#include <stdio.h>

struct contacto {
  char nombre[30], telefono[30];
  unsigned int edad;
};

float prom(struct contacto * A, int n){ // cambie de int a float para 
  int i;                                // que pueda manejar numeros
  float promedio = 0.0;                 // con coma.
  for(i = 0; i < n; i++){
    promedio += A[i].edad;
  }
  return promedio / n;
}

int main(){
  struct contacto arr[4];
  
  arr[0].edad = 13;
  arr[1].edad = 16;
  arr[2].edad = 14;
  arr[3].edad = 15;
  
  printf("%f\n", prom(arr, 4));
  return 0;
}
