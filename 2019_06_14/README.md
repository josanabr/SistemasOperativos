# Revisión de las funciones para gestión de procesos en C

* [fork-basico](fork-basico.c)

---

Para llevar a cabo la solución del problema planteado en clase debe descargar los siguientes archivos:

* [solucion.c](https://raw.githubusercontent.com/josanabr/SistemasOperativos/master/2019_06_14/solucion.c)
* [solucion.h](https://raw.githubusercontent.com/josanabr/SistemasOperativos/master/2019_06_14/solucion.h)
* [mainsol.c](https://raw.githubusercontent.com/josanabr/SistemasOperativos/master/2019_06_14/mainsol.c) - este es un ejemplo

Para generar la libreria se ejecutan los siguientes comandos:

```
gcc -c solucion.c
ar rc libsolucion. solucion.o
```

Para compilar su programa usand la nueva libreria:

```
gcc -o mainsol -L. mainsol.c -lsolucion 
```
