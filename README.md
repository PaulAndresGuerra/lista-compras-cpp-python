# Lista de Compras — C++ y Python

Unidad 1, Tema 1 de Estructuras de Datos: fundamentos. El mismo problema resuelto con la misma lógica en dos lenguajes, para comparar cómo cada uno maneja una estructura dinámica.

## El problema

Una lista de compras de supermercado que admite el ingreso de al menos tres productos, muestra el contenido almacenado y permite dos operaciones sobre la estructura: agregar un producto nuevo y eliminar uno por su posición.

## Las dos versiones

| Archivo | Lenguaje | Estructura |
| --- | --- | --- |
| `Listadecomprasdelsupermercado.py` | Python | Lista nativa con `append` y `pop` |
| `ListaDeComprasDelSupermercado.cpp` | C++ | Estructura equivalente con la misma secuencia de operaciones |

La versión en Python valida que el índice a eliminar esté dentro del rango y captura la excepción cuando el usuario escribe algo que no es un número.

## Ejecución

Python:

```
python Listadecomprasdelsupermercado.py
```

C++:

```
g++ ListaDeComprasDelSupermercado.cpp -o lista
./lista
```

---

**Paúl Andrés Guerra Vicuña** · Estructuras de Datos · Ingeniería en Ciencias de Datos e Inteligencia Artificial · Universidad Nacional de Chimborazo (UNACH)
