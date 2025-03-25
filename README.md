[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

###¿Qué es el archivo .gitignore?

El archivo .gitignore es un archivo que se utiliza en repositorios de Git para especificar qué archivos o carpetas no deben incluirse en el control de versiones. Esto significa que cualquier archivo o carpeta listada en este archivo será ignorada por Git al realizar operaciones como agregar (git add) o confirmar (git commit) cambios.

###¿Por qué es conveniente incluirlo?

#1.Evitar archivos innecesarios en el repositorio:
-Archivos temporales generados por tu editor (ejemplo: *.swp, *.tmp, *.bak).
-Binarios o artefactos compilados (ejemplo: *.exe, *.o, *.class).
-Carpetas de dependencias externas (ejemplo: node_modules/, vendor/) que se pueden instalar nuevamente mediante un gestor de paquetes.

#2.Mantener el repositorio limpio y eficiente:
-Guardar solo los archivos necesarios para que el proyecto funcione o sea reproducible por otros colaboradores.

Evitar compartir datos sensibles:

#3.Archivos con contraseñas, claves API o configuraciones -locales (ejemplo: .env, config.json).

#4.Reducir conflicos:
-Evitar que archivos generados automaticamente, que vatian de un entorno a otro, se incluyan y cause conflictos entre desarrolladores.

###¿Cuándo se debe crear el archivo .gitignore?

Idealmente, el archivo .gitignore se debe crear al inicio del proyecto, antes de realizar el primer commit. Sin embargo, si ya tienes un proyecto y deseas empezar a ignorar ciertos archivos, también puedes agregarlo en cualquier momento.

###Como configurar el archivo .gitignore

#1.Crear el archivo:
-coloca un archivo llamado .gitignore en la raiz del repositorio
#2.Especificar que ignorar:
-Usa patrones para indicar los archivos o carpetas a ignorar.
#3.Sintaxis basica:
-*.ext: Ignora todos los archivos con la extensión .ext.

-/carpeta/: Ignora una carpeta específica.

-!archivo: Excepción, no ignorar el archivo.

-#: Línea de comentario (opcional, para documentar).

#4.Ejemplo: Node.js

# Dependencias
node_modules/

# Archivos de logs
*.log

# Configuración local
.env

# Artefactos de compilación
dist/

# Archivos generados por el sistema operativo
.DS_Store
Thumbs.db

#5.Uso de plantillas:
-Puedes usar plantillas predefinidas para configurar .gitignore según el lenguaje o tecnología de tu proyecto. GitHub tiene un repositorio con plantillas para varios lenguajes y herramientas: GitHub gitignore Templates.

###3_g.
-Los apartados 2 y 3 coinciden porque tanto puntero como &variable representan la dirección de la variable variable.
-El apartado 4 es diferente porque muestra la dirección de memoria del puntero como objeto, que es independiente de la dirección de la variable que apunta.
-Esta distinción es clave al trabajar con punteros en C, ya que las direcciones en memoria se gestionan como entidades separadas.