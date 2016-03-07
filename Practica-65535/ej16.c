#include <stdio.h>

float prom(float A[], int n){
  float s = 0.0; int i;
  for(i = 0; i < n; i++){
    s += A[i];
  }
  return s / n;
}

int main(){
  
  int n, i;
  float A[1005];
  
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%f", &A[i]);
  }
  
  printf("%f\n", prom(A, n));
  return 0;
}
