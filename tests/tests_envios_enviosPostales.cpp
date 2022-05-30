#include <gtest/gtest.h>
#include "../src/envioPostal.h"

namespace
{
    TEST(Test_Envios_EnviosPostales, Test_De0A3PrimeraClase)
    {

        EnvioPostal envio(0, 2, "primera");

        float actual = envio.CalculoPago();
        float esperada = 0.600;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_De4A8PrimeraClase)
    {

        EnvioPostal envio(0, 6, "primera");

        float actual = envio.CalculoPago();
        float esperada = 2.700;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_9OMasPrimeraClase)
    {

        EnvioPostal envio(0, 11, "primera");

        float actual = envio.CalculoPago();
        float esperada = 6.600;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_De0A3SegundaClase)
    {

        EnvioPostal envio(0, 2, "segunda");

        float actual = envio.CalculoPago();
        float esperada = 0.600;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_De4A8SegundaClase)
    {

        EnvioPostal envio(0, 6, "segunda");

        float actual = envio.CalculoPago();
        float esperada = 3.180;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_9OMasSegundaClase)
    {

        EnvioPostal envio(0, 11, "segunda");

        float actual = envio.CalculoPago();
        float esperada = 8.2500;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_De0A3TerceraClase)
    {

        EnvioPostal envio(0, 2, "tercera");

        float actual = envio.CalculoPago();
        float esperada = 0.0240;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_De4A8TerceraClase)
    {

        EnvioPostal envio(0, 6, "tercera");

        float actual = envio.CalculoPago();
        float esperada = 0.0720;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosPostales, Test_9OMasTerceraClase)
    {

        EnvioPostal envio(0, 11, "tercera");

        float actual = envio.CalculoPago();
        float esperada = 0.0132;

        EXPECT_FLOAT_EQ(esperada, actual);
    }
}