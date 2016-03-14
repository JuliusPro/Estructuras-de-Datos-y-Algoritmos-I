#include <stdio.h>

void setin(int *x){
    if(*x != 0){
      *x = 1;
    } // si el entero era cero, no hace falta hacer nada.
}

int main(){
  int k = 2, y = 0;
  
  setin(&k);
  setin(&y);
  
  printf("%d %d\n", k, y);
  
  return 0;
}
