# Parcial — Consumo de gas: categoría por m³ anual, factura y listado por categoría

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U10 — Almacenamiento físico (archivos binarios, acceso directo / búsqueda en archivo), con U13 (Map de registros) y U9 (búsqueda) |
| **Archivos** | [`principal.cpp`](principal.cpp), [`consumo_gas.hpp`](consumo_gas.hpp) |
| **Origen en la cursada** | `Cursada/Sznajdleder Suelto` |

## Objetivo académico

Resolución docente (parcial) de un parcial de facturación de gas: por cada medición de MEDICIONES.dat se busca el cliente en CLIENTES.dat, se decodifica su historial de consumos empaquetado (unsigned char[36]), se calcula el consumo anual, se determina la nueva categoría por rango de m³ y si subió o bajó respecto de la anterior, se imprime la factura con el ahorro y se cuentan altas/ascensos/descensos por categoría.

## Estrategia de resolución

1. Categorías en Map&lt;int,RCategoria> (Categoria + contadores aTot, aAsc, aDes) cargadas por subirCategorias.
2. procesar: buscarCliente(idCli, fCli) en el archivo de clientes, decodeConsumo + calcularConsumoAnual, buscarCategoria por rango y determinarVariacionCategoria contra c.idCatAnt.
3. Se incrementan los contadores de la categoría actual y se imprime la factura comparando el valor por m³ actual vs. anterior ('Ahorraste' / 'Hubieras ahorrado').
4. Las funciones de búsqueda, codificación/decodificación y listado son stubs a completar.

## Estructuras de datos utilizadas

- structs Fecha, Categoria, RCategoria (Categoria anidada + contadores), Cliente (char[100], char[200], unsigned char consumos[36]), Medicion (Fecha anidada), Consumo
- archivos binarios CLIENTES.dat y MEDICIONES.dat (lectura anticipada, búsqueda de cliente en archivo)
- TAD Map&lt;int,RCategoria> y TAD Array&lt;Consumo> de la cátedra
- contadores, if/else anidados, while

## Observaciones

Cabecera identificada por contenido: usa RCategoria (aTot/aAsc/aDes) y Cliente sin codigoPostal => 'principal (7).hpp' (los números de archivo están corridos: (8).cpp va con (7).hpp). Es el mismo tema que la sección 'Gas.hpp' de 'ejercicios de Lucas.cpp' (raíz de Cursada), donde buscarCliente está implementada como búsqueda binaria en archivo. Hay una variante en parcial_consumo_gas_v2. Stubs: decodeConsumo, encodeConsumo, calcularConsumoAnual, subirCategorias, mostrarListado, buscarCliente, buscarCategoria, determinarVariacionCategoria. BUGS: buscarCategoria/mapGet pueden devolver NULL y se desreferencian sin control (rcActual->aTot, rcAnt->c.valorM3); 'int vm3Act = cons\*rcActual->c.valorM3' trunca el double; se imprime vm3Act\*cons multiplicando dos veces por el consumo; abs() sin &lt;cstdlib> explícito (llega vía la cabecera); no verifica fopen; encodeConsumo nunca se usa (no se actualiza el cliente).

## Compilar y ejecutar

```bash
g++ -I ../../.. principal.cpp -o parcial_consumo_gas
./parcial_consumo_gas
```

> Usa la [biblioteca de la cátedra](../../../biblioteca/): `-I ../../..` apunta a la raíz del repositorio.

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_file_bsearch() / utn_map_get_or_put() / utn_date_compare() — `include/utn_file.h`, `include/utn_map.h`, `include/utn_date.h`.
