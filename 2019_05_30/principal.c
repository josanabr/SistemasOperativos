
#include <stdio.h>
#include "entero.h"

int main(int argc, char** argv) {
  entero a,b;

  a = 5;
  b = 6;
  printf("la multiplicacion de %d - %d es %d\n",a,b,multiplicacion(a,b));
  printf("La division de %d / %d es %f \n",a,b, (float) division(a,b));
}

