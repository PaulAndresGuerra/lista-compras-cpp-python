# Lista de compras - Estructura dinámica
compras = []

print("=== LISTA DE COMPRAS DEL SUPERMERCADO ===")
print("Ingrese al menos 3 productos:\n")

# Ingreso mínimo de 3 datos
for i in range(3):
    producto = input(f"Producto {i+1}: ").strip()
    compras.append(producto)

# Mostrar datos almacenados
print("\nLista de compras actual:")
for idx, prod in enumerate(compras, 1):
    print(f"{idx}. {prod}")

# Operación 1: Agregar un producto
nuevo = input("\nIngrese un nuevo producto a agregar: ").strip()
compras.append(nuevo)
print("\nLista después de agregar el producto:")
for idx, prod in enumerate(compras, 1):
    print(f"{idx}. {prod}")

# Operación 2: Eliminar un producto por índice
try:
    elim = int(input("\nIngrese el número del producto que desea eliminar: ")) - 1
    if 0 <= elim < len(compras):
        eliminado = compras.pop(elim)
        print(f"\nProducto eliminado: {eliminado}")
    else:
        print("Índice fuera de rango.")
except ValueError:
    print("Debe ingresar un número válido.")

# Lista final
print("\nLista final de compras:")
for idx, prod in enumerate(compras, 1):
    print(f"{idx}. {prod}")