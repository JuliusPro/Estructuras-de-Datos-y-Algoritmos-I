#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct contacto contacto;
typedef struct agenda agenda;

struct contacto {
  char nombre[30], telefono[30];
  unsigned int edad;
};

struct agenda {
  contacto *C; int n;
};

struct contacto crearcontacto(){
  contacto v;
  scanf("%s %u %s", v.nombre, &v.edad, v.telefono);
  return v;
}

int main(){
  agenda T;
  T.n = 0;
  T.C = malloc( 1 * sizeof(contacto) );
  
  char code[30];
  while(1){
    scanf("%s", code);
    if( strcmp(code, "mostrar") == 0 ){
    
      int i;
      printf("Mostrando agenda:\n");
      for(i = 0; i < T.n; i++){
        contacto v = T.C[i];
        printf("%s\t%d\t%s\n", v.nombre, v.edad, v.telefono);
      }
    
    }
    else if( strcmp(code, "modificar") == 0 ){
      
      char quien[30];
      int nuevaEdad, i;
      scanf("%s %d", quien, &nuevaEdad);
      
      for(i = 0; i < T.n; i++){
        contacto v = T.C[i];
        if( strcmp(v.nombre, quien) == 0 ){
          T.C[i].edad = nuevaEdad;
        }
      }
      
    }
    else if( strcmp(code, "agregar") == 0 ){
      
      T.C = realloc(T.C, (T.n + 1) * sizeof(contacto));
      T.C[ T.n ] = crearcontacto();
      T.n++;
      
    }
  }
  
  free(T.C); // no tiene mucho sentido, nunca se ejecuta esta linea, pero bueno
  return 0;
}
