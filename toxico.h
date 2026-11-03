#pragma once
#include "carga.h"

class Toxico : public Carga {
public:
    Toxico(const string& n, double v, double p) : Carga(n, v, p) {}
    static string categoria() {
        return "Productos Toxicos";
    }
};
