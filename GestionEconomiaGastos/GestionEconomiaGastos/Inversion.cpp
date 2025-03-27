#include "pch.h"
#include "Inversion.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>

void GestionEconomiaGastos::Inversion::calcularPorcentaje(float valor_inicial, float valor_actual)
{
    float porcentaje = ((valor_actual - valor_inicial) / valor_inicial) * 100;
    // Fijar dos decimales
    std::cout << std::fixed << std::setprecision(2);

    textBox_inversion->AppendText("La acción fue comprada en: " + valor_inicial + " euros y está en: " + valor_actual + " euros, por lo que hay una variación porcentual de: " + porcentaje + " %" + Environment::NewLine);
    // Ver si hay que vender o no   
    if (porcentaje > -7 && porcentaje < 25)
    {
        textBox_inversion->AppendText("La acción está dentro del rango estipulado, por lo que hay que MANTENER." + Environment::NewLine);
    }
    else
    {
        textBox_inversion->AppendText("La acción está FUERA del rango estipulado, por lo que hay que VENDER." + Environment::NewLine);
    }
}

void GestionEconomiaGastos::Inversion::leerInversion(System::Windows::Forms::TextBox^ textBox)
{
    std::ifstream entrada_inversion;

    float inversion;
    float inversion_cartera = 3064.8;
    float inversion_sp500 = 1601.24;
    float inversion_airbus = 170.94;
    float inversion_nestle = 92.11;
    float inversion_bnp = 77.61;
    float porcentaje;

    std::vector<float> inversiones;
    std::string linea;

    // Leer el archivo inversiones
    entrada_inversion.open("inversion.txt");

    if (entrada_inversion.good())
    {
        // Leer cada línea del archivo
        while (getline(entrada_inversion, linea))
        {
            // Convertir el string a float
            inversion = atof(linea.c_str());
            // Ver si es un valor válido
            if (inversion != 0)
            {
                // Guardar en el vector
                inversiones.push_back(inversion);
            }
        }
    }
    else
    {
        textBox->AppendText("No se pudo abrir el archivo de inversiones." + Environment::NewLine);
    }

    // Calcular los porcentajes
    textBox->AppendText("Cartera" + Environment::NewLine);
    calcularPorcentaje(inversion_cartera, inversiones[0]);

    textBox->AppendText("S&P 500" + Environment::NewLine);
    calcularPorcentaje(inversion_sp500, inversiones[1]);

    textBox->AppendText("Airbus" + Environment::NewLine);
    calcularPorcentaje(inversion_airbus, inversiones[2]);

    textBox->AppendText("Nestle" + Environment::NewLine);
    calcularPorcentaje(inversion_nestle, inversiones[3]);

    textBox->AppendText("Bnp Paribas" + Environment::NewLine);
    calcularPorcentaje(inversion_bnp, inversiones[4]);

    entrada_inversion.close();
}
