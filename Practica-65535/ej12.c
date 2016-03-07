#include <stdio.h>

void echo(){
  char c;
  while( (c = getchar()) != EOF ){
    putchar(c);
  }
}

int main(){
  echo();
  return 0;
}
