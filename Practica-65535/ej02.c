#include <stdio.h>

float eval(float a, float b, float c, float x){
  return a * x * x + b * x + c; // (!) No se puede usar x^2 para 
}                               // elevar al cuadrado

int main(){
  float a, b, c, x;
  scanf("%f %f %f %f", &a, &b, &c, &x);
  printf("%f\n", eval(a, b, c, x));
  return 0;
}
