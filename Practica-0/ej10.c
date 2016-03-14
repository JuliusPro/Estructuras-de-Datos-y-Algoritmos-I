#include <stdio.h>
typedef struct punto punto;

struct punto {
  float x, y;
};

punto puntoMedio(punto P, punto Q){
    punto ans;
    
    punto vector;
    vector.x = Q.x - P.x;
    vector.y = Q.y - P.y;
    
    ans = P;
    ans.x += (vector.x) / 2.0;
    ans.y += (vector.y) / 2.0;
    
    return ans;
}

int main(){
  punto P, Q;
  
  scanf("%f %f %f %f", &P.x, &P.y, &Q.x, &Q.y);
  
  punto medio = puntoMedio(P, Q);
  
  printf("%f %f\n", medio.x, medio.y);

  return 0;
}
