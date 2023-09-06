#Binary Search Tree
## ¿Por que, lo selecciono?

Los 2 ejercicios los diseñe, y me parecio mas complejo resolver el binary tree, ademas que me trae recuerdos de los retos  que hice durante mi periodo de aprendizaje en Holberton School

## ¿Como se ejecuta?

Le presentare 2 opciones para que pueda ejecutarlo, una donde tenga que descargar el codigo y una donde podra simplemente copiarlo y pegarlo en un emulador

## Ejecucion con OnlineGDB

Podra ver un archivo completo llamado 'complete-gdb-proyect' que podra copiar y pegar en el emulador: https://www.onlinegdb.com/

### Paso 1 - Instale los archivos localmente

Puede instalar los archivos localmente accediendo a su consola linux y digitando el siguiente script

```
git clone https://github.com/Coderlancce/tul-exercise

```

### Paso 2 - Instale el compilador de C llamado GCC

En la terminal del sistema tendra que correr los siguiente scripts, tenga en cuenta que solo funcionara en una terminal linux

Actualiza los packetes de tu terminal

```
sudo apt update
```

Instala build-essential

```
sudo apt install build-essential
```

Revisa la instalacion

```
gcc --version
```

### Paso 3 - Compile los archivos

El proceso de compilacion dejara un archivo que pueda correr para verificar el codigo recuerde que puede modificar el archivo main.c para testear cualquier codigo o simplemente puede ejecutar un archivo de pruebas


```
gcc -o my_program main.c binary_tree_delete.c binary_tree_is_bst.c binary_tree_node.c binary_trees.h is_binary_search_tree.c
```

### Paso 4 - Ejecute el archivo my_program

Ejecutar este archivo correra la funcion main que dara paso a la ejecucion de todo el codigo

```
./my_program
```
