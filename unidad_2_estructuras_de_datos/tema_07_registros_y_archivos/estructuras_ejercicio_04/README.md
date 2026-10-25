# Estructuras — Ejercicio 4: atleta con más medallas

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (struct); U9 búsqueda de máximo |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Estructuras_Ejercicio4` |

## Objetivo académico

Carga n structs Atleta (nombre, país, numeroMedallas) en un arreglo global y devuelve nombre y país del que tiene más medallas, buscando el máximo durante la carga.

## Estrategia de resolución

1. Leer n y cargar cada atleta en un for
2. Si numeroMedallas > mayor, actualizar mayor y posicionMayor
3. Mostrar nombre y país de atleta[posicionMayor]

## Estructuras de datos utilizadas

- struct
- arreglo de structs [100] (global)
- ciclo for
- búsqueda de máximo con posición

## Observaciones

No valida n &lt;= 100. Los cin.ignore después de cada getline (nombre y país) sobran y hacen esperar líneas extra que se descartan. En empate gana el primero (comparación estricta >).

## Compilar y ejecutar

```bash
g++ main.cpp -o estructuras_ejercicio_04
./estructuras_ejercicio_04
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
