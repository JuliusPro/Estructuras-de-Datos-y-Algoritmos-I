#include <stdio.h>

// https://es.wikipedia.org/wiki/Algoritmo_de_Euclides

int euclid(int a, int b){ 
  if(a == 0) return b;
  return euclid(b % a, a);
}

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", euclid(a, b));
  return 0;
}
