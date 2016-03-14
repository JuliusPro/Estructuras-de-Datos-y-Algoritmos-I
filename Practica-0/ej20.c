#include <stdio.h>

void apply(int (*f) (int), int *x){
  *x = (*f)(*x);
}

int F(int x){
  return 2 * x - 1;
}

int main(){
  int n;
  scanf("%d", &n);
  apply(&F, &n);
  printf("%d\n", n);
  return 0;
}
