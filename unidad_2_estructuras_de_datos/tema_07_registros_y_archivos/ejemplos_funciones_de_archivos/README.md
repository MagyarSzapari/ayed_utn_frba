# Archivos binarios — Ejemplo: grabar y leer caracteres con fwrite/fread

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U10 — Almacenamiento físico (archivos binarios: apertura, escritura, lectura secuencial y fin de archivo) |
| **Archivos** | [`ejemplos_funciones_de_archivos.cpp`](ejemplos_funciones_de_archivos.cpp), [`demochar.zzz`](demochar.zzz) |
| **Origen en la cursada** | `Cursada/Ejemplos_Funciones_de_Archivos` |

## Objetivo académico

Introduce el manejo de archivos binarios con la API de C (&lt;stdio.h>): crea "demochar.zzz" en modo "w+b", graba los caracteres 'A'..'D' uno por uno con fwrite y luego lo reabre en "r+b" para recorrerlo secuencialmente con fread hasta feof, mostrando cada carácter.

## Estrategia de resolución

1. Abrir el archivo con fopen("demochar.zzz", "w+b") (lo crea en el directorio de ejecución) y grabar 4 chars con fwrite(&c, sizeof(char), 1, f) reutilizando la misma variable c.
2. Cerrar con fclose y reabrir en modo "r+b" para lectura, verificando f == NULL.
3. Recorrido secuencial con lectura anticipada: un fread antes del while(!feof(f)) y otro al final del cuerpo, así no se procesa un registro basura al llegar al fin.
4. Cerrar el archivo al terminar.

## Estructuras de datos utilizadas

- variable char
- FILE\* (archivo binario)
- fopen/fwrite/fread/feof/fclose
- ciclo while con lectura anticipada
- operador de dirección &

## Observaciones

demochar.zzz (4 bytes, contenido "ABCD") es la SALIDA que genera el propio programa; se incluye como dato de ejemplo pero se regenera al ejecutar. La apertura para escritura no se valida, y en la de lectura el chequeo f == NULL solo imprime un mensaje y sigue ejecutando (fread/feof sobre NULL rompería): debería cortar con return. Cabecera de Eclipse dice "Hello World" (plantilla sin editar).

## Compilar y ejecutar

```bash
g++ ejemplos_funciones_de_archivos.cpp -o ejemplos_funciones_de_archivos
./ejemplos_funciones_de_archivos
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_file_write() / utn_file_read() / utn_file_seek() / utn_file_count() — `include/utn_file.h`.
