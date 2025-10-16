cmake_minimum_required(VERSION 3.19)
project(POOSistemaGestionVentas)

set(CMAKE_CXX_STANDARD 20)

add_executable(POOSistemaGestionVentas main.cpp
        Tienda.cpp
        Tienda.h
        Venta.cpp
        Venta.h
        Cliente.cpp
        Cliente.h
        Producto.cpp
        Producto.h)