#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  printf("localizacion del codigo %p\n",main);
  printf("localizacion del monton %p\n", malloc(100e6));
  int x = 3;
  printf("ubicacion de la pila %p\n",&x);

  return x;
}
