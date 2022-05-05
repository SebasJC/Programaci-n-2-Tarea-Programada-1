#include <gtest/gtest.h>
#include "../src/envioFedEx.h"

namespace
{
    TEST(Test_Envios_EnviosFedEx, Test_MasDe500MasDe10)
    {

        EnvioFedEx envio(0, 510, 20);

        float actual = envio.CalculoPago();
        float esperada = 60;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosFedEx, Test_MenosDe500MenosDe10)
    {

        EnvioFedEx envio(0, 200, 5);

        float actual = envio.CalculoPago();
        float esperada = 35;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosFedEx, Test_MasDe500MenosDe10)
    {

        EnvioFedEx envio(0, 510, 5);

        float actual = envio.CalculoPago();
        float esperada = 50;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_Envios_EnviosFedEx, Test_MenosDe500MasDe10)
    {

        EnvioFedEx envio(0, 300, 20);

        float actual = envio.CalculoPago();
        float esperada = 45;

        EXPECT_FLOAT_EQ(esperada, actual);
    }

}