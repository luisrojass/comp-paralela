## Ejercicio 5

### 5.1 Deshabilitando vectorización de `mass_sum`

Para deshabilitar la vectorización de `mass_sum` tenemos que remover o comentar la línea en la que se encuentra `#pragma` en `mass_sum.c`.

![screenshot removiendo #pragma en mass_sum.c](./screenshots/Screenshot%20from%202024-04-08%2019-23-49.png)

Luego, tenemos que remover o comentar las siguientes líneas de flags de configuración para el compilador GCC en `CMakeList.txt`.

![screenshot removiendo configuración para GCC en CMakeLists.txt](./screenshots/Screenshot%20from%202024-04-08%2019-26-14.png)

### 5.2 Compilando `mass_sum` sin vectorización

Luego de remover las líneas mencionadas anteriormente, volvemos a compilar `mass_sum` (ahora sin vectorización) ejecutando `make`.

Observamos que el compilador ya no nos indica ningún cambio en los bucles del código.

![screenshot compilando mass_sum.c sin vectorización](./screenshots/Screenshot%20from%202024-04-08%2019-31-55.png)

Ejecutamos nuevamente `mass_sum` (ahora sin vectorización) con `time ./mass_sum`.

Observamos que tarda un poco más que la anterior prueba (152ms vs 142ms).

![screenshot ejecución de mass_sum sin vectorización](./screenshots/Screenshot%20from%202024-04-08%2019-36-17.png)
