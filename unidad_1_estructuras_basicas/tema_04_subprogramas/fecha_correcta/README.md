# Validación de fecha — año bisiesto y días del mes

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (descomposición funcional, reusabilidad) |
| **Archivos** | [`fecha_correcta.cpp`](fecha_correcta.cpp) |
| **Origen en la cursada** | `Cursada/Fecha_Correcta` |

## Objetivo académico

Descompone la validación de una fecha (día, mes, año) en tres funciones: esAnioBisiesto, diasDelMes y validarFecha. Lee una fecha e informa si es correcta.

## Estrategia de resolución

1. esAnioBisiesto(anio) decide con módulos 4 / 100 / 400
2. diasDelMes(mes, anio) parte de 31, baja a 30 para abril, junio, septiembre y noviembre, y a 28/29 para febrero según bisiesto
3. validarFecha combina 1 &lt;= dia &lt;= diasDelMes, 1 &lt;= mes &lt;= 12 y anio >= 0
4. main lee la fecha, valida y muestra el resultado

## Estructuras de datos utilizadas

- funciones bool/int con parámetros por valor
- decisión anidada (if/else)
- operadores lógicos && y ||
- variable bool de retorno

## Observaciones

BUGS: (1) `cin >> dia, mes, anio;` usa el operador coma: solo lee dia; mes y anio quedan sin inicializar (debe ser cin >> dia >> mes >> anio). (2) esAnioBisiesto está mal: todo múltiplo de 4 da bisiesto (1900 da true) y la rama else (anio%400 == 0 && anio%100 != 0) nunca puede cumplirse; la regla es (a%4 == 0 && a%100 != 0) || a%400 == 0. (3) diasDelMes se llama antes de validar el mes (no rompe: devuelve 31 para meses inválidos). Mensaje de salida informal ('Todo bien uwu').

## Compilar y ejecutar

```bash
g++ fecha_correcta.cpp -o fecha_correcta
./fecha_correcta
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_date_is_valid() / utn_date_is_leap() — `include/utn_date.h`.
