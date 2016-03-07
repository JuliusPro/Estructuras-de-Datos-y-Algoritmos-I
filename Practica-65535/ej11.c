#include <stdio.h>

int main(){
  char c; // se puede usar int también
  int ans = 0;
  
  while( (c = getchar()) != EOF ){
    if(c == '\n') ans++; // suponiendo que en todas las lineas está
  }                     // el caracter '\n' al final.
  
  printf("%d\n", ans);
  return 0;
}
