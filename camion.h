#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include "almacen.h"
using namespace std;

class Camion : public Almacen {
    public:
    Camion(double cap) : Almacen(cap) {}

    string const nombre() const {
        return "Camion";
    }

    double volumen() const {
        return capacidad;
    }
    double peso() const {
        return peso_almacen;
    }   
};

inline ostream& operator<<(ostream& os, const Camion& c) {
    os << c.nombre() << fixed << setprecision(1) << " [" << c.volumen() << "m3] [" << c.peso() << "kg]\n";
    for (const auto& item : c.obtenerContenido()) {
        item->imprimir(os, "  ");
        os << "\n";
    }
    return os;
}