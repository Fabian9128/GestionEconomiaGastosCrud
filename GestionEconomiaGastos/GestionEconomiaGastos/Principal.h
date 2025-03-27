#pragma once
#include "Gastos.h"
#include "Inversion.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_seleccione;
	private: System::Windows::Forms::Button^ btn_gastos;
	private: System::Windows::Forms::Button^ btn_inversion;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_seleccione = (gcnew System::Windows::Forms::Label());
			this->btn_gastos = (gcnew System::Windows::Forms::Button());
			this->btn_inversion = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_seleccione
			// 
			this->label_seleccione->AutoSize = true;
			this->label_seleccione->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_seleccione->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_seleccione->Location = System::Drawing::Point(203, 62);
			this->label_seleccione->Name = L"label_seleccione";
			this->label_seleccione->Size = System::Drawing::Size(521, 55);
			this->label_seleccione->TabIndex = 0;
			this->label_seleccione->Text = L"Seleccione una opción:";
			this->label_seleccione->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// btn_gastos
			// 
			this->btn_gastos->BackColor = System::Drawing::Color::Yellow;
			this->btn_gastos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_gastos->Location = System::Drawing::Point(194, 262);
			this->btn_gastos->Name = L"btn_gastos";
			this->btn_gastos->Size = System::Drawing::Size(208, 70);
			this->btn_gastos->TabIndex = 1;
			this->btn_gastos->Text = L"Gastos";
			this->btn_gastos->UseVisualStyleBackColor = false;
			this->btn_gastos->Click += gcnew System::EventHandler(this, &Form1::btn_gastos_Click);
			// 
			// btn_inversion
			// 
			this->btn_inversion->BackColor = System::Drawing::Color::Yellow;
			this->btn_inversion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_inversion->Location = System::Drawing::Point(536, 265);
			this->btn_inversion->Name = L"btn_inversion";
			this->btn_inversion->Size = System::Drawing::Size(217, 65);
			this->btn_inversion->TabIndex = 2;
			this->btn_inversion->Text = L"Inversión";
			this->btn_inversion->UseVisualStyleBackColor = false;
			this->btn_inversion->Click += gcnew System::EventHandler(this, &Form1::btn_inversion_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(939, 454);
			this->Controls->Add(this->btn_inversion);
			this->Controls->Add(this->btn_gastos);
			this->Controls->Add(this->label_seleccione);
			this->Name = L"Form1";
			this->Text = L"Gastos e Inversión";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Label Seleccione
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		}
		//Botón Gastos
		private: System::Void btn_gastos_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			GestionEconomiaGastos::Gastos^ gastos = gcnew GestionEconomiaGastos::Gastos();
			this->Visible = false;
			gastos->ShowDialog();
			this->Visible = true;
		}
		//Botón Inversión
		private: System::Void btn_inversion_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			GestionEconomiaGastos::Inversion^ inversion = gcnew GestionEconomiaGastos::Inversion();
			this->Visible = false;
			inversion->ShowDialog();
			this->Visible = true;
		}
	};
}
