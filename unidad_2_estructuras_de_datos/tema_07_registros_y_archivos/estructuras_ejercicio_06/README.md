# Estructuras — Ejercicio 6: mejor promedio entre n alumnos (structs anidados)

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (struct anidado); U9 búsqueda de máximo |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Estructuras_Ejercicio6` |

## Objetivo académico

Extiende el ejercicio 5 a un arreglo de hasta 100 alumnos con el struct de notas anidado: calcula los promedios en un arreglo paralelo promedioAlumno[] y busca el máximo en una segunda pasada.

## Estrategia de resolución

1. Primer for: cargar los n alumnos con sus tres notas
2. Segundo for: calcular promedioAlumno[i] y actualizar mayorPromedio y posicion
3. Mostrar los datos del alumno en posicion

## Estructuras de datos utilizadas

- struct anidado
- arreglo de structs [100] (global)
- arreglo paralelo float[100]
- dos ciclos for
- búsqueda de máximo con posición

## Observaciones

No valida n &lt;= 100. Manejo de buffer defectuoso: los cin.ignore tras los getline sobran y, desde el segundo alumno, también el del inicio del for (el ignore posterior a nota3 ya vació el buffer), así que se descartan líneas y hay que pulsar Enter de más. mayorPromedio arranca en 0.

## Compilar y ejecutar

```bash
g++ main.cpp -o estructuras_ejercicio_06
./estructuras_ejercicio_06
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
