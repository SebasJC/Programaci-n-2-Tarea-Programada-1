#include "envioFedEx.h"

using namespace std;

EnvioFedEx::EnvioFedEx(float costo, int kilometros, float peso)
{
    this->kilometros = kilometros;
    this->peso = peso;
}

float EnvioFedEx::CalculoPago()
{
    this->costo = 35.00;
    if (this->kilometros > 500)
    {
        this->costo = this->costo + 15.00;
    }
    
    if (this->peso > 10)
    {
        this->costo = this->costo + 10.00;
    }

    return this->costo;
    
}

float EnvioFedEx::ObtenerPeso() {
    return this->peso;
}

int EnvioFedEx::ObtenerKilometros() {
    return this->kilometros;
}