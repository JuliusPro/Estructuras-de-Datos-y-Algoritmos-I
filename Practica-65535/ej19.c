#include <stdio.h>
#include <string.h> // <-- Para solución opcional

int lenstr(char A[]){
  int p = 0;
  while( A[p] != '\0' ) p++;
  return p; // strlen(A);
}

int main(){
  char s[1005];
  scanf("%s", s);
  printf("%d\n", lenstr(s));
  return 0;
}
