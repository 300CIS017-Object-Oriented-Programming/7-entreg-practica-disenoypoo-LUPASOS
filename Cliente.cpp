//
// Created by lupia on 16/10/2025.
//

#include "Cliente.h"

Cliente::Cliente() {}
Cliente::Cliente(string nombre, string id) : nombre(nombre), id(id) {}
Cliente::~Cliente() {}

string Cliente::getNombre() const { return nombre; }
string Cliente::getId() const { return id; }
