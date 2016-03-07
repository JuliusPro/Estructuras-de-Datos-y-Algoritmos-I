#include <stdio.h>

int isin(int A[], int n, int e){
  int i;
  for(i = 0; i < n; i++){
    if(A[i] == e){
      return 1;
    }
  }
  return 0;
}

int main(){
  int n, A[1005], e, i;
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  scanf("%d", &e);
  printf("%d\n", isin(A, n, e));
  return 0;
}
