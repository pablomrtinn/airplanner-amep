#pragma once
#include "FormEsborraAeroport.h"
#include "FormEsborraAerolinia.h"
#include "FormModificarAerolinia.h"
#include "FormModificaAeroport1.h"
#include "FormConsultarAerolinia.h"
#include "FormConsultarAeroport.h"
#include "FormRegistrarAeroport.h"
#include "FormRegistrarAerolinia.h"
#include "CapaDePresentacio.h"
#include <Windows.h>
#include "Launcher.h"

namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FormAdministradorIniciat : public System::Windows::Forms::Form
	{
	public:
		FormAdministradorIniciat(void)
		{
			
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
			
		}

	protected:
		~FormAdministradorIniciat()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonEsborraAerolinia;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ buttonNovaOpcio1;
	private: System::Windows::Forms::Button^ buttonNovaOpcio2;
	private: System::Windows::Forms::Button^ buttonTancaSessio;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAdministradorIniciat::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonEsborraAerolinia = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->buttonNovaOpcio1 = (gcnew System::Windows::Forms::Button());
			this->buttonNovaOpcio2 = (gcnew System::Windows::Forms::Button());
			this->buttonTancaSessio = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tomato;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(28, 349);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(391, 64);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Esborrar Aeroport";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormAdministradorIniciat::button1_Click);
			// 
			// buttonEsborraAerolinia
			// 
			this->buttonEsborraAerolinia->BackColor = System::Drawing::Color::Tomato;
			this->buttonEsborraAerolinia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonEsborraAerolinia->Location = System::Drawing::Point(43, 349);
			this->buttonEsborraAerolinia->Name = L"buttonEsborraAerolinia";
			this->buttonEsborraAerolinia->Size = System::Drawing::Size(368, 64);
			this->buttonEsborraAerolinia->TabIndex = 8;
			this->buttonEsborraAerolinia->Text = L"Esborrar Aerolínia";
			this->buttonEsborraAerolinia->UseVisualStyleBackColor = false;
			this->buttonEsborraAerolinia->Click += gcnew System::EventHandler(this, &FormAdministradorIniciat::buttonEsborraAerolinia_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(43, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(368, 68);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Modificar Aerolínia";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormAdministradorIniciat::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(28, 152);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(391, 68);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Modificar Aeroport";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormAdministradorIniciat::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(43, 252);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(368, 65);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Consultar Aerolínia";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FormAdministradorIniciat::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(28, 252);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(391, 65);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Consultar Aeroport";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &FormAdministradorIniciat::button5_Click);
			// 
			// buttonNovaOpcio1
			// 
			this->buttonNovaOpcio1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNovaOpcio1->Location = System::Drawing::Point(43, 60);
			this->buttonNovaOpcio1->Name = L"buttonNovaOpcio1";
			this->buttonNovaOpcio1->Size = System::Drawing::Size(368, 59);
			this->buttonNovaOpcio1->TabIndex = 2;
			this->buttonNovaOpcio1->Text = L"Registrar Aerolínia";
			this->buttonNovaOpcio1->UseVisualStyleBackColor = true;
			this->buttonNovaOpcio1->Click += gcnew System::EventHandler(this, &FormAdministradorIniciat::buttonNovaOpcio1_Click);
			// 
			// buttonNovaOpcio2
			// 
			this->buttonNovaOpcio2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNovaOpcio2->Location = System::Drawing::Point(28, 60);
			this->buttonNovaOpcio2->Name = L"buttonNovaOpcio2";
			this->buttonNovaOpcio2->Size = System::Drawing::Size(391, 59);
			this->buttonNovaOpcio2->TabIndex = 1;
			this->buttonNovaOpcio2->Text = L"Registrar Aeroport";
			this->buttonNovaOpcio2->UseVisualStyleBackColor = true;
			this->buttonNovaOpcio2->Click += gcnew System::EventHandler(this, &FormAdministradorIniciat::buttonNovaOpcio2_Click);
			// 
			// buttonTancaSessio
			// 
			this->buttonTancaSessio->BackColor = System::Drawing::Color::Salmon;
			this->buttonTancaSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTancaSessio->Location = System::Drawing::Point(113, 912);
			this->buttonTancaSessio->Name = L"buttonTancaSessio";
			this->buttonTancaSessio->Size = System::Drawing::Size(323, 66);
			this->buttonTancaSessio->TabIndex = 0;
			this->buttonTancaSessio->Text = L"Tanca Sessió";
			this->buttonTancaSessio->UseVisualStyleBackColor = false;
			this->buttonTancaSessio->Click += gcnew System::EventHandler(this, &FormAdministradorIniciat::buttonTancaSessio_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(96, 123);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1724, 97);
			this->label1->TabIndex = 9;
			this->label1->Text = L"SESSIÓ INICIADA COM ADMINISTRADOR";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->buttonNovaOpcio1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->buttonEsborraAerolinia);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(452, 327);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(455, 450);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gestió Aerolínia: ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonNovaOpcio2);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(1028, 327);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(461, 450);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Gestió Aeroport:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1921, 1080);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// FormAdministradorIniciat
			// 
			this->ClientSize = System::Drawing::Size(1920, 1061);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttonTancaSessio);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormAdministradorIniciat";
			this->Text = L"AirPlanner";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAdministradorIniciat());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormEsborraAeroport());
		this->Close();
	}

	private: System::Void buttonEsborraAerolinia_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAdministradorIniciat());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormEsborraAerolinia());
		this->Close();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAdministradorIniciat());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormModificarAerolinia());
		this->Close();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAdministradorIniciat());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormModificaAeroport1());
		this->Close();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAdministradorIniciat());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormConsultarAerolinia());
		this->Close();
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAdministradorIniciat());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormConsultarAeroport());
		this->Close();
	}

	private: System::Void buttonNovaOpcio1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAdministradorIniciat());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormRegistrarAerolinia());
		this->Close();
	}

	private: System::Void buttonNovaOpcio2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAdministradorIniciat());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormRegistrarAeroport());
		this->Close();
	}

	private: System::Void buttonTancaSessio_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try {
			System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
				"Estas segur que vols tancar sessio?", "Confirmació",
				System::Windows::Forms::MessageBoxButtons::YesNo,
				System::Windows::Forms::MessageBoxIcon::Question
			);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
				presentacio.processarTancarSessio();
				MessageBox::Show("Has tancat sessio correctament");
				Launcher::Instance->formStack->Pop();
				this->Close();
			}
		}
		catch (std::exception& e) {
			MessageBox::Show("Error: " + gcnew System::String(e.what()));
		}
	}
	};
}


