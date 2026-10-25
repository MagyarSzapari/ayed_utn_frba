# Parcial — Línea de cajas: tiempo de espera, tiempo ocioso y cola máxima por caja (resolución docente)

| | |
|---|---|
| **Programa 2008** | Unidad III · Tema 10: Colas |
| **Equivalencia Plan 2023** | U11 — Punteros y estructuras enlazadas lineales (cola), combinada con U13 (Map de colas) y U10 (archivo binario) |
| **Archivos** | [`principal.cpp`](principal.cpp), [`linea_de_cajas.hpp`](linea_de_cajas.hpp) |
| **Origen en la cursada** | `Cursada/Sznajdleder Suelto` |

## Objetivo académico

Resolución docente del parcial 'línea de cajas': procesa MOVIMIENTOS.dat (caja, 'E'/'S', hora) con un Map&lt;int,RCaja> donde cada caja tiene una Queue&lt;int> de horas de llegada, para calcular el tiempo promedio de espera, el tiempo ocioso acumulado y el máximo tamaño de cola de cada caja.

## Estrategia de resolución

1. Por cada movimiento se obtiene la caja del Map o se la crea con rCaja(queue&lt;int>(), 0, ...).
2. Entrada 'E': se encola la hora; si la cola quedó con 1 cliente se acumula ocio desde cto (hora en que la caja quedó libre); se actualiza maxTC.
3. Salida: se desencola la hora de entrada, se suma horaDiff(entrada, salida) a sumTE y se cuenta; si la cola quedó vacía se registra cto = hora.
4. punto1 recorre el Map (mapReset/mapHasNext/mapNextKey) e imprime sumTE / contPE por caja.

## Estructuras de datos utilizadas

- struct Mov y struct RCaja (Queue&lt;int> anidada + acumuladores)
- TAD Map&lt;int,RCaja> y TAD Queue&lt;int> de la cátedra
- archivo binario con lectura anticipada (read&lt;T>, feof)
- acumuladores, contadores y máximo
- if/else, while

## Observaciones

Mismo problema que Practica_Parciales (resolución del alumno, v2) y que la sección activa de 'principal (6).cpp' (v3); esta es la versión más limpia. Cabecera identificada por contenido: Mov + RCaja{q, contPE, sumTE, sumTO, maxTC, cto} => 'principal (3).hpp'. horaDiff es stub (devuelve 0) y punto2/punto3 están vacíos. BUGS: rCajaToDebug usa 'queue&lt;int>ToDebug(x.q)' (sintaxis inválida generada por ayedtools) => la cabecera no compila tal cual; horaDiff se llama con orden de argumentos inconsistente (horaDiff(m.hora, cto) vs horaDiff(he, hs)); cto arranca en 0, por lo que el primer ocio se mide desde la hora 0; punto1 divide por cero si una caja no tuvo salidas y usa división entera; cout sin separadores. Depende de biblioteca/ (TADs stub).

## Compilar y ejecutar

```bash
g++ -I ../../.. principal.cpp -o parcial_linea_de_cajas
./parcial_linea_de_cajas
```

> Usa la [biblioteca de la cátedra](../../../biblioteca/): `-I ../../..` apunta a la raíz del repositorio.

**Estado:** ⚠️ no compila tal como está con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17):

```text
linea_de_cajas.hpp:70:22: error: expected ';' before 'ToDebug'
```

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_queue_t / utn_map_get_or_put() / utn_time_hhmm_diff() — `include/utn_queue.h`, `include/utn_map.h`, `include/utn_date.h`.
