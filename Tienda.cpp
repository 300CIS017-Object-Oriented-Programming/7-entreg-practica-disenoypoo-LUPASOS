//
// Created by lupia on 16/10/2025.
//

#include "Tienda.h"
#include <iostream>

using namespace std;

Tienda::Tienda() {}

Tienda::~Tienda() {
    for (auto p : productos) delete p;
    for (auto c : clientes) delete c;
    for (auto v : ventas) delete v;
}

void Tienda::registrarProducto() {
    string codigo, nombre;
    float precio;
    int cantidad;

    cout << "\n--- REGISTRAR PRODUCTO ---\n";
    cout << "Codigo: "; getline(cin, codigo);
    cout << "Nombre: "; getline(cin, nombre);
    cout << "Precio: "; cin >> precio;
    cout << "Cantidad inicial: "; cin >> cantidad;
    cin.ignore();

    productos.push_back(new Producto(codigo, nombre, precio, cantidad));
    cout << " Producto registrado correctamente.\n";
}

void Tienda::registrarCliente() {
    string nombre, id;
    cout << "\n--- REGISTRAR CLIENTE ---\n";
    cout << "Nombre: "; getline(cin, nombre);
    cout << "ID: "; getline(cin, id);
    clientes.push_back(new Cliente(nombre, id));
    cout << " Cliente registrado correctamente.\n";
}

void Tienda::registrarVenta() {
    string idCliente, codigoProducto;
    int cantidad;

    cout << "\n--- REGISTRAR VENTA ---\n";
    cout << "ID del cliente: "; getline(cin, idCliente);

    Cliente* clienteEncontrado = nullptr;
    for (auto c : clientes) {
        if (c->getId() == idCliente) {
            clienteEncontrado = c;
            break;
        }
    }

    if (!clienteEncontrado) {
        cout << "Cliente no encontrado.\n";
        return;
    }

    cout << "Codigo del producto: "; getline(cin, codigoProducto);
    Producto* productoEncontrado = nullptr;
    for (auto p : productos) {
        if (p->getCodigo() == codigoProducto) {
            productoEncontrado = p;
            break;
        }
    }

    if (!productoEncontrado) {
        cout << " Producto no encontrado.\n";
        return;
    }

    cout << "Cantidad a comprar: ";
    cin >> cantidad;
    cin.ignore();

    if (productoEncontrado->getCantidad() < cantidad) {
        cout << " No hay suficiente stock disponible.\n";
        return;
    }

    productoEncontrado->disminuirCantidad(cantidad);
    ventas.push_back(new Venta(clienteEncontrado, productoEncontrado, cantidad));
    cout << " Venta registrada correctamente.\n";
}

void Tienda::mostrarInventario() const {
    cout << "\n--- INVENTARIO ---\n";
    for (auto p : productos) {
        p->mostrarInfo();
    }
}

void Tienda::mostrarClientes() const {
    cout << "\n--- CLIENTES ---\n";
    for (auto c : clientes) {
        cout << "Nombre: " << c->getNombre() << " | ID: " << c->getId() << endl;
    }
}

float Tienda::calcularValorInventario() const {
    float total = 0;
    for (auto p : productos) {
        total += p->getPrecio() * p->getCantidad();
    }
    return total;
}
