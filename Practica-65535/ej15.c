#include <stdio.h>

int invertir(int n){
  int dig[10], p = 0;
  while(n > 0){
    dig[p] = n % 10;
    n /= 10;
    p++;
  }
  int i, ans = 0, pot = 1;
  for(i = p - 1; i >= 0; i--){
    ans += dig[i] * pot;
    pot *= 10;
  }
  return ans;
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d\n", invertir(n));
  return 0;
}
