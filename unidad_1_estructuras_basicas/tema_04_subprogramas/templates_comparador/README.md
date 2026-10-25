# Templates con función comparadora — mayor, medio y menor de tres valores

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (generalidad de tipo y de criterio) |
| **Archivos** | [`templates.cpp`](templates.cpp) |
| **Origen en la cursada** | `Cursada/Templates` |

## Objetivo académico

Combina una plantilla de función con un criterio de comparación recibido como argumento (int comparaTT(T, T)). comparaYMuestra&lt;T> determina mayor, medio y menor de tres valores de cualquier tipo; se prueba con int, con string alfabético y con string por longitud.

## Estrategia de resolución

1. comparaYMuestra&lt;T>(a, b, c, cmp): elige el mayor con cmp(x, y) > 0 contra los otros dos y ordena los dos restantes con if anidados
2. Comparadores: comparaIntInt (a - b), comparaStringString (ternario a&lt;b?-1:a>b?1:0) y comparaStringStringPorLongitud (diferencia de longitudes)
3. Utilitarios propios: length (recorre hasta '\0'), charToInt (posición del carácter en '0-9A-Za-z') y stringToInt(s, base) (conversión de base)
4. main invoca la misma plantilla con tres criterios distintos

## Estructuras de datos utilizadas

- plantilla de función (typename T)
- función como argumento (comparador)
- struct Persona (declarado, sin uso)
- if anidados y encadenados
- ciclos while
- string y char

## Observaciones

Con empates el resultado es incorrecto: si a y b empatan como máximos (cmp = 0) ninguna de las dos primeras ramas se cumple y toma c como mayor (p. ej. 5, 5, 1 da mayor = 1). struct Persona nunca se usa. comparaIntString está comentada (además llamaría a stringToInt con un solo argumento). charToInt no tiene tope: si el carácter no está en el alfabeto lee fuera del string. stringToInt calcula la potencia de la base con un ciclo por dígito (O(n²)); con Horner sería O(n). comparaIntInt con a - b puede desbordar.

## Compilar y ejecutar

```bash
g++ templates.cpp -o templates_comparador
./templates_comparador
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_cmp_fn / utn_math_sort3_int() — `include/utn_common.h`, `include/utn_math.h`.
