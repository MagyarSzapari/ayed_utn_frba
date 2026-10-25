# Estructuras anidadas: empleado con dirección (Info_direccion)

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (struct anidado) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Estructuras_Anidadas` |

## Objetivo académico

Anida el struct Info_direccion dentro de Empleado, carga por teclado un arreglo global de 2 empleados y lo recorre mostrando los campos con acceso encadenado (empleados[i].direccionEmpleado.ciudad).

## Estrategia de resolución

1. Definir Info_direccion (dirección, ciudad, provincia) y Empleado (nombre, dirección anidada, salario)
2. Declarar el arreglo global empleados[2] junto a la definición del struct
3. Cargar los char[] con cin.getline y el salario con cin >>, vaciando el buffer con cin.ignore
4. Recorrer con un segundo for para mostrar

## Estructuras de datos utilizadas

- struct anidado
- arreglo de structs (global)
- campos char[] y double
- dos ciclos for (carga y muestra)
- cin.getline / cin.ignore

## Observaciones

La carpeta trae artefactos de Borland/Embarcadero (main.ilc/.ild/.ilf/.ils/.map/.obj/.tds, varios MB) que se ignoran. El ejemplo del comentario inicial tiene un typo (':' en lugar de ';'), sin efecto en la compilación. Usa 'struct Info_direccion' como tipo del campo (estilo C, válido en C++). Manejo de buffer correcto (ignore solo tras cin >>).

## Compilar y ejecutar

```bash
g++ main.cpp -o estructuras_anidadas
./estructuras_anidadas
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
