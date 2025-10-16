//
// Created by lupia on 16/10/2025.
//

#include "Venta.h"

Venta::Venta(Cliente* cliente, Producto* producto, int cantidad)
    : cliente(cliente), producto(producto), cantidad(cantidad) {}

Venta::~Venta() {}
