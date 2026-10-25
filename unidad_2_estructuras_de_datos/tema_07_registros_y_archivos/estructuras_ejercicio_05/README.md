# Estructuras — Ejercicio 5: alumno con notas en struct anidado y promedio

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (struct anidado) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Estructuras_Ejercicio5` |

## Objetivo académico

Anida el struct Promedio (nota1, nota2, nota3) dentro de Alumno (nombre, sexo, edad), carga un alumno y calcula el promedio accediendo a alumno1.promedioVariable.notaX.

## Estrategia de resolución

1. Definir Promedio y anidarlo como campo promedioVariable de Alumno
2. Cargar los datos personales y las tres notas
3. promedio = (nota1 + nota2 + nota3) / 3 y mostrar la ficha

## Estructuras de datos utilizadas

- struct anidado
- variable struct global
- campos float, int y char[]
- acceso encadenado con '.'

## Observaciones

Los cin.ignore tras los getline de nombre y sexo sobran (esperan y descartan una línea extra). El struct se llama Promedio pero guarda notas; el promedio se calcula en una variable local y no se almacena. Carpeta con artefactos Borland (.il?, .obj, .tds) y bin/obj de Code::Blocks a ignorar.

## Compilar y ejecutar

```bash
g++ main.cpp -o estructuras_ejercicio_05
./estructuras_ejercicio_05
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
