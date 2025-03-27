#pragma once

namespace GestionEconomiaGastos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Gastos : public System::Windows::Forms::Form
	{
	public:
		// Constructor
		Gastos(void)
		{
			InitializeComponent();
		}

	protected:
		// Destructor
		~Gastos()
		{
			if (components)
			{
				delete components;
			}
		}

		void mostrarBalance(System::Windows::Forms::TextBox^ textBox, float valor_primero, float valor_segundo);
		void leerGastos();

	private:

		System::Windows::Forms::Button^ btn_mostrar_gastos;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::TextBox^ textBox_salario;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::TextBox^ textBox_fijo_teorico;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::TextBox^ textBox_ocio_teorico;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::TextBox^ textBox_ahorro_teorico;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::TextBox^ textBox_fijo_mensual;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::TextBox^ textBox_supermercado_mensual;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::TextBox^ textBox_fijo_mensual_total;
		System::Windows::Forms::Label^ label8;
		System::Windows::Forms::TextBox^ textBox_ocio_mensual;
		System::Windows::Forms::Label^ label9;
		System::Windows::Forms::TextBox^ textBox_balance_fijo_mensual;
		System::Windows::Forms::Label^ label10;
		System::Windows::Forms::TextBox^ textBox_balance_ocio_mensual;
		System::Windows::Forms::Label^ label11;
		System::Windows::Forms::TextBox^ textBox_balance_apuestas_mensual;
		System::Windows::Forms::Label^ label12;
		System::Windows::Forms::TextBox^ textBox_balance_total_mensual;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->btn_mostrar_gastos = (gcnew System::Windows::Forms::Button());
			this->textBox_salario = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_fijo_teorico = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_ocio_teorico = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_ahorro_teorico = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_fijo_mensual = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_supermercado_mensual = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox_fijo_mensual_total = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_ocio_mensual = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_balance_fijo_mensual = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox_balance_ocio_mensual = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox_balance_apuestas_mensual = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox_balance_total_mensual = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_mostrar_gastos
			// 
			this->btn_mostrar_gastos->Location = System::Drawing::Point(12, 225);
			this->btn_mostrar_gastos->Name = L"btn_mostrar_gastos";
			this->btn_mostrar_gastos->Size = System::Drawing::Size(121, 47);
			this->btn_mostrar_gastos->TabIndex = 1;
			this->btn_mostrar_gastos->Text = L"Mostrar";
			this->btn_mostrar_gastos->UseVisualStyleBackColor = true;
			this->btn_mostrar_gastos->Click += gcnew System::EventHandler(this, &Gastos::btn_mostrar_gastos_Click);
			// 
			// textBox_salario
			// 
			this->textBox_salario->Location = System::Drawing::Point(754, 12);
			this->textBox_salario->Name = L"textBox_salario";
			this->textBox_salario->ReadOnly = true;
			this->textBox_salario->Size = System::Drawing::Size(100, 26);
			this->textBox_salario->TabIndex = 2;
			this->textBox_salario->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(617, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Salario Mensual:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(280, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Gasto Fijo Teórico (50%):";
			// 
			// textBox_fijo_teorico
			// 
			this->textBox_fijo_teorico->Location = System::Drawing::Point(479, 82);
			this->textBox_fijo_teorico->Name = L"textBox_fijo_teorico";
			this->textBox_fijo_teorico->ReadOnly = true;
			this->textBox_fijo_teorico->Size = System::Drawing::Size(100, 26);
			this->textBox_fijo_teorico->TabIndex = 4;
			this->textBox_fijo_teorico->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(639, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Gasto Ocio Teórico (20%):";
			// 
			// textBox_ocio_teorico
			// 
			this->textBox_ocio_teorico->Location = System::Drawing::Point(845, 85);
			this->textBox_ocio_teorico->Name = L"textBox_ocio_teorico";
			this->textBox_ocio_teorico->ReadOnly = true;
			this->textBox_ocio_teorico->Size = System::Drawing::Size(100, 26);
			this->textBox_ocio_teorico->TabIndex = 6;
			this->textBox_ocio_teorico->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(989, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Ahorro Teórico (30%):";
			// 
			// textBox_ahorro_teorico
			// 
			this->textBox_ahorro_teorico->Location = System::Drawing::Point(1163, 79);
			this->textBox_ahorro_teorico->Name = L"textBox_ahorro_teorico";
			this->textBox_ahorro_teorico->ReadOnly = true;
			this->textBox_ahorro_teorico->Size = System::Drawing::Size(100, 26);
			this->textBox_ahorro_teorico->TabIndex = 8;
			this->textBox_ahorro_teorico->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(173, 241);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Gasto Fijo Mensual:";
			// 
			// textBox_fijo_mensual
			// 
			this->textBox_fijo_mensual->Location = System::Drawing::Point(334, 235);
			this->textBox_fijo_mensual->Name = L"textBox_fijo_mensual";
			this->textBox_fijo_mensual->ReadOnly = true;
			this->textBox_fijo_mensual->Size = System::Drawing::Size(100, 26);
			this->textBox_fijo_mensual->TabIndex = 10;
			this->textBox_fijo_mensual->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(448, 241);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(230, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Gasto Supermercado Mensual:";
			// 
			// textBox_supermercado_mensual
			// 
			this->textBox_supermercado_mensual->Location = System::Drawing::Point(689, 235);
			this->textBox_supermercado_mensual->Name = L"textBox_supermercado_mensual";
			this->textBox_supermercado_mensual->ReadOnly = true;
			this->textBox_supermercado_mensual->Size = System::Drawing::Size(100, 26);
			this->textBox_supermercado_mensual->TabIndex = 12;
			this->textBox_supermercado_mensual->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(329, 295);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(189, 20);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Gasto Fijo Mensual Total:";
			// 
			// textBox_fijo_mensual_total
			// 
			this->textBox_fijo_mensual_total->Location = System::Drawing::Point(529, 292);
			this->textBox_fijo_mensual_total->Name = L"textBox_fijo_mensual_total";
			this->textBox_fijo_mensual_total->ReadOnly = true;
			this->textBox_fijo_mensual_total->Size = System::Drawing::Size(100, 26);
			this->textBox_fijo_mensual_total->TabIndex = 14;
			this->textBox_fijo_mensual_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(945, 289);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(157, 20);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Gasto Ocio Mensual:";
			// 
			// textBox_ocio_mensual
			// 
			this->textBox_ocio_mensual->Location = System::Drawing::Point(1113, 289);
			this->textBox_ocio_mensual->Name = L"textBox_ocio_mensual";
			this->textBox_ocio_mensual->ReadOnly = true;
			this->textBox_ocio_mensual->Size = System::Drawing::Size(100, 26);
			this->textBox_ocio_mensual->TabIndex = 16;
			this->textBox_ocio_mensual->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(234, 408);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(164, 20);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Balance Fijo Mensual:";
			// 
			// textBox_balance_fijo_mensual
			// 
			this->textBox_balance_fijo_mensual->Location = System::Drawing::Point(404, 405);
			this->textBox_balance_fijo_mensual->Name = L"textBox_balance_fijo_mensual";
			this->textBox_balance_fijo_mensual->ReadOnly = true;
			this->textBox_balance_fijo_mensual->Size = System::Drawing::Size(100, 26);
			this->textBox_balance_fijo_mensual->TabIndex = 18;
			this->textBox_balance_fijo_mensual->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(532, 405);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(171, 20);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Balance Ocio Mensual:";
			// 
			// textBox_balance_ocio_mensual
			// 
			this->textBox_balance_ocio_mensual->Location = System::Drawing::Point(709, 405);
			this->textBox_balance_ocio_mensual->Name = L"textBox_balance_ocio_mensual";
			this->textBox_balance_ocio_mensual->ReadOnly = true;
			this->textBox_balance_ocio_mensual->Size = System::Drawing::Size(100, 26);
			this->textBox_balance_ocio_mensual->TabIndex = 20;
			this->textBox_balance_ocio_mensual->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(841, 405);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(207, 20);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Balance Apuestas Mensual:";
			// 
			// textBox_balance_apuestas_mensual
			// 
			this->textBox_balance_apuestas_mensual->Location = System::Drawing::Point(1052, 405);
			this->textBox_balance_apuestas_mensual->Name = L"textBox_balance_apuestas_mensual";
			this->textBox_balance_apuestas_mensual->ReadOnly = true;
			this->textBox_balance_apuestas_mensual->Size = System::Drawing::Size(100, 26);
			this->textBox_balance_apuestas_mensual->TabIndex = 22;
			this->textBox_balance_apuestas_mensual->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(240, 507);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(846, 20);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Balance Total Mensual (Balance Fijo Mensual + Balance Ocio Mensual + Balance Apue"
				L"stas Mensual + Ahorro Teórico):";
			// 
			// textBox_balance_total_mensual
			// 
			this->textBox_balance_total_mensual->Location = System::Drawing::Point(1113, 504);
			this->textBox_balance_total_mensual->Name = L"textBox_balance_total_mensual";
			this->textBox_balance_total_mensual->ReadOnly = true;
			this->textBox_balance_total_mensual->Size = System::Drawing::Size(100, 26);
			this->textBox_balance_total_mensual->TabIndex = 24;
			this->textBox_balance_total_mensual->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label13->Location = System::Drawing::Point(139, 1);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(10, 540);
			this->label13->TabIndex = 26;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label14->Location = System::Drawing::Point(139, 477);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(1212, 12);
			this->label14->TabIndex = 27;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label15->Location = System::Drawing::Point(139, 355);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(1212, 12);
			this->label15->TabIndex = 28;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label16->Location = System::Drawing::Point(139, 155);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(1212, 12);
			this->label16->TabIndex = 29;
			// 
			// Gastos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(1353, 542);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox_balance_total_mensual);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox_balance_apuestas_mensual);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox_balance_ocio_mensual);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox_balance_fijo_mensual);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox_ocio_mensual);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox_fijo_mensual_total);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox_supermercado_mensual);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_fijo_mensual);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_ahorro_teorico);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_ocio_teorico);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_fijo_teorico);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_salario);
			this->Controls->Add(this->btn_mostrar_gastos);
			this->Name = L"Gastos";
			this->Text = L"Gastos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Botón Mostrar
		private: System::Void btn_mostrar_gastos_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			leerGastos();
		}
	};
}
