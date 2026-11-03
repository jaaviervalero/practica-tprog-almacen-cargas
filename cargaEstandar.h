#pragma once
#include "carga.h"

class CargaEstandar : public Carga {
public:
    CargaEstandar(const string& n, double v, double p) : Carga(n, v, p) {}

};
