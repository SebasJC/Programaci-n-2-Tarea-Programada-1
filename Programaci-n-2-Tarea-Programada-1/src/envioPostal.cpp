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
        if (this->kilometros >= 0 && this->kilometros <= 3)
        {
            this->costoPorKilometraje = 0.300;
            return this->costoPorKilometraje;
        }
        else
        {
            if (this->kilometros >= 4 && this->kilometros <= 8)
            {
                this->costoPorKilometraje = 0.450;
                return this->costoPorKilometraje;
            }
            else
            {
                if (this->kilometros > 0 && this->kilometros <= 3)
                {
                    this->costoPorKilometraje = 0.600;
                    return this->costoPorKilometraje;
                }
            }
            
        }
        
    }

    if (this->clase == "segunda")
    {
        if (this->kilometros >= 0 && this->kilometros <= 3)
        {
            this->costoPorKilometraje = 0.0280;
            return this->costoPorKilometraje;
        }
        else
        {
            if (this->kilometros >= 4 && this->kilometros <= 8)
            {
                this->costoPorKilometraje = 0.0530;
                return this->costoPorKilometraje;
            }
            else
            {
                if (this->kilometros > 0 && this->kilometros <= 3)
                {
                    this->costoPorKilometraje = 0.0750;
                    return this->costoPorKilometraje;
                }
            }
            
        }
        
    }

    if (this->clase == "tercera")
    {
        this->costoPorKilometraje = 0.0120;
        return this->costoPorKilometraje;
    }
    
    
    
    
}

string EnvioPostal::ObtenerClase() {
    return "Empleado por horas: " + this->clase;
}

int EnvioPostal::ObtenerKilometros() {
    return this->kilometros;
}