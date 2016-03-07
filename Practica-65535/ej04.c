#include <stdio.h>

int sum(int n){
  int i, ans = 0;
  for(i = 1; i <= n; i++){
    ans += i;
  }
  return ans; // (n * (n + 1)) / 2; <-- opcional
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d\n", sum(n));
  return 0;
}
