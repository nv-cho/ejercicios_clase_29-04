#include <stdio.h>

int main (void) {
  float nota_estudiante;

  printf("Ingrese la nota del alumno: ");
  scanf("%f", &nota_estudiante);

  if(nota_estudiante > 0 && nota_estudiante <= 10){
    if(nota_estudiante >= 6){
      printf("El estudiante esta aprobado\n");
    }else {
      printf("El estudiante esta desaprobado\n");
    }
  }else {
    printf("La nota ingresada es invalida, debe ser mayor a 0 y menor a 10\n");
  }

  return 0;
}