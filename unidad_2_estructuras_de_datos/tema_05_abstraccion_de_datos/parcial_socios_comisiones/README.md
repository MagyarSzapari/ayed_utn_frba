# Parcial — Socios y comisiones por ventas (esqueleto con Map de socios)

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 5: Abstracción de datos |
| **Equivalencia Plan 2023** | U13 — Combinaciones complejas de estructuras (Map de registros + archivo binario); la solución completa usa recursividad (U5) |
| **Archivos** | [`principal.cpp`](principal.cpp), [`socios_comisiones.hpp`](socios_comisiones.hpp) |
| **Origen en la cursada** | `Cursada/Sznajdleder Suelto` |

## Objetivo académico

Esqueleto de un parcial de venta multinivel: se suben los socios a un Map&lt;int,RSocio> (Socio + acumuladores de ventas y comisiones) y se procesa VENTAS.dat registro a registro para luego informar dos puntos; la lógica de procesarVenta y los listados quedó sin programar.

## Estrategia de resolución

1. subirSocios devuelve el Map de socios (stub).
2. Lectura anticipada de VENTAS.dat con read&lt;Venta> y procesarVenta por registro (vacío).
3. RSocio envuelve al Socio con acumuladores acumVTA y acumCOM (double) para acumular ventas y comisiones.
4. La cabecera define Fecha, Socio (con idSocioRef = socio referente), RSocio y Venta con sus constructores.

## Estructuras de datos utilizadas

- structs Fecha, Socio (Fecha anidada, char[50]), RSocio, Venta (char[100], Fecha anidada)
- TAD Map&lt;int,RSocio> de la cátedra
- archivo binario VENTAS.dat con lectura anticipada
- ciclo while

## Observaciones

Solo esqueleto (subirSocios, procesarVenta, punto1, punto2 vacíos). Cabecera asignada por número de archivo: 'principal (4).cpp' y 'principal (5).cpp' son casi idénticos y no acceden a los campos de RSocio, por lo que cualquiera de las dos cabeceras sirve; (4).hpp usa double acumVTA/acumCOM. La solución de procesarVenta (liquidarComision recursiva: 70 % al socio y 30 % al referente hasta llegar al jefe con idSocioRef &lt; 0) está comentada en la sección 'empresa ep' de 'principal (6).cpp' (y en 'ejercicios de Lucas.cpp' de la raíz de Cursada). Versión 2 en parcial_socios_comisiones_v2. No verifica fopen.

## Compilar y ejecutar

```bash
g++ -I ../../.. principal.cpp -o parcial_socios_comisiones
./parcial_socios_comisiones
```

> Usa la [biblioteca de la cátedra](../../../biblioteca/): `-I ../../..` apunta a la raíz del repositorio.

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_map_get_or_put() / utn_file_read() — `include/utn_map.h`, `include/utn_file.h`.
