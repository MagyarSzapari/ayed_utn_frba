# Registros — Intento de parcial "Ranking de películas": definición de tipos (incompleto)

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (struct); relacionado con U8 (arrays de caracteres y arreglo de registros) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/intentoDeParcial` |

## Objetivo académico

Comienzo de la resolución de un parcial (estilo cátedra Cuello) sobre ranking de películas: define los tipos de cadenas de longitud fija, el registro de función de cine (tsPeli), el registro de ranking (tsRank) y el vector de ranking de 10 posiciones (tvrRank). No llega a implementar lógica.

## Estrategia de resolución

1. Definir typedefs de cadenas estilo C con tamaño fijo (str5, str15, str20, str30 = char[N+1]) y alias ushort/uint.
2. Definir struct tsPeli con los campos de cada registro de entrada (cadena, cine, sala, película, fecha de estreno, boletos, capacidad, calificación, idioma, imagen).
3. Definir struct tsRank (película, fecha, boletos, calificación) y el arreglo de registros tvrRank[MAX_RANK] para el top 10, declarado después de los structs.
4. Se inicia el prototipo obtDatos(tsPeli &rPeli) para leer un registro (sin cuerpo).

## Estructuras de datos utilizadas

- typedef de arrays de char (cadenas de longitud fija)
- struct/registro
- arreglo de registros
- constante MAX_RANK

## Observaciones

Código incompleto que NO compila: falta ';' en `using namespace std`, `const MAX_RANK = 10;` sin tipo (debería ser const int / const ushort), obtDatos no tiene cuerpo ni ';', no hay main. Probablemente iba a leer un archivo de funciones de cine y armar un ranking por boletos vendidos (corte/máximos), pero no hay enunciado ni datos. Se ubicó en tema_07 por ser definición de registros para un parcial de archivos.

## Compilar y ejecutar

```bash
g++ main.cpp -o intento_de_parcial_ranking_peliculas
./intento_de_parcial_ranking_peliculas
```

**Estado:** ⚠️ no compila tal como está con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17):

```text
main.cpp:5:20: error: expected ';' before 'const'
```
