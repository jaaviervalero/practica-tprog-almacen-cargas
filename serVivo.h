#pragma once
#include "carga.h"

class SerVivo : public Carga {
public:
    SerVivo(const string& n, double v, double p) : Carga(n, v, p) {}
    static string categoria() {
        return "Seres Vivos";
    }
};
