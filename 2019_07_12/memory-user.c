#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
  // Validar que se pasa un argumento
  if( argc < 2){
	printf("No se encontraron argumentos\n");
	return 1;
  }
  // Convertir ese argumento a un numero entero. Ese numero representa la 
  // cantidad en megabytes
  int bytes = atoi(argv[1]);

  // Solicitar esa cantidad de megabytes al heap del 'address space' y 
  // asignarlo a un arreglo
  int *array = malloc(bytes*1024*1024*(sizeof(int)));
  if (array == NULL) {
    printf("Memoria no asignada\n");
    exit(-1);
  }
  // Iterar sobre el arreglo 
  int i = 0;
  for (; i < bytes*1024*1024; i++)
    array[i] = i;
  // salir
  sleep(10);

  return 0;
}





