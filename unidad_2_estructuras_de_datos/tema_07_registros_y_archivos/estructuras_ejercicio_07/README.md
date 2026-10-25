# Estructuras — Ejercicio 7: tiempo total de un ciclista en n etapas

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (struct); U5 acumuladores |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Estructuras_Ejercicio7` |

## Objetivo académico

Usa un arreglo de structs Etapas (horas, minutos, segundos) y acumula el tiempo total de n etapas, con acarreo de segundos a minutos y de minutos a horas.

## Estrategia de resolución

1. Leer n y luego horas, minutos y segundos de cada etapa en etapas[i]
2. Acumular horas, minutos y segundos en tres acumuladores
3. Si minutos >= 60 restar 60 y sumar una hora; si segundos >= 60 restar 60 y sumar un minuto
4. Mostrar el total

## Estructuras de datos utilizadas

- struct
- arreglo de structs [100] (global)
- acumuladores
- ciclo for
- decisión simple para el acarreo

## Observaciones

Bug de normalización: el acarreo usa if (no while) y en orden incorrecto (el acarreo de segundos a minutos se hace después del chequeo de minutos), así que el resultado puede quedar con 60 minutos (p. ej. 0:59:30 + 0:00:30 da 0 h 60 min 0 s) y no maneja valores >= 120. Más simple: acumular todo en segundos y al final dividir por 3600 y 60. No valida n &lt;= 100. Desde la segunda etapa el cin.ignore del inicio del for sobra y descarta una línea. El arreglo no es necesario (se podría acumular sin guardar).

## Compilar y ejecutar

```bash
g++ main.cpp -o estructuras_ejercicio_07
./estructuras_ejercicio_07
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_time_t / utn_time_add() — `include/utn_date.h`.
