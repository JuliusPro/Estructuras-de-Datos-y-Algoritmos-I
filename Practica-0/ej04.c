#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum palo {ESPADA, BASTO, ORO, COPA}; // ordenadas por potencia

struct carta {
  int valor; enum palo p;
};

struct carta azar(struct carta m[], int n){
  return m[ rand() % n ];
}

int main(){
  struct carta mazo[4];
  
  mazo[0].valor = 3;
  mazo[0].p = ESPADA;
  
  mazo[1].valor = 8;
  mazo[1].p = ORO;
  
  mazo[2].valor = 11;
  mazo[2].p = COPA;
  
  mazo[3].valor = 1;
  mazo[3].p = COPA;
  
  char nombrePalo[4][10];
  strcpy(nombrePalo[0], "Espada"); // strcpy es parecido a un '=';
  strcpy(nombrePalo[1], "Basto");
  strcpy(nombrePalo[2], "Oro");
  strcpy(nombrePalo[3], "Copa");
    
  struct carta v = azar(mazo, 4);
  
  printf("La carta es el %d de %s\n", v.valor, nombrePalo[v.p]);
  
  return 0;
}
