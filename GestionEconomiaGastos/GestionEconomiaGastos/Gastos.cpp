#include "pch.h"
#include "Gastos.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

void GestionEconomiaGastos::Gastos::mostrarBalance(System::Windows::Forms::TextBox^ textBox, float valor_primero, float valor_segundo)
{
    if ((valor_segundo != 0 && valor_primero > valor_segundo) || (valor_segundo == 0 && valor_primero < 0))
    {
        textBox->BackColor = System::Drawing::Color::Red;
    }
    else
    {
        textBox->BackColor = System::Drawing::Color::Green;
    }

    textBox->ForeColor = System::Drawing::Color::White;
}

void GestionEconomiaGastos::Gastos::leerGastos()
{
    std::ifstream entrada_gastos;

    float gasto;
    float salario = 1990;
    float gasto_fijo_max = salario * 0.5;
    float gasto_fijo_mensual;
    float gasto_supermercado_mensual;
    float gasto_fijo_total;
    float gasto_ocio_max = salario * 0.2;
    float gasto_ocio_mensual;
    float gasto_apuestas;
    float ahorro_fijo;
    float ahorro_ocio;
    float ahorro_total;
    float ahorro_estipulado = salario * 0.3;

    std::vector<float> gastos;
    std::string linea;

    // Leer el archivo gastos
    entrada_gastos.open("gastos.txt");

    if (entrada_gastos.good())
    {
        // Leer cada línea del archivo
        while (getline(entrada_gastos, linea))
        {
            // Convertir el string a float
            gasto = atof(linea.c_str());
            // Si es un valor válido, agregarlo al vector
            if (gasto != 0)
            {
                gastos.push_back(gasto);
            }
        }
    }
    else
    {
        System::Windows::Forms::MessageBox::Show(
            "No se pudo abrir el archivo de gastos.",
            "Error",
            System::Windows::Forms::MessageBoxButtons::OK,
            System::Windows::Forms::MessageBoxIcon::Error
        );
    }

    // Calcular los gastos teóricos mensuales
    textBox_salario->AppendText(salario.ToString() + " €");
    textBox_fijo_teorico->AppendText(gasto_fijo_max.ToString() + " €");
    textBox_ocio_teorico->AppendText(gasto_ocio_max.ToString() + " €");
    textBox_ahorro_teorico->AppendText((salario - gasto_fijo_max - gasto_ocio_max).ToString() + " €");

    // Extraer los datos de los gastos
    gasto_fijo_mensual = gastos[0];
    gasto_supermercado_mensual = gastos[1];
    gasto_fijo_total = gasto_fijo_mensual + gasto_supermercado_mensual;
    textBox_fijo_mensual->AppendText(gasto_fijo_mensual.ToString() + " €");
    textBox_supermercado_mensual->AppendText(gasto_supermercado_mensual.ToString() + " €");
    textBox_fijo_mensual_total->AppendText(gasto_fijo_total.ToString() + " €");

    // Comparar con el gasto máximo permitido
    ahorro_fijo = gasto_fijo_max - gasto_fijo_total;
    textBox_balance_fijo_mensual->AppendText(ahorro_fijo.ToString() + " €");
    mostrarBalance(textBox_balance_fijo_mensual, gasto_fijo_total, gasto_fijo_max);

    // Extraer los gastos de ocio
    gasto_ocio_mensual = gastos[2];
    textBox_ocio_mensual->AppendText(gasto_ocio_mensual.ToString() + " €");

    // Comparar con el gasto máximo de ocio
    ahorro_ocio = gasto_ocio_max - gasto_ocio_mensual;
    textBox_balance_ocio_mensual->AppendText(ahorro_ocio.ToString() + " €");
    mostrarBalance(textBox_balance_ocio_mensual, gasto_ocio_mensual, gasto_ocio_max);

    // Gasto Apuestas
    gasto_apuestas = gastos[3];
    textBox_balance_apuestas_mensual->AppendText(gasto_apuestas.ToString() + " €");
    mostrarBalance(textBox_balance_apuestas_mensual, gasto_apuestas, 0);

    // Calcular el ahorro total
    ahorro_total = ahorro_fijo + ahorro_ocio + gasto_apuestas + ahorro_estipulado;
    textBox_balance_total_mensual->AppendText(ahorro_total.ToString() + " €");
    mostrarBalance(textBox_balance_total_mensual, ahorro_total, 0);

    entrada_gastos.close();
}
