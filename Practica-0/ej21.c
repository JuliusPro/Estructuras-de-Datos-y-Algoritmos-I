#include <stdio.h>

void recorre(int (*f)(int), int A[], int n){
  int i;
  for(i = 0; i < n; i++){
    A[i] = (*f)(A[i]);
    printf("%d ", A[i]);
  }
  printf("\n");
}

int F(int x){
    return x * 4 + 1;
}

int main(){
  
  int n, i, A[1005];
  
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", A + i); // <-- mirar ejercicio 1
  }
  
  recorre(&F, A, n);
  
  return 0;
}
