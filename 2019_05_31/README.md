# Clase 2019_05_30

En la clase de hoy se ejecutarán los programas que se mostraron en los videos. A continuación se mostrará como se compila cada uno de esos códigos.

Los siguientes son unos códigos de calentamiento que presenta como usar los archivos de cabecera en proyectos de programación en C.

* [entero.h](entero.h)
* [principal.c](principal.c)

---


## cpu.c

Dentro del estudio del archivo `cpu.c` se creó un archivo llamado [`cadena.c`](cadena.c) y donde se mostraban algunas características de los apuntadores en C.

Aquí el código

```
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  char cadena[] = "hola mundo";
  char *apcad;

  apcad = (char*)malloc(sizeof(char));
  *apcad = 'h';
  printf("%c\n",*apcad);
  apcad[3] = 'o';
  printf("%c\n",apcad[1]);

  return 0;

  printf("Cadena: %s apcad: %s\n",cadena,apcad);
  apcad = cadena;
  printf("Cadena: %s apcad: %s\n",cadena,apcad);
  cadena[0] = 'H';
  printf("Cadena: %s apcad: %s\n",cadena,apcad);
  apcad[1] = 'O';
  printf("Cadena: %s apcad: %s\n",cadena,apcad);
  apcad = (char*)1024;
  printf("%s\n",apcad);
}
```

## mem.c

## threads.c

## io.c

