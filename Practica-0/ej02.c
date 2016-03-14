#include <stdio.h>
#include <stdlib.h>

char *convertir(int v){ // itoa esta definido en stdlib.h
  char *A; A = malloc(20 * sizeof(char)); // el numero va a tener menos 20 digitos. (sino no entra en un entero)
  int p = 0, i;
  
  while(v){ // poner v solo es equivalente a poner v != 0
    A[p] = v % 10 + '0'; 
    p++;                 // Si no entendes trata de simular
    v /= 10;             // lo que hace este while.
  }
  A[p] = '\0'; // el ultimo caracter de una string debe ser '\0'
  
  for(i = 0; i < p / 2; i++){ // invertir el array
    int t = A[i];
    A[i] = A[p - 1 - i];
    A[p - 1 - i] = t; // basicamente, un swap
  }
  
  return A;
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%s\n", convertir(n));
  return 0;
}
