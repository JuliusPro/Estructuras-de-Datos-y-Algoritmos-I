#include <stdio.h>
#include <stdlib.h>

char *getnewline(){
  char c, *A;
  int p = 0;
  A = malloc( 1 * sizeof(char) );
  
  while( (c = getchar()) != '\n' ){
    A[p] = c; 
    p++;
    A = realloc(A, (p + 1) * sizeof(char) );
  }
  A[p] = '\0';
  
  return A;
}

int main(){
  char *S = getnewline();
  printf("%s\n", S);
  free(S);
  return 0;
}
