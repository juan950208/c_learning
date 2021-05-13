/*una persona invierte $1000.00 en una cuenta de ahorros con un 5% de interes
calcular y mostrar el monto final de la cuenta cada anio durante diez anios
con la formula a = p(1+r)^n, donde a es el monto final, p es el monto de inversion
n es el numero de anios y r es la tasa de interes anual*/
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {

  double monto;
  double principal = 1000;
  double tasa_interes = 0.05;
  int anio;

  //encabezado de la tabla
  printf("%4s%21s\n", "Anio", "Monto del deposito");

  //calculo del Monto cada anio
  for (int anio = 1; anio <= 10; anio++) {
    monto = principal * pow(1.0 + tasa_interes, anio);
    //imprime una linea de la tabla
    printf("%4d%21.2f\n", anio, monto);
  }


  return 0;

}