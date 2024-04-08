## Ejercicio 4

### 4.1 Pragmas utilizados en `mass_sum`

El único archivo en el que se indica el uso de `#pragma` es en `mass_sum.c`.

![screenshot del archivo mass_sum.c](./screenshots/Screenshot%20from%202024-04-08%2014-19-35.png)

El pragma que se utiliza es `#pragma omp simd reduction(+:summer)`.

> La opción `simd` indica que se debe vectorizar el bucle for, y `reduction(+:summer)` indica que el valor de `summer` se calcule independientemente por cada hilo y al final se sume para obtener el valor real de `summer`.

### 4.2 Compilando `mass_sum.c`

Ejecutando `cmake ./` se generan los siguientes archivos y carpetas en nuestro directorio actual (`CMakeCache.txt, cmake_install.cmake, CMakeFiles/, MakeFile`).

![screenshot ejecutando cmake](./screenshots/Screenshot%20from%202024-04-08%2014-41-42.png)

Ahora ejecutamos `make` y se crea el ejecutable de nuestra app.

![screenshot ejecutando make](./screenshots/Screenshot%20from%202024-04-08%2014-46-17.png)

Usando `ls -l` comprobamos si nuestra app `mass_sum` tiene los permisos necesarios para ejecutarse. Si no los tuviera, le podemos asignar con `chmod +x mass_sum`.

![screenshot ejecutanto mass_sum](./screenshots/Screenshot%20from%202024-04-08%2014-54-05.png)

### 4.3 Identificando bucles vectorizados

Analizando el output de la compilación de `mass_sum` revisamos los bucles que fueron optimizados:

![screenshot ejecutando make](./screenshots/Screenshot%20from%202024-04-08%2014-46-17.png)

Observamos que se optimizaron bucles en 2 archivos (`main.c.o y mass_sum.c.o`)

* En `main.c.o` se vectorizaron bucles en la línea 7 y 9.

* En `mass_sum.c.o` se vectorizaron bucles en las líneas 4, 7 y 9.

También observamos que en todas las optimizaciones se usaron vectores de 32bytes (256bits).

### 4.4 Tiempo de ejecución de `mass_sum`

Como `mass_sum` ya tiene permisos de ejecución (asignados en 4.2), procedemos a ejecutarlo.

Ejecutando `time ./mass_sum` vemos que el tiempo de ejecución fue de 0.142s.

![screenshot de la ejecucion de mass_sum](./screenshots/Screenshot%20from%202024-04-08%2015-12-01.png)
