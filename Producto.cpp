//
// Created by lupia on 16/10/2025.
//

#include "Producto.h"
#include <iostream>

using namespace std;

Producto::Producto() {}

Producto::Producto(string codigo, string nombre, float precio, int cantidad)
    : codigo(codigo), nombre(nombre), precio(precio), cantidad(cantidad) {}

Producto::~Producto() {}

string Producto::getCodigo() const { return codigo; }
string Producto::getNombre() const { return nombre; }
float Producto::getPrecio() const { return precio; }
int Producto::getCantidad() const { return cantidad; }

void Producto::disminuirCantidad(int cant) {
    if (cantidad >= cant) cantidad -= cant;
}

void Producto::mostrarInfo() const {
    cout << "Codigo: " << codigo
         << "  Nombre: " << nombre
         << "  Precio: $" << precio
         << "  Cantidad: " << cantidad << endl;
}

