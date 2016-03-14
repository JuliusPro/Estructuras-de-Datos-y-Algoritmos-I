#include <stdio.h>

void swap(int *x, int *y){
  *x = *x ^ *y;
  *y = *x ^ *y;
  *x = *x ^ *y;
}

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  swap(&a, &b);
  printf("%d %d\n", a, b);
  
  /*
   * Una de las propiedades mas lindas del xor (que es lo mismo que 
   * el operador "discrepa") es que es su propia inversa.
   * 
   * Cuando uno tiene 2 + x = 3, para despejar la x aplica la funcion
   * inversa, la resta, en ambos miembros de la ecuacion.
   * 
   * Con xor, esta operacion inversa es el xor mismo.
   * 
   * 9 ^ x = 30 
   * x = 30 ^ 9
   * 
   * Entonces en la funcion, al principio hago que x tenga el valor del
   * xor entre ambos, x e y.
   * 
   * Luego y = (x ^ y) ^ y = x ^ (y ^ y) = x ^ NEUTRO = x
   * 
   * El elemento NEUTRO del xor es el 0.
   * Entonces y termina valiendo x.
   * 
   * Ahora el ultimo paso seria:
   * 
   * x = x ^ (x ^ y) = (x ^ x) ^ y = NEUTRO ^ y = y
   * 
   * Entonces x termina valiendo y.
   * 
   * Creo que una de las utilidades seria ahorrar memoria, aunque
   * puede ser casi despreciable (una variable -.-), y ademas, las
   * operaciones de bits (como &, | y ^) son operaciones que se 
   * realizan bastante rapido.
   */
  return 0;
}
