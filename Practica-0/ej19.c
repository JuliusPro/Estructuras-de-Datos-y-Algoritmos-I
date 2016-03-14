#include <stdio.h>

int apply(int (*f) (int), int x){
  return (*f)(x);
}

int F(int x){
  return 2 * x - 1;
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d\n", apply(&F, n));
  return 0;
}
