#pragma once
#include "cargaEstandar.h"
#include "almacen.h"
#include <iostream>
using namespace std;

template <typename T>
class Contenedor : public CargaEstandar, public Almacen {
    public:
    Contenedor(double cap) : CargaEstandar("Contenedor", cap, 0), Almacen(cap) {}

    double peso() const override {
        return Almacen::peso();
    }
    double volumen() const override {
        return Almacen::volumen();
    }

    bool guardar(T* item)  {
        if (Almacen::guardar(item)) {
            return true;
        }
        return false;
    }

    void imprimir(ostream& os, const string& espacios = "") const override {
        os << espacios << "Contenedor de " + T::categoria()
        << fixed << setprecision(1) << " [" << volumen() << "m3] [" << peso() << "kg]\n";
        
        for (const auto& item : this->obtenerContenido()) {
            item->imprimir(os, espacios + "  ");
            os << "\n";
        }
    }
};

template <typename T>
ostream& operator<<(ostream& os, const Contenedor<T>& c) {
    os << "Contendor de "<< c.nombre() << " [" << c.volumen() << "m3]  [" << c.peso() << "kg]" << endl;
    for (const auto& item : c.obtenerContenido()) {
        os << "  " << *item << endl;
    }
    return os;
}