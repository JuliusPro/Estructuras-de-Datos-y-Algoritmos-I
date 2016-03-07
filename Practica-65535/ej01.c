#include <stdio.h>

float ABS(float a){
  if(a < 0.0) return -a;
  return a;
}

int main(){
  float f;
  scanf("%f", &f);
  printf("%f\n", ABS(f));
  return 0;
}
