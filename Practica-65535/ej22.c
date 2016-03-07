#include <stdio.h>

int main(){
  
  int cnt[5], i;
  char c, vocal[5] = "aeiou";
  
  for(i = 0; i < 5; i++){
    cnt[i] = 0;
  }
  
  while( (c = getchar()) != EOF ){
    for(i = 0; i < 5; i++){
      if(c == vocal[i]) cnt[i]++;
    }
  }
  
  for(i = 0; i < 5; i++){
    printf("La vocal %c aparece %d veces.\n", vocal[i], cnt[i]);
  }
  
  return 0;
}
