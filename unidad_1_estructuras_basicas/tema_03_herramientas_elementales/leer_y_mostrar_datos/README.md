# Leer y mostrar datos de un usuario (edad, sexo, altura)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (sentencias de entrada/salida) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Leer_y_Mostrar_Datos` |

## Objetivo académico

Lee de la entrada estándar la edad (int), el sexo y la altura en metros (float) de un usuario y luego los muestra, combinando tipos de datos distintos en una misma secuencia de E/S.

## Estrategia de resolución

1. Declarar edad (int), sexo (char[10]) y altura (float)
2. Pedir y leer cada dato con cin
3. Mostrar los tres datos juntos con cout

## Estructuras de datos utilizadas

- variables simples int/float
- arreglo de char (cadena C) char[10]
- entrada/salida estándar (cin/cout)

## Observaciones

El enunciado pide sexo como carácter pero el código usa char sexo[10] (cadena C); cin >> sexo no limita el ancho, así que más de 9 caracteres desbordan el arreglo.

## Compilar y ejecutar

```bash
g++ main.cpp -o leer_y_mostrar_datos
./leer_y_mostrar_datos
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
