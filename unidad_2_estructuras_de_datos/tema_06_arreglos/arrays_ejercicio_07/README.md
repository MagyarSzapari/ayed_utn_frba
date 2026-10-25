# Arrays — Ejercicio 7: concatenar dos vectores de caracteres

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Arrays_Ejercicio7` |

## Objetivo académico

Copia dos arrays de 5 char en un tercero de 10: primero los del primer vector y luego los del segundo con desplazamiento de índice (i - 5); después muestra el resultado.

## Estrategia de resolución

1. Copiar letras1[0..4] en letras3[0..4]
2. Copiar letras2[i-5] en letras3[i] para i de 5 a 9
3. Mostrar letras3 carácter por carácter

## Estructuras de datos utilizadas

- arrays de char (sin terminador '\0')
- ciclos for
- desplazamiento de índices

## Observaciones

Los arrays no son cadenas (no terminan en '\0'): se imprimen elemento a elemento. Tamaños hardcodeados.

## Compilar y ejecutar

```bash
g++ main.cpp -o arrays_ejercicio_07
./arrays_ejercicio_07
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
