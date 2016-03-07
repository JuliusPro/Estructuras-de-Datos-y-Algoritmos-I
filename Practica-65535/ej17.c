#include <stdio.h>

void printints(int A[], int n){
  int i;
  for(i = 0; i < n; i++){
    if(i != 0) printf("\t"); // desde el segundo, antes de imprimirlo
    printf("%d", A[i]);     // imprime la tabulación
  }
  printf("\n");
}

int main(){
  int n, i, A[1005];
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  printints(A, n);
  return 0;
}
