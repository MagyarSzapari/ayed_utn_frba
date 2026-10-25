# Parcial — Línea de cajas de supermercado: espera promedio, tiempo ocioso y cola máxima (resolución del alumno, v2)

| | |
|---|---|
| **Programa 2008** | Unidad III · Tema 10: Colas |
| **Equivalencia Plan 2023** | U11 — Punteros y estructuras enlazadas lineales (cola), combinada con U13 — Combinaciones complejas de estructuras (Map de colas) y U10 (archivo binario) |
| **Archivos** | [`principal.cpp`](principal.cpp), [`linea_de_cajas.hpp`](linea_de_cajas.hpp), [`numeros.x`](numeros.x), [`numeros.zzz`](numeros.zzz) |
| **Origen en la cursada** | `Cursada/Practica_Parciales` |

## Objetivo académico

Resolución del alumno del parcial 'línea de cajas': se procesa el archivo binario MOVIMIENTOS.DAT (caja, 'E'ntrada/salida, hora) manteniendo por cada caja una cola (TAD Queue de la cátedra) dentro de un Map&lt;int,Caja>, para informar el tiempo promedio de espera, el tiempo ocioso y la longitud máxima de cola de cada caja.

## Estrategia de resolución

1. descubrirCaja: si la caja no está en el Map se crea con cajaf(...) y una cola vacía (patrón 'buscar o agregar').
2. Movimiento 'E': se encola el Mov en la cola de la caja, se acumula tiempo ocioso si la caja estaba vacía (procesar2) y se actualiza el máximo de la cola (procesar3).
3. Otro movimiento: se desencola el cliente, se acumula hora salida - hora entrada y se cuenta la compra (procesar1); se guarda hUltimo.
4. Al final se recorre el Map por número de caja 1, 2, ... para mostrar los tres puntos.

## Estructuras de datos utilizadas

- struct Mov y struct Caja (con Queue&lt;Mov> anidada)
- TAD Map&lt;int,Caja> y TAD Queue&lt;Mov> de la biblioteca de la cátedra
- archivo binario de registros (read&lt;T> de files.hpp, feof)
- serialización a string con separador char(1) y getTokenAt (movToString/movFromString)
- acumuladores, contadores y máximo
- decisión if/else
- ciclo while

## Observaciones

Es el mismo problema que 'Sznajdleder Suelto/principal (3).cpp' (resolución docente, destino parcial_linea_de_cajas) y prácticamente idéntico a la sección activa de 'Sznajdleder Suelto/principal (6).cpp' + LineaDeCajas.hpp (v3); LineaDeCajas.hpp es esta misma cabecera, pero totalmente comentada. La cabecera se llamaba LucasPelao.hpp (un apodo) y se renombró a linea_de_cajas.hpp. Depende de biblioteca/ (Map, Queue, files, tokens, Coll; los TADs Map y Queue son stubs que devuelven NULL/true). numeros.x y numeros.zzz (6 bytes cada uno, idénticos: tres short little-endian 1234, 4321, 55660/-9876) NO son leídos por este programa (lee MOVIMIENTOS.DAT, ausente); parecen restos de una práctica de archivos/bits. BUGS: main nunca vuelve a leer dentro del while (falta m = read&lt;Mov>(f)) => ciclo infinito; descubrirCaja recibe el Map por valor (el mapPut se pierde y devuelve un puntero a la copia) y construye la caja con c.caja sin inicializar en vez de m.caja; la condición queueIsEmpty(c->cola) se evalúa DESPUÉS de encolar (nunca es verdadera); procesar2 suma hUltimo - m.hora (signo invertido); mostrarPunto1/2/3 nunca actualizan c dentro del while => ciclo infinito; prom = acumEspera / contCompras es división entera y puede dividir por cero; '"caja " + i' y '"Tiempo oscioso: " + c->tOscioso' son aritmética de punteros sobre literales; no verifica fopen ni hace fclose.

## Compilar y ejecutar

```bash
g++ -I ../../.. principal.cpp -o parcial_linea_de_cajas_v2
./parcial_linea_de_cajas_v2
```

> Usa la [biblioteca de la cátedra](../../../biblioteca/): `-I ../../..` apunta a la raíz del repositorio.

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_queue_t / utn_map_get_or_put() / utn_time_hhmm_diff() — `include/utn_queue.h`, `include/utn_map.h`, `include/utn_date.h`.
