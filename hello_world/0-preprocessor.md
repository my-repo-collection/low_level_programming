### 0-preprocessor


* El preprocesador es una herramienta que se utiliza para procesar un archivo de código fuente antes de que sea compilado. En el caso de C, el preprocesador se encarga de procesar las directivas de preprocesamiento, que son las instrucciones que empiezan con el símbolo #.

```

#!/bin/bash

gcc -E "$CFILE" > c

```


* Para ejecutar el preprocesador en un archivo C y guardar el resultado en otro archivo, podemos utilizar el comando gcc con la opción -E, que indica que sólo se debe ejecutar la etapa del preprocesador. Luego, redirigimos la salida del comando hacia un archivo utilizando el operador >.

* El script que se muestra al principio, automatiza este proceso, utilizando el valor de la variable de entorno $CFILE para especificar el archivo C de entrada y guardando la salida en un archivo llamado c.


--------------------
Creado por LoreCG ❤

Con ayuda de 'Markdown Live Preview'
