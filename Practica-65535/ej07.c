#include <stdio.h>

int bisiesto(int n){
  if(n % 4 == 0){
    if(n % 100 == 0){
      if(n % 400 == 0) return 1;
      return 0;
    }
    return 1;
  }
  return 0;
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d\n", bisiesto(n));
  return 0;
}
