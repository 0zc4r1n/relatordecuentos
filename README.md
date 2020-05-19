# Relator de cuentos
Proyecto desarrollado en C para relatar un cuento a partir de un archivo de textos formateado.

## Opcion 1 - Compilación y ejecución tradicional (A manito... jejeje)

#### Requisitos para compilar los fuentes

1. Tener el cliente git instalado para poder clonar el repositorio.
2. Tener instalado compilador gcc para linux (Cualquier versión).

#### Compilación - Paso a Paso

1. Clonar repositorio:
```
git clone https://...
```
2. Ingresar a la carpeta fuentes:
```
cd relatordecuentos/src
```
3. Ejecutar el Makefile:
```
make
```

#### Ejecución - Paso a Paso

1. Estando en la carpeta relatordecuentos/src ejecutar:
```
./relator <ruta_del_cuento.txt>
```
## Opción 2 - Compilación y ejecución utilizando Docker

#### Requisitos para compilar los fuentes

1. Tener el cliente git instalado para poder clonar el repositorio.
2. Tener Docker Engine instalado

#### Construcción de imagen

1. Clonar repositorio:
```
git clone https://...
```
2. Ingresar a carpeta del proyecto:
```
cd relatordecuentos
```
3. Construir imagen Docker
```
docker image build -t <nombre_imagen> .
```
#### Ejecución de contenedor

1. Ejecutar contenedor:
```
docker container run -it --rm <nombre_imagen>
```
## Anexo - Formato del archivo de cuentos

El archivo de cuentos puede ser cualquier archivo de texto con cualquier extensión.
Por defecto (sin darle un archivo al ejecutarlo) el programa buscará el archivo cuento.txt que esta en la misma carpeta donde se ejecuta el programa.

#### El formato

El contenido debe ser de la siguiente forma para que se visualice correctamente:

```
TITULO DEL CUENTO
PERSONAJE1 <:> Algo que decir
PERSONAJE2 <:> Algo que decir tambien

...

PERSONAJE1 <:> Algo que decir nuevamente
PERSONAJE2 <:> Algo que decir nuevamente (otra vez)
FIN
```
La carpeta cuentos, posee un cuento de ejemplo.

