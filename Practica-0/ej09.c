#include <stdio.h>

struct contacto {
  char nombre[30], telefono[30];
  unsigned int edad;
};

struct contacto crearcontacto(){
  struct contacto v;
  scanf("%s %u %s", v.nombre, &v.edad, v.telefono);
  return v;
}

int main(){
  struct contacto chabon = crearcontacto();
  printf("El contacto se llama %s, tiene %d y su telefono es %s.\n", chabon.nombre, chabon.edad, chabon.telefono);
  return 0;
}
