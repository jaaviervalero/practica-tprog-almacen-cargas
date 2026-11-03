#pragma once
#include "cargaEstandar.h"

class Producto : public CargaEstandar {
public:
    Producto(const string& n, double v, double p) : CargaEstandar(n, v, p) {}

};
