# Saludar al usuario por su nombre

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (sentencias de entrada/salida) |
| **Archivos** | [`saludar_al_usuario.cpp`](saludar_al_usuario.cpp) |
| **Origen en la cursada** | `Cursada/Saludar_Al_Usuario` |

## Objetivo académico

Pide el nombre del usuario, lo lee en un std::string y responde con un saludo personalizado; ejercita entrada/salida estándar con cadenas.

## Estrategia de resolución

1. Mostrar la pregunta '¿Cómo te llamás?'
2. Leer el nombre con cin en un string
3. Imprimir 'Hola, ' seguido del nombre

## Estructuras de datos utilizadas

- std::string
- entrada/salida estándar (cin/cout)

## Observaciones

Proyecto Eclipse CDT. Usa std::string sin #include &lt;string> (compila por inclusión transitiva de &lt;iostream>, no garantizado por el estándar). cin >> nombre lee solo hasta el primer espacio (un nombre compuesto se corta).

## Compilar y ejecutar

```bash
g++ saludar_al_usuario.cpp -o saludar_al_usuario
./saludar_al_usuario
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
