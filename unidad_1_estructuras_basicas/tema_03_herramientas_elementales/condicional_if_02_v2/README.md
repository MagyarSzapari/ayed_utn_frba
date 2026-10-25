# Condicional if-else 2 v2: menor que 5 (&lt;)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección simple) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_if_2_v.2` |

## Objetivo académico

Variante de Condicional_if_2 con el operador &lt; y las ramas invertidas: informa si el número es menor o mayor que 5.

## Estrategia de resolución

1. Definir dato = 5
2. Leer numero
3. if (numero &lt; dato) informar menor; else informar mayor

## Estructuras de datos utilizadas

- variables simples int
- operador relacional &lt;
- decisión simple if-else

## Observaciones

Error lógico: si se ingresa 5 informa 'es mayor que 5'.

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_if_02_v2
./condicional_if_02_v2
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
