#pragma once
#include "FormModificaVol.h"
#include "FormEsborraVol.h"
#include "FormEstatPeticions.h"
#include "FormCrearPeticio.h"
#include "FormConsultaVolsAerolinia.h"
#include "FormConsultaVolsAerolinia.h"
#include <msclr/marshal_cppstd.h>
#include "Launcher.h"
namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormAeroliniaIniciada
	/// </summary>
	public ref class FormAeroliniaIniciada : public System::Windows::Forms::Form
	{
	public:
		FormAeroliniaIniciada(void)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormAeroliniaIniciada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonModificaVol;
	private: System::Windows::Forms::Button^ buttonEsborraVol;
	private: System::Windows::Forms::Button^ buttonEstatPeticions;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;










	private: System::Windows::Forms::Button^ buttonConsultaVolsAerolinia;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ titol;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAeroliniaIniciada::typeid));
			this->buttonEsborraVol = (gcnew System::Windows::Forms::Button());
			this->buttonEstatPeticions = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->buttonModificaVol = (gcnew System::Windows::Forms::Button());
			this->buttonConsultaVolsAerolinia = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->titol = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonEsborraVol
			// 
			this->buttonEsborraVol->BackColor = System::Drawing::Color::Tomato;
			resources->ApplyResources(this->buttonEsborraVol, L"buttonEsborraVol");
			this->buttonEsborraVol->Name = L"buttonEsborraVol";
			this->buttonEsborraVol->UseVisualStyleBackColor = false;
			this->buttonEsborraVol->Click += gcnew System::EventHandler(this, &FormAeroliniaIniciada::buttonEsborraVol_Click);
			// 
			// buttonEstatPeticions
			// 
			resources->ApplyResources(this->buttonEstatPeticions, L"buttonEstatPeticions");
			this->buttonEstatPeticions->Name = L"buttonEstatPeticions";
			this->buttonEstatPeticions->UseVisualStyleBackColor = true;
			this->buttonEstatPeticions->Click += gcnew System::EventHandler(this, &FormAeroliniaIniciada::buttonEstatPeticions_Click);
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormAeroliniaIniciada::button1_Click);
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->BackColor = System::Drawing::Color::Salmon;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormAeroliniaIniciada::button2_Enrere);
			// 
			// buttonModificaVol
			// 
			this->buttonModificaVol->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->buttonModificaVol, L"buttonModificaVol");
			this->buttonModificaVol->Name = L"buttonModificaVol";
			this->buttonModificaVol->UseVisualStyleBackColor = true;
			this->buttonModificaVol->Click += gcnew System::EventHandler(this, &FormAeroliniaIniciada::buttonModificaVol_Click);
			// 
			// buttonConsultaVolsAerolinia
			// 
			this->buttonConsultaVolsAerolinia->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->buttonConsultaVolsAerolinia, L"buttonConsultaVolsAerolinia");
			this->buttonConsultaVolsAerolinia->Name = L"buttonConsultaVolsAerolinia";
			this->buttonConsultaVolsAerolinia->UseVisualStyleBackColor = true;
			this->buttonConsultaVolsAerolinia->Click += gcnew System::EventHandler(this, &FormAeroliniaIniciada::buttonConsultaVolsAerolinia_Click);
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// titol
			// 
			resources->ApplyResources(this->titol, L"titol");
			this->titol->BackColor = System::Drawing::Color::Transparent;
			this->titol->ForeColor = System::Drawing::Color::RoyalBlue;
			this->titol->Name = L"titol";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->buttonEstatPeticions);
			this->groupBox1->Controls->Add(this->buttonEsborraVol);
			this->groupBox1->Controls->Add(this->buttonModificaVol);
			this->groupBox1->Controls->Add(this->buttonConsultaVolsAerolinia);
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// FormAeroliniaIniciada
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->titol);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"FormAeroliniaIniciada";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonModificaVol_Click(System::Object^ sender, System::EventArgs^ e) {

		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAeroliniaIniciada());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormModificaVol());
		this->Close();
	}
	private: System::Void buttonEsborraVol_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAeroliniaIniciada());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormEsborraVol());
		this->Close();
	}
	private: System::Void buttonEstatPeticions_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAeroliniaIniciada());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormEstatPeticions());
		this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAeroliniaIniciada());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormCrearPeticio());
		this->Close();
	}
	private: System::Void button2_Enrere(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}
	private: System::Void buttonConsultaVolsAerolinia_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAeroliniaIniciada());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormConsultaVolsAerolinia());
		this->Close();
	}
		    
};

}

