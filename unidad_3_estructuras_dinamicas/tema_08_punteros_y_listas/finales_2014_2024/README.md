# Finales — Resoluciones de finales 2014–2024 (listas simples, circulares y dobles; pila y cola; archivos)

| | |
|---|---|
| **Programa 2008** | Unidad III · Tema 8: Punteros y listas enlazadas |
| **Equivalencia Plan 2023** | U11 — Punteros y estructuras enlazadas lineales (listas simples, circulares y doblemente enlazadas, pila, cola); los finales integradores también tocan U13 — Combinaciones complejas de estructuras y U10 (archivos binarios) |
| **Archivos** | [`finales.cpp`](finales.cpp), [`funciones_catedra.hpp`](funciones_catedra.hpp) |
| **Origen en la cursada** | `Cursada/Finales` |

## Objetivo académico

Recopilación de resoluciones (varias parciales o incompletas) de finales de AyED, una por bloque comentado: 04-03-2024 (solo estructuras), 26-02-2024 (vacío), 19-02-2024 (encuesta de lenguajes: lista de formularios volcada a una matriz actividad x instituto de vectores de votos, ordenamiento y porcentajes), 11-12-2023 (unir pila y cola en lista ordenada, intersección de dos listas, actualizar vector de hoteles desde una lista de reservas, ordenar el archivo binario Stock.dat vía lista ordenada y filtrar sin stock / pesados o bebidas), 04-12-2023 (pasajeros en lista circular usada como cola con menú de alta/consulta/baja/modificación), 28-07-2017 (pizzería: cola de pedidos + lista ordenada por importe + lista sin repetir por variedad), 14-12-2016 (notificaciones de mensajería con lista de conversaciones y vector de contactos, incompleto), 03-12-2014 y 10-12-2014 (edificio como lista doblemente enlazada de pisos: insertar arriba del actual, medir distancia a extremos y a PB, eliminar pisos primos grabándolos en archivo binario).

## Estrategia de resolución

1. Cada final está encerrado en un bloque /\* ... //CIERRE\*/; solo el del 04-03-2024 queda activo y para probar otro hay que descomentar un bloque por vez (los bloques redefinen Nodo, Lenguaje, main, etc.).
2. Listas simples recorridas con puntero auxiliar y funciones auxiliares reutilizables (buscar, agregar al final, insertarOrdenado, filtrar por condición creando una lista nueva).
3. 19-02-2024: la función dada xx(v, inicio, fin) devuelve el índice relativo de la opción marcada en cada tramo del formulario; con esos índices se incrementa mElecciones[actividad][instituto].cantDeVotosPorLenguajes[lenguaje] y luego se ordena un vector de Lenguaje por burbuja con bandera.
4. 11-12-2023: se lee Stock.dat con lectura anticipada (fread + feof) insertando ordenado por codProd en una lista, se reescribe el archivo desde la lista y se derivan listas filtradas; reservas se aplican al vector de hoteles con búsqueda secuencial por codHotel.
5. 2014: lista doblemente enlazada (ant/sig): inserción entre dos nodos, conteo de nodos hacia abajo y hacia arriba, recorrido en la dirección de PB según el signo del piso y eliminación con religado de vecinos más fwrite de un registro TipoPisoEliminado.

## Estructuras de datos utilizadas

- struct / registros anidados (Nodo con campo info struct)
- listas simplemente enlazadas
- lista circular con puntero al último usada como cola
- lista doblemente enlazada (ant/sig)
- pila y cola con punteros (frente/fin)
- matriz bidimensional de structs con vector de contadores
- vector de structs
- archivo binario (fopen r+b, fread, fwrite, feof)
- ordenamiento burbuja con bandera de cambio
- búsqueda secuencial y binaria en vector (funciones_catedra.hpp)
- switch como menú de opciones
- ciclos while, do-while y for
- parámetros por referencia (Nodo\*&)

## Observaciones

Excede el plan 2008 por ser un integrador de varios finales (listas + pila/cola + matrices + archivos); se ubica en tema_08 por ser listas el foco dominante. COMPILACIÓN: el único código activo (FINAL 04-03-2024) son estructuras y cargarMatriz vacía, sin main() => error de enlace; los demás bloques redefinen nombres (Nodo, Lenguaje, xx como struct y como función, main) y solo compilan de a uno. BUGS por final: [19-02-2024] xx(aux->form, 6, 13) lee form[13] fuera de rango (form tiene 13 posiciones, 0..12; para 7 lenguajes el rango es 6..12); mElecciones nunca se inicializa en 0; ordenar() ordena en forma ASCENDENTE pero mostrarResultados toma vLenguajes[0] como el más votado (debería usar la ordenarDecreciente dada); (cantDeVotos / votosTotales)\*100 es división entera (da 0) y divide por cero si no hay votos; inicializarNombresDeLenguajes solo está declarada; calcularEncuestadosTotales/calcularCantidadAlumnos son stubs; main usa la lista sin inicializar. [11-12-2023] unirPilaYColaOrdenadamente: pop(auxPila)/desencolar(auxPrimero) reciben el puntero por valor y no lo avanzan => ciclo infinito; actualizarReservas usa listaReservas->reserva.codHotel en vez de aux->...; insertarOrdenado de NodoBulto al insertar al principio hace archOrdenado = nuevo sin nuevo->sig = archOrdenado (pierde la lista); ordenarArchivo escribe tras leer hasta EOF sin fseek al inicio (agrega al final en lugar de reescribir); main no verifica fopen y consulta feof antes de leer. [04-12-2023] 'ListaPasajeros\*& nuevo = new ListaPasajeros();' no compila (referencia no const a un rvalue); en la lista circular los recorridos usan aux != NULL => ciclo infinito; eliminarPasajero no religa al anterior; mostrarDatosPasajero imprime destino como asiento; main crea un nodo vacío en lugar de NULL y el menú no itera; modificarDatosPas busca por el nombre nuevo. [28-07-2017] encolar/insertarSinRepetir reciben punteros por valor (la cola/lista nunca se actualiza) y son stubs; facturarPedido solo declarada; informarHorario... no controla lista vacía. [14-12-2016] 'int maxContactos = 200; Contacto contactosUsuario[maxContactos];' no compila (tamaño no constante en ámbito global); identificador emitirNotificación con tilde; notificarMensajeRecibido incompleto. [03-12-2014] insertarPisoArribaDelActual desreferencia unPisoActual->sig sin chequear NULL (falla en el último piso); main usa punteros sin inicializar. [10-12-2014] EsPrimo y EliminarPiso se usan antes de declararse (faltan prototipos); EsPrimo(0) y EsPrimo(1) devuelven true; abs() sin &lt;cstdlib>; sin main. funciones_catedra.hpp: binaria() con dimension 0 accede a vector[0]; busquedaSecuencial se sobrecarga en el bloque 11-12-2023 para ReservaHotel[].

## Compilar y ejecutar

```bash
g++ finales.cpp -o finales_2014_2024
./finales_2014_2024
```

**Estado:** ⚠️ no compila tal como está con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17):

```text
error de enlace: el programa no tiene función main()
```

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_ll_ordered_insert() / utn_ll_sort() / utn_algo_bubble_sort() — `include/utn_ll.h`, `include/utn_algo.h`.
