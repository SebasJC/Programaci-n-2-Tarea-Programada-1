#include "tipoEnvio.h"
#include "envioPostal.h"
#include "envioFedEx.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {

    vector<TipoEnvio *> envios;

    EnvioPostal* envio1 = new EnvioPostal(0, 2, "primera");
    envios.push_back(envio1);

    EnvioFedEx* envio2 = new EnvioFedEx(3, 0, 15);
    envios.push_back(envio2);


    //Falta terminar
    for (Empleado* empleado : empleados)
    {
        std::cout << empleado->ObtenerNombre() 
                  << ": " 
                  << empleado->CalculoPago() 
                  << std::endl;
    }

    delete empleado1;
    delete empleado2;

}