#include <stdio.h>
#include <string.h>

int cmpstr(char A[], char B[]){
  // if( strcmp(A, B) == 0 ) return 1; Solución usando string.h
  // return 0; 
  int sz1 = strlen(A);
  int sz2 = strlen(B);
  if(sz1 != sz2) return 0;
  int i;
  for(i = 0; i < sz1; i++){
    if(A[i] != B[i]) return 0;
  }
  return 1;
}

int main(){
  char s[1005], t[1005];
  scanf("%s %s", s, t);
  printf("%d\n", cmpstr(s, t));
  return 0;
}
