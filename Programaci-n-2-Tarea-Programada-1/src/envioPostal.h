#ifndef ENVIOPOSTAL_H
#define ENVIOPOSTAL_H

#include "tipoEnvio.h"

using namespace std;

class EnvioPostal : public TipoEnvio {

    string clase;
    float costoPorKilometraje;
    int kilometros;

    public:
    EnvioPostal(float costoPorKilometraje, int kilometros, string clase);

    virtual float CalculoPago(); 
    virtual string ObtenerClase();
    int ObtenerKilometros();
};

#endif