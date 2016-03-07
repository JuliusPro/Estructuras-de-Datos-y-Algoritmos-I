#include <stdio.h>
#include <string.h>

int atoi(char A[]){
    int n = strlen(A), i, pot = 1, ans = 0;
    for(i = n - 1; i >= 0; i--){
      ans += pot * (A[i] - '0');
      pot *= 10;
    }
    return ans;
}

int main(){
  char s[1005];
  scanf("%s", s);
  printf("%d\n", atoi(s));
  return 0;
}
