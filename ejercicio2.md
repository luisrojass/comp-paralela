## Ejercicio 2

### Clonando el submódulo Chapter6

Primero nos ubicamos en el directorio raíz `EssentialsOfParallelComputing/`.

Ejecutamos `git submodule update --init Chapter6`.

![screenshot de git submodule Chapter6](./screenshots/Screenshot%20from%202024-04-08%2010-05-24.png)

> Aunque en la guía indica que debemos clonar el submódulo desde la carpeta `Chapter6/`, al hacerlo git nos retorna un error (no encuentra ningún archivo en el repo con el mismo nombre `Chapter6`):
![screenshot del error git submodule Chapter6](./screenshots/Screenshot%20from%202024-04-08%2010-07-52.png)

### Listando ficheros en `Chapter6/`

Una vez actualizado el submódulo `Chapter6`, nos movemos a la carpeta `Chapter6/` y listamos los nuevos archivos con `ls`.

![screenshot de ls en Chapter6/](./screenshots/Screenshot%20from%202024-04-08%2010-12-11.png)

### Identificando la rama actual en `Chapter6/`

Al ejecutar `git branch`, nos damos cuenta que ahora hay otra rama (HEAD).

![screenshot de las ramas en Chapter6/](./screenshots/Screenshot%20from%202024-04-08%2010-29-37.png)

### Viendo detalles de la nueva rama

Al ejecutar `git status`, vemos que la nueva rama `HEAD` se separó de la rama `master` en el commit con el hash `cd4ce41`.

![](./screenshots/Screenshot%20from%202024-04-08%2010-32-25.png)
