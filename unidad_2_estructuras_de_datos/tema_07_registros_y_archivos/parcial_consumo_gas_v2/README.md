# Parcial — Consumo de gas (v2): validación de mediciones con archivo de errores y estadística por código postal

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U10 — Almacenamiento físico (archivos binarios, búsqueda en archivo, archivo de errores), con U13 (Map de registros) |
| **Archivos** | [`principal.cpp`](principal.cpp), [`consumo_gas.hpp`](consumo_gas.hpp) |
| **Origen en la cursada** | `Cursada/Sznajdleder Suelto` |

## Objetivo académico

Variante del parcial de gas: cada medición se valida (cliente inexistente = error 1; fecha no posterior a la última medición = error 2) grabando ErrMed en ERRMED.dat, y las mediciones válidas alimentan un Map&lt;int,RCodigoPostal> que cuenta clientes totales, que ascendieron y que descendieron de categoría por código postal.

## Estrategia de resolución

1. procesar: buscarCliente(idCli, fCli, enc) y procesarError, que graba un ErrMed {codErr, medición} con write&lt;T> si el cliente no existe o si fechaCmp(m.fecha, c.fechaMedAnt) &lt;= 0.
2. procesarEstad: obtiene o crea el RCodigoPostal del cliente en el Map, calcula consumo anual, categoría actual vs. anterior y actualiza aTot/aAsc/aDes.
3. Lectura anticipada de MEDICIONES.dat; se abren tres archivos (errores en w+b).

## Estructuras de datos utilizadas

- structs Fecha, Categoria, RCodigoPostal, ErrMed (Medicion anidada), Cliente (Fecha anidada, unsigned char consumos[36]), Medicion, Consumo
- archivos binarios CLIENTES.dat, MEDICIONES.dat y ERRMED.dat (lectura, búsqueda y grabación)
- TAD Map&lt;int,Categoria>, Map&lt;int,RCodigoPostal>, Array&lt;Consumo>
- inicialización de struct por agregado ({1, m})
- contadores, if/else anidados, while

## Observaciones

Cabecera identificada por contenido: usa RCodigoPostal, ErrMed, Cliente.codigoPostal y Cliente.fechaMedAnt => 'principal (6).hpp' ((7).cpp va con (6).hpp). Variante de parcial_consumo_gas. BUGS: en la cabecera ErrMed usa Medicion antes de que se declare => no compila (hay que mover Medicion arriba); main llama mostrarListado(mCat) cuando la estadística está en mCod; procesarEstad desreferencia rcActual/rcAnt sin control (stubs devuelven NULL); stubs: fechaCmp, decodeConsumo, encodeConsumo, calcularConsumoAnual, subirCategorias, mostrarListado, buscarCliente, buscarCategoria, determinarVariacionCategoria; no se actualiza el registro del cliente; no verifica fopen.

## Compilar y ejecutar

```bash
g++ -I ../../.. principal.cpp -o parcial_consumo_gas_v2
./parcial_consumo_gas_v2
```

> Usa la [biblioteca de la cátedra](../../../biblioteca/): `-I ../../..` apunta a la raíz del repositorio.

**Estado:** ⚠️ no compila tal como está con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17):

```text
consumo_gas.hpp:41:4: error: 'Medicion' does not name a type
```

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_file_bsearch() / utn_map_get_or_put() / utn_date_compare() — `include/utn_file.h`, `include/utn_map.h`, `include/utn_date.h`.
