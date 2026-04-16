#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> compras;
    string producto;

    cout << "=== LISTA DE COMPRAS DEL SUPERMERCADO ===" << endl;
    cout << "Ingrese al menos 3 productos:\n" << endl;

    // Ingreso mínimo de 3 datos
    for(int i = 0; i < 3; i++) {
        cout << "Producto " << (i+1) << ": ";
        cin >> producto;
        compras.push_back(producto);
    }

    // Mostrar datos almacenados
    cout << "\nLista de compras actual:" << endl;
    for(size_t i = 0; i < compras.size(); i++) {
        cout << (i+1) << ". " << compras[i] << endl;
    }

    // Operación 1: Agregar
    cout << "\nIngrese un nuevo producto a agregar: ";
    cin >> producto;
    compras.push_back(producto);

    cout << "\nLista después de agregar el producto:" << endl;
    for(size_t i = 0; i < compras.size(); i++) {
        cout << (i+1) << ". " << compras[i] << endl;
    }

    // Operación 2: Eliminar por índice
    int elim;
    cout << "\nIngrese el número del producto que desea eliminar: ";
    cin >> elim;
    elim--;  // convertir a índice 0

    if(elim >= 0 && elim < static_cast<int>(compras.size())) {
        string eliminado = compras[elim];
        compras.erase(compras.begin() + elim);
        cout << "\nProducto eliminado: " << eliminado << endl;
    } else {
        cout << "Índice fuera de rango." << endl;
    }

    // Lista final
    cout << "\nLista final de compras:" << endl;
    for(size_t i = 0; i < compras.size(); i++) {
        cout << (i+1) << ". " << compras[i] << endl;
    }

    return 0;
}