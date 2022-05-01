#include <stdio.h>

int main (void) {

  int cant_m2, costo_m2, total, descuento;

  printf("Ingrese la cantidad de m2: ");
  scanf("%d", &cant_m2);

  printf("Ingrese el precio por m2: ");
  scanf("%d", &costo_m2);

  if(cant_m2 >= 1 && cant_m2 <= 100){
    if(costo_m2 >= 100 && costo_m2 <= 5000){
      descuento = (cant_m2 * costo_m2 * 5) / 100;
      total = (cant_m2 * costo_m2) - descuento;

      printf("El valor total luego de aplicar un 5%% de descuento es: $%d\n", total);

    }else {
      printf("El precio ingresado no es valido, debe ser mayor a $100 y menor a $5000\n");
    }
    
  }else {
    printf("La cantidad de m2 es invalida, deben ser mayor a 1 y menores a 100\n");
  }

  return 0;
}