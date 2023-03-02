- gcc $CFILE -o cisfun 
compila el archivo C especificado por la variable $CFILE y crea un archivo ejecutable llamado cisfun.

- El parámetro -o especifica el nombre del archivo de salida, y en este caso, establece el nombre del archivo ejecutable en cisfun. Entonces, el comando gcc $CFILE -o cisfun compila el archivo C especificado por $CFILE y crea un archivo ejecutable llamado cisfun.

- No obstante es una buena práctica habilitar las advertencias del compilador y tratarlas como errores (con las opciones -Wall -Werror) y usar la opción -pedantic para asegurarse de que el código cumpla con los estándares de programación.

ej:

- #!/bin/bash
  CFILE=$CFILE
  gcc -Wall -Werror -Wextra -pedantic $CFILE -o cisfun





