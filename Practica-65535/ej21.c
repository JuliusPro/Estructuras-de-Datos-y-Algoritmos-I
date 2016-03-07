#include <stdio.h>
#include <string.h>

int main(){
  char s[1005], t[1005];
  scanf("%s %s", s, t);
  if( strcmp(s, "usuario") == 0 ){
    if( strcmp(t, "clave") == 0 ){
      puts("Al toque perro.");
    }
    else {
      puts("Le pifiaste con la clave papu");
    }
  }
  else {
    puts("Le pifiaste de usuario :(");
  }
  return 0;
}
