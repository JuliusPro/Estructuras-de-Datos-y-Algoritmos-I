#include <stdio.h>

int main(){
  
  // creo que anda, pero no lo probé mucho...
  
  int p = 0, i, borrarEOL = 0, borrarPosta = 0, comillas = 0;
  char s[1000005];
  
  while( (s[p++] = getchar()) != 'x' ); // Lee el archivo y lo guarda
                                        // en el array s de tamaño p.
  for(i = 0; i < p - 1; i++){
    if(comillas == 1){
      putchar(s[i]);
      if(s[i] == '"') comillas = 0;
      continue;
    }
    if(borrarPosta == 1){
      if(i + 1 < p && s[i] == '*' && s[i+1] == '/'){
        borrarPosta = 0;
        i++;
      }
      continue;
    }
    if(borrarEOL == 1){ // si está en 1 entonces se debe borrar hasta
      if(s[i] == '\n'){ // el EOL (end of line).
        putchar(s[i]);
        borrarEOL = 0;
      }
      continue;
    }
    if(s[i] == '"'){
      comillas = 1 - comillas; // si comillas era 1 pasa a ser 0 y
                               // viceversa...
    }
    if( i + 1 < p && s[i] == '/' && s[i+1] == '/' ){
      borrarEOL = 1;
      continue;
    }
    if( i + 1 < p && s[i] == '/' && s[i+1] == '*' ){
      i++;
      borrarPosta = 1;
      // Notar que /**/ es un comentario cerrado y /*/ es uno abierto
      continue;
    }
    putchar(s[i]);
  }
  
  return 0;
}
