#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include "tipoEnvio.h"

using namespace std;

class EnvioFedEx : public TipoEnvio {

    float peso;
    float costo;
    int kilometros;

    public:
    EnvioFedEx(float costo, int kilometros, float peso);

    virtual float CalculoPago(); 
    virtual float ObtenerPeso();
    int ObtenerKilometros();
};

#endif