#ifndef TIPOENVIO_H
#define TIPOENVIO_H

#include <string>

using namespace std;

class TipoEnvio {

    protected:
    string tipo;

    public:
    virtual float CalculoPago() = 0;
    virtual string ObtenerTipo();

};

#endif