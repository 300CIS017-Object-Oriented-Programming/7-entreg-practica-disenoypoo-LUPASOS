//
// Created by lupia on 16/10/2025.
//

#ifndef POOSISTEMAGESTIONVENTAS_VENTA_H
#define POOSISTEMAGESTIONVENTAS_VENTA_H


#include "Cliente.h"
#include "Producto.h"

class Venta {
private:
    Cliente* cliente;
    Producto* producto;
    int cantidad;

public:
    Venta(Cliente* cliente, Producto* producto, int cantidad);
    ~Venta();
};

#endif
