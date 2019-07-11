#include <stdio.h>
#include <stdlib.h>

int *p;
int *x;
int suma(int a) {
  return a + *p;
}

int bad_suma(int a) {
  return a + *x;
}

int main(int argc, char** argv) {
  //x = (int*) malloc(sizeof(int));
  *x = 10;
  //p = (int*) malloc(sizeof(int));
  *p = 20;
  printf("La suma es: %d\n",suma(10));
  printf("La suma mal es: %d\n",bad_suma(10));
  //free(x); free(p);
  return 0;
}
