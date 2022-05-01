#include <stdio.h>

int main (void){

  float base, altura, area;

  printf("Ingrese la base: ");
  scanf("%f", &base);

  printf("Ingrese la altura: ");
  scanf("%f", &altura);

  if(base > 0 && altura > 0){
    area = (base * altura) / 2;

    printf("El area del triangulo es: %.2f\n", area);
  }else {
    printf("Los valores ingresados son negativos\n");
  }

  return 0;
}