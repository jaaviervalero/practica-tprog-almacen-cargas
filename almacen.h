#pragma once
#include <list>
#include "carga.h"
using namespace std;

class Almacen {
    protected:
        vector<Carga*> contenido;
        double volumen_ocupado;
        double capacidad;
        double peso_almacen;

    public:
        Almacen(double cap) : volumen_ocupado(0), capacidad(cap), peso_almacen(0) {}

        bool guardar(Carga* item){
            if (volumen_ocupado + item->volumen() > capacidad) {
            return false;
            }
            contenido.push_back(item);
            volumen_ocupado += item->volumen();
            peso_almacen += item->peso();
            return true;
        };

        virtual double peso() const {
            return peso_almacen;
        };
        
        virtual double volumen() const {
            return capacidad;
        };


        const vector<Carga*>& obtenerContenido() const {
            return contenido;
        }

};
 