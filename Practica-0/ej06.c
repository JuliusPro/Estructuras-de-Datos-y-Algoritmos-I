#include <stdio.h>

void setzerozero(int A[]){
  A[0] = 0;
}

int main(){
  int n, A[505], i;
  
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  
  setzerozero(A);
  for(i = 0; i < n; i++){
    printf("%d ", A[i]);
  }
  printf("\n");
  
  /* Lo sorprendente es que si funciona.
   * Al pasar un array por parametro se pasa un puntero a la 
   * primer posicion, no se copia todo el array.
   */
  
  return 0;
}
