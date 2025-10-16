//
// Created by lupia on 16/10/2025.
//

#ifndef POOSISTEMAGESTIONVENTAS_PRODUCTO_H
#define POOSISTEMAGESTIONVENTAS_PRODUCTO_H


#include <string>
using namespace std;

class Producto {
private:
    string codigo;
    string nombre;
    float precio;
    int cantidad;

public:
    Producto();
    Producto(string codigo, string nombre, float precio, int cantidad);
    ~Producto();

    string getCodigo() const;
    string getNombre() const;
    float getPrecio() const;
    int getCantidad() const;

    void disminuirCantidad(int cant);
    void mostrarInfo() const;
};

#endif
