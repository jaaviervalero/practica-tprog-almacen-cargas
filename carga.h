#pragma once
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;



class Carga {
    protected:
        string _nombre;
        double _volumen;
        double _peso;

    public:
        Carga(const string& n, double v, double p) : _nombre(n), _volumen(v), _peso(p) {}
        virtual double volumen() const {
            return _volumen;
        };
        virtual double peso() const {
            return _peso;
        };
        virtual string nombre() const {
            return _nombre;
        };

        virtual void imprimir(ostream& os, const string& espacios= "") const {
            os << espacios << nombre() 
            << fixed << setprecision(1) << " [" << volumen() << "m3] [" << peso() << "kg]";
        }

        static  string categoria() { return "Carga Estandar"; }

};

ostream& operator<<(ostream& os, const Carga& c) {
    c.imprimir(os);
    return os;
}