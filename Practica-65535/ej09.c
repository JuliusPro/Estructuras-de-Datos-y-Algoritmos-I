#include <stdio.h>

int main(){
  float g;
  scanf("%f", &g);
  printf("%f grados Fahrenheit = %f grados Celsius\n", g, ((g - 32.0) * 5.0) / 9.0);
  printf("%f grados Celsius = %f grados Fahrenheit\n", g, (g * 9.0) / 5.0 + 32.0);
  return 0;
}
