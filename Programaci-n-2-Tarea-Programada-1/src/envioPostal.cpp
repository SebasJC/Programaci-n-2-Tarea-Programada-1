#include "envioPostal.h"

using namespace std;

EnvioPostal::EnvioPostal(float costoPorKilometraje, int kilometros, string clase)
{
    this->kilometros = kilometros;
    this->clase = clase;
}

float EnvioPostal::CalculoPago()
{
    if (this->clase == "primera")
    {
        if (this->kilometros > 0 && this->kilometros <= 3)
        {
            this->costoPorKilometraje = 0.300;
            return this->costoPorKilometraje;
        }
    }
    
}

string EnvioPostal::ObtenerClase() {
    return "Empleado por horas: " + this->clase;
}

int EnvioPostal::ObtenerKilometros() {
    return this->kilometros;
}