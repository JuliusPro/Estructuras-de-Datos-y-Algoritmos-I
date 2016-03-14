#include <stdio.h>
#include <stdlib.h>

int main(){
  char *a = malloc(100);
  free(a);
  free(a); // no, ninguno jaja. luego de ejecutarlo una vez, a vale null
           // y free(null) no tiene ningun efecto.
  return 0;
}
