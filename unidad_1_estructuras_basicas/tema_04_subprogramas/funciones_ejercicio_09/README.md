# Funciones — Ejercicio 9: segundos a horas, minutos y segundos

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (parámetros por referencia) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_Ejercicio9` |

## Objetivo académico

Convierte un total de segundos en horas, minutos y segundos, devolviendo los tres valores por referencia.

## Estrategia de resolución

1. horas = total / 3600 y total %= 3600
2. minutos = total / 60 y segundos = total % 60
3. Los tres resultados vuelven a main por referencia

## Estructuras de datos utilizadas

- procedimiento void
- parámetro por valor
- parámetros por referencia (int&)
- división entera y módulo

## Observaciones

El enunciado pide que la función se llame tiempo(), pero se implementó como convertirTiempo().

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_ejercicio_09
./funciones_ejercicio_09
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_time_from_seconds() — `include/utn_date.h`.
