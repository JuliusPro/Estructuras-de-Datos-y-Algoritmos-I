#include <stdio.h>
#include <math.h>

int isprime(int n){
  int sq = sqrt(n), i;
  for(i = 2; i <= sq; i++){ // Solo hace falta probar si es divisible
    if(n % i == 0) return 0; // por los números desde el 2 hasta su
  }                         // raíz cuadrada inclusive.
  return 1;
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d\n", isprime(n));
  return 0; 
}
