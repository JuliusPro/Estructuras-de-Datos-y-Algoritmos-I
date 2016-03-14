#include <stdio.h>
#include <string.h>

enum palo {ESPADA, BASTO, ORO, COPA}; // ordenadas por potencia

struct carta {
  int valor; enum palo p;
};

int main(){
  struct carta mazo[48];
  int i, j;
  for(i = 0; i < 4; i++){
    for(j = 1; j <= 12; j++){
      int indice = i * 12 + j - 1;
      mazo[indice].valor = j;
      mazo[indice].p = i;
    }
  }
  
  char nombrePalo[4][10];
  
  strcpy(nombrePalo[0], "Espada"); // strcpy es parecido a un '=';
  strcpy(nombrePalo[1], "Basto");
  strcpy(nombrePalo[2], "Oro");
  strcpy(nombrePalo[3], "Copa");
  
  for(i = 0; i < 48; i++){
    int indice = mazo[i].p;
    printf("Carta: %d de %s\n", mazo[i].valor, nombrePalo[indice]);
  }
  
  return 0;
}
