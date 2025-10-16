//
// Created by lupia on 16/10/2025.
//

#ifndef POOSISTEMAGESTIONVENTAS_CLIENTE_H
#define POOSISTEMAGESTIONVENTAS_CLIENTE_H


#include <string>
#include <vector>
using namespace std;

class Cliente {
private:
    string nombre;
    string id;

public:
    Cliente();
    Cliente(string nombre, string id);
    ~Cliente();

    string getNombre() const;
    string getId() const;
};

#endif
