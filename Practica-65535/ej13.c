#include <stdio.h>

void simplecaesar(){
  char c;
  
  while( (c = getchar()) != EOF ){
    if     (c == 'a') putchar('u');
    else if(c == 'e') putchar('o');
    else if(c == 'o') putchar('e');
    else if(c == 'u') putchar('a');
    else putchar(c);
  }
  
}

int main(){
  simplecaesar();
  return 0;
}
