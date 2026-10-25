# Parcial — Socios y comisiones por ventas (esqueleto v2)

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 5: Abstracción de datos |
| **Equivalencia Plan 2023** | U13 — Combinaciones complejas de estructuras (Map de registros + archivo binario) |
| **Archivos** | [`principal.cpp`](principal.cpp), [`socios_comisiones.hpp`](socios_comisiones.hpp) |
| **Origen en la cursada** | `Cursada/Sznajdleder Suelto` |

## Objetivo académico

Segunda copia del esqueleto del parcial de socios y comisiones: misma lectura de VENTAS.dat sobre un Map&lt;int,RSocio>, con procesarVenta marcado '// PROGRAMAR' y RSocio con acumuladores enteros acumCom/acumVta.

## Estrategia de resolución

1. subirSocios (stub) devuelve el Map de socios.
2. Lectura anticipada de VENTAS.dat y procesarVenta por cada Venta (pendiente de programar).
3. punto1 y punto2 vacíos para los listados finales.

## Estructuras de datos utilizadas

- structs Fecha, Socio, RSocio (acumCom, acumVta int), Venta
- TAD Map&lt;int,RSocio>
- archivo binario VENTAS.dat con lectura anticipada
- ciclo while

## Observaciones

Casi duplicado de parcial_socios_comisiones (cambia el orden de funciones y los acumuladores de RSocio pasan a int acumCom/acumVta; acumular importes double en int trunca). Los nombres acumCom/acumVta coinciden con los usados por la solución comentada 'empresa ep' de 'principal (6).cpp', cuya cabecera 'empresa ep.hpp' no existe: este 'principal (5).hpp' es el equivalente más probable. Emparejado por número. Solo esqueleto.

## Compilar y ejecutar

```bash
g++ -I ../../.. principal.cpp -o parcial_socios_comisiones_v2
./parcial_socios_comisiones_v2
```

> Usa la [biblioteca de la cátedra](../../../biblioteca/): `-I ../../..` apunta a la raíz del repositorio.

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_map_get_or_put() / utn_file_read() — `include/utn_map.h`, `include/utn_file.h`.
