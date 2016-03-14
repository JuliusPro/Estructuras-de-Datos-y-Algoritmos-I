#include <stdio.h>

int main(){
  
  int a, b, c;
  
  printf("%p %p %p\n", &a, &b, &c);
  
  int arr[3], i;
  
  for(i = 0; i < 3; i++){
      printf("Elemento %d es queda en %p\n", i, &arr[i]);
      printf("Elemento %d es queda en %p\n", i, arr + i);
  }
  
  return 0;
}
