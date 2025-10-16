//
// Created by lupia on 16/10/2025.
//

#ifndef TIENDA_H
#define TIENDA_H

#include <vector>
#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"

class Tienda {
private:
    std::vector<Producto*> productos;
    std::vector<Cliente*> clientes;
    std::vector<Venta*> ventas;

public:
    Tienda();
    ~Tienda();

    void registrarProducto();
    void registrarCliente();
    void registrarVenta();
    void mostrarInventario() const;
    void mostrarClientes() const;
    float calcularValorInventario() const;
};

#endif
