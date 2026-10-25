# Parciales integradores — Ejercicios de Lucas: archivos binarios + TAD Map/List/Queue (8 parciales, método Sznajdleder)

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U13 — Combinaciones complejas de estructuras (archivos binarios + Map con List/Queue/Map anidados) |
| **Archivos** | [`ejercicios_de_lucas.cpp`](ejercicios_de_lucas.cpp) |
| **Origen en la cursada** | `Cursada/ejercicios de Lucas.cpp` |

## Objetivo académico

Compendio de resoluciones de parciales del método Sznajdleder: en cada uno se procesa un archivo binario de novedades (read&lt;T> hasta feof), indexando en memoria los archivos maestros con TAD Map (con List, Queue o Map anidados como valor) para luego emitir listados. Solo la última resolución (Gas) está activa; además usa búsqueda binaria sobre archivo binario con seek/read/fileSize.

## Estrategia de resolución

1. Patrón común "subir": recorrer un .dat maestro con read&lt;T> y cargarlo en Map&lt;id, RRegistro>, donde el valor envuelve el registro + acumuladores + una List/Queue/Map anidada.
2. Procesar el archivo de novedades registro a registro: mapGet para obtener el puntero al valor y acumular/insertar in situ; patrón "descubrir" (mapContains ? mapGet : mapPut) cuando la clave puede no existir.
3. Gas (activo): cargar CATEGORIAS.dat en Map&lt;string,RCategoria> con 3 List&lt;int> (ascendidos, descendidos, nuevos); por cada medición buscar el cliente en CLIENTES.dat por búsqueda binaria con seek&lt;Cliente>/read&lt;Cliente>, recalcular la categoría por rango de m3 y registrar el cambio en las listas.
4. Listados finales recorriendo los Map con mapReset/mapHasNext/mapNextValue/mapNextKey.
5. Subejercicios (comentados salvo Gas): Buques/containers, Empresa EP (comisiones recursivas por referente), Línea de cajas (simulación con Queue), Infracciones, ART (accidentes), Aviación (vuelos/reservas/millas), Fulvo (esqueleto), Gas.

## Estructuras de datos utilizadas

- archivos binarios (FILE\*, read/seek/fileSize de biblioteca)
- búsqueda binaria en archivo
- struct de registro y registros envoltorio (RBuque, RSocio, Caja, RInfraccion, REmpresa, RCiudad, RVuelo, RCategoria)
- TAD Map
- TAD List
- TAD Queue
- TAD Array
- Map anidado (Map&lt;int,int> como valor)
- recursividad (liquidarComision)
- punteros a valores del Map

## Observaciones

Archivo único de 940 líneas tratado como un ejercicio; excede el plan 2008 (parcial integrador archivos + TADs + listas/colas): se ubicó en tema_07 por el procesamiento de archivos binarios e indexación en memoria/búsqueda binaria en archivo; alternativa defendible: tema_05 (TADs). Subejercicios: (1) Buques/containers [comentado]: Map&lt;int,RBuque> con List&lt;Container>, orden de manipulación quitando de la lista el primer container 'estable' (estable() siempre true, fechaHoy/fechaCmp stubs). (2) Empresa EP [comentado]: Map&lt;int,RSocio>, liquidarComision RECURSIVA que reparte 70/30 hacia el socio referente hasta el jefe (idSocioRef&lt;0); subirSocios/punto1/punto2 vacíos. (3) Línea de cajas [comentado]: Map&lt;int,Caja> con Queue&lt;Mov>, simula entradas/salidas para tiempo promedio de espera, tiempo ocioso y cola máxima; bugs: `Caja* c;` sin inicializar usado en while en mostrarPunto1..3, `"caja " + i` hace aritmética de punteros. (4) Infracciones [comentado]: Map&lt;int,RInfraccion> con Map&lt;int,int> por día y Map&lt;string,Deuda> por patente; accede a internals (`mInf.values.arr->...`), `"dia: " + *dia` aritmética de punteros, diaDelMes/sumarDias/fechaActual stubs, variables que tapan funciones (fechaActual, fechaAnterior). (5) ART [comentado]: Map&lt;int,REmpresa> con Map&lt;int,int> legajo→días; `read<Empresa>(f);` y `read<Accidente>(f);` sin asignar → ciclos infinitos, subirEmpresas recibe un map sin inicializar, porcentaje() stub. (6) Aviación [comentado]: Map&lt;int,RCiudad>, Map&lt;int,RVuelo>, Map&lt;int,int> millas por cliente; subirCiudades/subirVuelos reciben maps sin inicializar. (7) Fulvo [comentado]: solo esqueleto de main con Map&lt;string,List&lt;int>>. (8) Gas [ACTIVO]: bugs graves: buscarCliente usa fileSize&lt;int> en vez de fileSize&lt;Cliente> y sin -1, nunca pone encontrado=true y si encuentra la clave ni i ni j cambian → ciclo infinito; procesarCategoria hace `return 0;` en función que devuelve string (construye string desde NULL → excepción/UB); en main nunca se vuelve a leer la medición ni a buscar el cliente dentro del while → ciclo infinito; calcularAhorro calcula y descarta el resultado; no hay fclose. NO compila en el repo: incluye 8 headers propios que no están en el zip ("Principal buques.hpp", "empresa ep.hpp", "LineaDeCajas.hpp", "Infracciones.hpp", "ART.hpp", "Aviacion.hpp", "Fulvo.hpp", "Gas.hpp"); solo existe un LineaDeCajas.hpp en "Sznajdleder Suelto/" y está todo comentado. Aun existiendo, incluirlos juntos probablemente redefiniría tipos. Variantes del parcial Gas (con otros tipos: idCat int) están en "Sznajdleder Suelto/principal (7).cpp/.hpp" y "principal (8).cpp". Todo envuelto en #ifndef _MAIN (innecesario en un .cpp). Los includes "biblioteca/..." no se tocan.

## Compilar y ejecutar

```bash
g++ -I ../../.. ejercicios_de_lucas.cpp -o ejercicios_de_lucas_parciales
./ejercicios_de_lucas_parciales
```

> Usa la [biblioteca de la cátedra](../../../biblioteca/): `-I ../../..` apunta a la raíz del repositorio.

**Estado:** ⚠️ no compila tal como está con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17):

```text
ejercicios_de_lucas.cpp:15:10: fatal error: Principal buques.hpp: No such file or directory
```

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_file_bsearch() / utn_map_get_or_put() / utn_ll_t — `include/utn_file.h`, `include/utn_map.h`.
