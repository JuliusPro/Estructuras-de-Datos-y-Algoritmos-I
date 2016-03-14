#include <stdio.h>
#include <string.h>

struct contacto {
  char nombre[30], telefono[30];
  unsigned int edad;
};

void actualizaredad(struct contacto * T){
  scanf("%u", &T->edad);
  // *algo.cosa      es lo mismo que         algo->cosa
}

int main(){
  struct contacto peter;
  strcpy(peter.nombre, "Peter J. Gonzales");
  strcpy(peter.telefono, "0341-155-PETER");
  peter.edad = 49;
  
  actualizaredad(&peter);
  
  printf("El contacto se llama %s, tiene %d y su telefono es %s.\n", peter.nombre, peter.edad, peter.telefono);
  
  return 0;
}
