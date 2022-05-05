#include <gtest/gtest.h>
#include "../src/envioPostal.h"

namespace
{
    TEST(Test_Envios_EnviosPostales, Test_De0A3PrimeraClase)
    {

        EnvioPostal envio(0, 2, "primera");

        float actual = envio.CalculoPago();
        float esperada = 0.300;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_De4A8PrimeraClase)
    {

        EnvioPostal envio(0, 6, "primera");

        float actual = envio.CalculoPago();
        float esperada = 0.450;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_9OMasPrimeraClase)
    {

        EnvioPostal envio(0, 11, "primera");

        float actual = envio.CalculoPago();
        float esperada = 0.600;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_De0A3SegundaClase)
    {

        EnvioPostal envio(0, 2, "segunda");

        float actual = envio.CalculoPago();
        float esperada = 0.0280;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_De4A8SegundaClase)
    {

        EnvioPostal envio(0, 6, "segunda");

        float actual = envio.CalculoPago();
        float esperada = 0.0530;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_9OMasSegundaClase)
    {

        EnvioPostal envio(0, 11, "segunda");

        float actual = envio.CalculoPago();
        float esperada = 0.0750;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_De0A3TerceraClase)
    {

        EnvioPostal envio(0, 2, "tercera");

        float actual = envio.CalculoPago();
        float esperada = 0.0120;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_De4A8TerceraClase)
    {

        EnvioPostal envio(0, 6, "tercera");

        float actual = envio.CalculoPago();
        float esperada = 0.0120;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_9OMasTerceraClase)
    {

        EnvioPostal envio(0, 11, "tercera");

        float actual = envio.CalculoPago();
        float esperada = 0.0120;

        EXPECT_FLOAT_EQ(esperada, actual);
    }
}