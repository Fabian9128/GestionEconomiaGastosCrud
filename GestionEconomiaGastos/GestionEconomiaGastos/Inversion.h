#pragma once

namespace GestionEconomiaGastos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inversion
	/// </summary>
	public ref class Inversion : public System::Windows::Forms::Form
	{
	public:
		Inversion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Inversion()
		{
			if (components)
			{
				delete components;
			}
		}

		void leerInversion(System::Windows::Forms::TextBox^ textBox);

	private: System::Windows::Forms::Button^ btn_mostrar_inversion;
	private: System::Windows::Forms::TextBox^ textBox_inversion;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

		void calcularPorcentaje(float valor_inicial, float valor_actual);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_mostrar_inversion = (gcnew System::Windows::Forms::Button());
			this->textBox_inversion = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_mostrar_inversion
			// 
			this->btn_mostrar_inversion->Location = System::Drawing::Point(31, 196);
			this->btn_mostrar_inversion->Name = L"btn_mostrar_inversion";
			this->btn_mostrar_inversion->Size = System::Drawing::Size(129, 49);
			this->btn_mostrar_inversion->TabIndex = 0;
			this->btn_mostrar_inversion->Text = L"Mostrar";
			this->btn_mostrar_inversion->UseVisualStyleBackColor = true;
			this->btn_mostrar_inversion->Click += gcnew System::EventHandler(this, &Inversion::btn_mostrar_inversion_Click);
			// 
			// textBox_inversion
			// 
			this->textBox_inversion->Location = System::Drawing::Point(197, 12);
			this->textBox_inversion->Multiline = true;
			this->textBox_inversion->Name = L"textBox_inversion";
			this->textBox_inversion->Size = System::Drawing::Size(730, 430);
			this->textBox_inversion->TabIndex = 1;
			// 
			// Inversion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(939, 454);
			this->Controls->Add(this->textBox_inversion);
			this->Controls->Add(this->btn_mostrar_inversion);
			this->Name = L"Inversion";
			this->Text = L"Inversion";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void btn_mostrar_inversion_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			leerInversion(textBox_inversion);
		}
	};
}
