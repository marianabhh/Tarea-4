Esta tarea implementa dos estructuras de datos en lenguaje C: una pila (stack) de tamaño fijo y una lista enlazada simple (linked list). Ambas estructuras permiten insertar, eliminar, verificar elementos y obtener su tamaño actual. La pila se implementa con un arreglo estático y permite operaciones como push, pop, y comprobaciones de si está llena o vacía. La lista enlazada es dinámica y permite insertar al inicio o final, eliminar elementos por valor, verificar si un elemento existe e imprimir el contenido.

El archivo main.c contiene pruebas automáticas para ambas estructuras. Se insertan datos, se eliminan, y se muestran los resultados esperados para validar que las funciones se comportan correctamente.

Para compilar el programa, se debe abrir una terminal en la carpeta del proyecto y ejecutar el siguiente comando:
gcc -o tarea4 main.c stack.c linked_list.c

Esto generará un ejecutable llamado tarea4. Para ejecutarlo, se corre:
./tarea4

El programa imprimirá en consola las pruebas realizadas sobre la pila y la lista enlazada. No se requieren librerías externas.
