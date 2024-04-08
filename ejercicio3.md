## Ejercicio 3

### 3.1 Listando ficheros en `mass_sum/`

Nos movemos a la carpeta `mass_sum`y ejecutamos `ls`.

![screenshot listando ficheros en mass_sum/](./screenshots/Screenshot%20from%202024-04-08%2010-38-38.png)

### 3.2 Analizando las opciones para el compilador GCC en `CMakeLists.txt`

Abrimos `CMakeLists.txt` con un editor de texto. En mi caso usaré `micro`.

![screenshot abriendo CMakeLists.txt](./screenshots/Screenshot%20from%202024-04-08%2010-58-51.png)

El archivo contiene todo este código:

![screenshot del código en CMakeLists.txt](./screenshots/Screenshot%20from%202024-04-08%2011-02-54.png)

Lo que nos interesa son solo las configuraciones para el compilador GCC, por lo que nos enfocamos en esta sección:

![screenshot de las configuraciones para GCC](./screenshots/Screenshot%20from%202024-04-08%2011-06-27.png)

#### Encontramos los siguientes flags:

* -fstrict-aliasing
* -ftree-vectorize
* -fopenmp-simd `(no llega a verse en la imagen, pero se encuentra en el archivo)`
* -march=native
* -mtune=native
* -ffast-math
* -fopt-info-vec-all
* -fopt-info-loop-all
* -mprefer-vector-width=512

### 3.3 Flags sobre la vectorización

* -ftree-vectorize: Reorganiza los bucles en el código mediante la vectorización de árboles para optimizar su ejecución en paralelo.
* -fopenmp-simd: Habilita la generación de código SIMD.
* -fopt-info-vec-all: Muestra información sobre la vectorización de los bucles que fueron optimizados durante la compilación.
* -fopt-info-loop-all: Muestra los bucles que fueron optimizados y que técnicas se aplicaron para su paralelización.

### 3.4 Flags sobre el ancho preferido del vector

* -mprefer-vector-width=512: Indica que los vectores a utilizar tendrán un ancho de 512bits.
