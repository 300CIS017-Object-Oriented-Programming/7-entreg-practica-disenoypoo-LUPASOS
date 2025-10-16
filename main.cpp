#include <iostream>
#include "Tienda.h"

using namespace std;

int main() {
    Tienda tienda;
    int opcion;

    do {
        cout << "  SISTEMA DE GESTION DE VENTAS E INVENTARIO \n";

        cout << "1. Registrar producto\n";
        cout << "2. Registrar cliente\n";
        cout << "3. Registrar venta\n";
        cout << "4. Mostrar inventario\n";
        cout << "5. Mostrar clientes\n";
        cout << "6. Calcular valor total del inventario\n";
        cout << "0. Salir\n";
        cout << "---------------------------------------------\n";
        cout << "Seleccione una opcion:  ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                tienda.registrarProducto();
                break;
            case 2:
                tienda.registrarCliente();
                break;
            case 3:
                tienda.registrarVenta();
                break;
            case 4:
                tienda.mostrarInventario();
                break;
            case 5:
                tienda.mostrarClientes();
                break;
            case 6:
                cout << "Valor total del inventario: $" << tienda.calcularValorInventario() << endl;
                break;
            case 0:
                cout << "\nSaliendo del sistema... Gracias por usarlo.\n";
                break;
            default:
                cout << "\nOpcion incorrecta, intente de nuevo.\n";
                break;
        }

    } while (opcion != 0);

    return 0;
}
