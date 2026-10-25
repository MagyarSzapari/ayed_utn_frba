# Parcial — Línea de cajas (copia del alumno, v3) con borradores comentados de 'buques' y 'empresa'

| | |
|---|---|
| **Programa 2008** | Unidad III · Tema 10: Colas |
| **Equivalencia Plan 2023** | U11 — Punteros y estructuras enlazadas lineales (cola), con U13 — Combinaciones complejas de estructuras (Map de colas / Map de listas) y U10 |
| **Archivos** | [`principal.cpp`](principal.cpp), [`linea_de_cajas.hpp`](linea_de_cajas.hpp) |
| **Origen en la cursada** | `Cursada/Sznajdleder Suelto` |

## Objetivo académico

Archivo de práctica que junta tres parciales: 'buques' (comentado: cargar BUQUES.DAT y CONTAINERS.DAT en un Map&lt;int,RBuque> con List&lt;Container> y listar el orden de manipulación de containers según estabilidad y carga/descarga), 'empresa ep' (comentado: liquidación recursiva de comisiones de socios) y 'línea de cajas' (activo: la misma resolución del alumno que Practica_Parciales, con colas por caja en un Map).

## Estrategia de resolución

1. Buques (comentado): Map de buques con lista de containers; se extrae repetidamente el primer container 'estable' (listReset/listNext/listRemove) numerando el orden, y se arma la cabecera según la fecha (carga o descarga).
2. Empresa (comentado): procesarVenta acumula la venta y llama a liquidarComision, que recursivamente asigna el 70 % al socio y pasa el 30 % al referente (mapGet por idSocioRef) hasta el jefe.
3. Línea de cajas (activo): descubrirCaja busca o crea la caja, en 'E' se encola y se actualizan ocio y cola máxima; en salida se desencola y se acumula la espera; al final se muestran los tres puntos.

## Estructuras de datos utilizadas

- TAD Map&lt;int,Caja> con Queue&lt;Mov> (activo)
- TAD Map&lt;int,RBuque> con List&lt;Container> (comentado)
- TAD Map&lt;int,RSocio> y recursividad (comentado)
- archivos binarios MOVIMIENTOS.DAT, BUQUES.DAT, CONTAINERS.DAT, VENTAS.DAT
- acumuladores y máximo, if/else, while

## Observaciones

Contiene 3 problemas en un solo .cpp; se clasifica por el código activo (línea de cajas), que es casi idéntico a Practica_Parciales/src/principal.cpp (v2). LineaDeCajas.hpp está TOTALMENTE comentado (es LucasPelao.hpp de Practica_Parciales con todas las líneas en //), así que Mov y Caja quedan sin definir y el programa no compila tal cual; la versión sin comentar es Practica_Parciales/src/LucasPelao.hpp. Cabeceras incluidas que FALTAN en disco: 'Principal buques.hpp' (no hay ningún .hpp con RBuque/Buque/Container en la carpeta) y 'empresa ep.hpp' (equivalente probable: 'principal (5).hpp'); al copiar, el script comenta esos dos #include porque el código que los usaba ya estaba comentado. Este archivo es el comienzo de 'ejercicios de Lucas.cpp' (raíz de Cursada, otro grupo), que agrega Infracciones, ART, Aviacion, Fulvo y Gas con las mismas cabeceras faltantes. BUGS (sección activa): mismos que Practica_Parciales (falta releer en el while => ciclo infinito, Map por valor en descubrirCaja, c.caja sin inicializar, chequeo de cola vacía después de encolar, signo invertido en procesar2, while sin avanzar en mostrarPunto1/2/3) y además '"Tiempo promedio de espera: " + prom' suma un double a un const char\* => error de compilación. Buques (comentado): el Map se declara sin map&lt;...>() y 'LLEAGADA' mal escrito.

## Compilar y ejecutar

```bash
g++ -I ../../.. principal.cpp -o parcial_linea_de_cajas_v3
./parcial_linea_de_cajas_v3
```

> Usa la [biblioteca de la cátedra](../../../biblioteca/): `-I ../../..` apunta a la raíz del repositorio.

**Estado:** ⚠️ no compila tal como está con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17):

```text
principal.cpp:203:1: error: 'Caja' does not name a type
```

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_queue_t / utn_map_get_or_put() / utn_time_hhmm_diff() — `include/utn_queue.h`, `include/utn_map.h`, `include/utn_date.h`.
