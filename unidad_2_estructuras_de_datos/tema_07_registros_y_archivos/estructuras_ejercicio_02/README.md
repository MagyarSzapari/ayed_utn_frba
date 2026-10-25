# Estructuras — Ejercicio 2: alumno con mejor promedio entre 3

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (struct); U9 búsqueda de máximo |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Estructuras_Ejercicio2` |

## Objetivo académico

Carga un arreglo global de 3 struct Alumno (nombre, edad, promedio) y durante la carga busca el máximo promedio guardando su posición, para luego mostrar los datos de ese alumno.

## Estrategia de resolución

1. for de 0 a 2 leyendo cada alumno
2. Si alumno[i].promedio > mayor, actualizar mayor y posicion
3. Mostrar alumno[posicion]

## Estructuras de datos utilizadas

- struct
- arreglo de structs [3] (global)
- ciclo for
- búsqueda de máximo con posición

## Observaciones

promedio está declarado int (trunca decimales; debería ser float). El cin.ignore(50, '\n') después del getline del nombre sobra: getline ya consumió el '\n', así que el programa espera una línea extra que descarta antes de pedir la edad. mayor arranca en 0: si todos los promedios son &lt;= 0 queda la posición 0.

## Compilar y ejecutar

```bash
g++ main.cpp -o estructuras_ejercicio_02
./estructuras_ejercicio_02
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
