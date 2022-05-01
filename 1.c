#include <stdio.h>

int main (void){
  
  int x, valor_funcion;

  printf("Ingrese el valor de f(x): ");
  scanf("%d", &x);

  valor_funcion = (3 * x) + 2;

  printf("El valor resultante es: %d\n", valor_funcion);

  return 0;
}