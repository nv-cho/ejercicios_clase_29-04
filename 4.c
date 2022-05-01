#include <stdio.h>

int main (void) {
  float nota_1, nota_2, nota_3, promedio;

  printf("Ingrese la primer nota: ");
  scanf("%f", &nota_1);

  printf("Ingrese la segunda nota: ");
  scanf("%f", &nota_2);

  printf("Ingrese la tercer nota: ");
  scanf("%f", &nota_3);

  if(nota_1 >= 1 && nota_1 <=  7 && nota_2 >= 1 && nota_2 <=  7 && nota_3 >= 1 && nota_3 <= 7){
    promedio = (nota_1 + nota_2 + nota_3) / 3;

    if(promedio >= 4){
      printf("El estudiante esta aprobado y su promedio es: %.2f\n", promedio);
    }else {
      printf("El estudiante esta desaprobado y su promedio es: %.2f\n", promedio);
    }
    
  }else {
    printf("Las notas ingresadas son invalidas, deben ser mayores a 1 y menores a 7\n");
  }

  return 0;
}