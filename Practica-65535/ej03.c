#include <stdio.h>

int hasroot(float a, float b, float c){
  float discriminante = b * b - 4 * a * c;
  if(discriminante == 0.0){
    return 1;
  }
  if(discriminante > 0.0){
    return 2;
  }
  return 0;
}

int main(){
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  printf("%d\n", hasroot(a, b, c));
  return 0;
}
