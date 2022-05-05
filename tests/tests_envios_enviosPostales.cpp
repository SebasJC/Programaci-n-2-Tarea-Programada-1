#include <gtest/gtest.h>
#include "../src/envioPostal.h"

namespace
{
    TEST(Test_Envios_EnviosPostales, Test_De0A3PrimeraClase)
    {

        EnvioPostal envio(0, 2, "primera");

        float actual = envio.CalculoPago();
        float esperada = 0.300;

        EXPECT_EQ(esperada, actual);
    }
}