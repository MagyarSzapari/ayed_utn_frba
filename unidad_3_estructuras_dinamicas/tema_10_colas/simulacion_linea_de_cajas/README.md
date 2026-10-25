# Parcial — Simulación de líneas de cajas con 3, 4, 7, 8 y 10 cajas (cola más corta)

| | |
|---|---|
| **Programa 2008** | Unidad III · Tema 10: Colas |
| **Equivalencia Plan 2023** | U13 — Combinaciones complejas de estructuras (Map de Map de colas), con U11 (colas) |
| **Archivos** | [`principal.cpp`](principal.cpp), [`simulacion_cajas.hpp`](simulacion_cajas.hpp) |
| **Origen en la cursada** | `Cursada/Sznajdleder Suelto` |

## Objetivo académico

Resolución docente (incompleta) de un parcial que simula, sobre un mismo archivo MOVIMIENTOS.dat de entradas/salidas de clientes, cómo funcionaría el supermercado con 3, 4, 7, 8 y 10 cajas: cada cliente que entra se encola en la caja con menor cola y se recuerda su caja para desencolarlo al salir, para luego comparar los resultados en una tabla.

## Estrategia de resolución

1. Map&lt;int,Simu> con clave = cantidad de cajas; cada Simu tiene Map&lt;int,Caja> (cajas 1..n con Queue&lt;int>) y Map&lt;int,int> cliente -> caja.
2. crearEstructuraSimulacion arma las n cajas vacías con inicialización por agregado.
3. Cada movimiento se aplica a todas las simulaciones (mapReset/mapHasNext/mapNextValue); en 'E' se encola la hora en la caja de menor cola y se registra la caja del cliente.
4. La rama de salida, buscarCajaConMenorCola y mostrarTablaResultados quedaron sin implementar.

## Estructuras de datos utilizadas

- structs Mov (idCli, 'E'/'S', hora hhmm), Caja (Queue&lt;int> + contadores), Simu (dos Map anidados)
- TAD Map&lt;int,Simu>, Map&lt;int,Caja>, Map&lt;int,int>, Queue&lt;int> de la cátedra
- archivo binario MOVIMIENTOS.dat con lectura anticipada
- ciclo for para crear cajas, while para recorrer mapas

## Observaciones

Cabecera identificada por contenido: usa Simu, Caja{q, cantCliEsp, acumCliEsp, cantTO, acumTP} y Mov con idCli => 'principal (8).hpp' ((9).cpp va con (8).hpp). Variante 'simulación' del problema de línea de cajas (ver parcial_linea_de_cajas). Incompleto: buscarCajaConMenorCola es stub y devuelve 0 (las cajas son 1..n => mapGet devuelve NULL y c->q se desreferencia), la rama de salida está vacía y mostrarTablaResultados vacía; hay borradores comentados al comienzo. acumCliEsp se incrementa en la entrada (parece que debía ser cantCliEsp). La cabecera solo incluye Coll.hpp pero usa Map/Queue (funciona porque el .cpp los incluye antes). No verifica fopen.

## Compilar y ejecutar

```bash
g++ -I ../../.. principal.cpp -o simulacion_linea_de_cajas
./simulacion_linea_de_cajas
```

> Usa la [biblioteca de la cátedra](../../../biblioteca/): `-I ../../..` apunta a la raíz del repositorio.

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_queue_t / utn_map_t — `include/utn_queue.h`, `include/utn_map.h`.
