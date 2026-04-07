#pragma once
#include "FormConsultaClient.h"
#include "FormEsborraUsuari.h"
#include "FormBuscarVolPerAEstat.h"
#include "FormConsultaVolsReservatsClient.h"
#include <Windows.h>
#include "FormBuscarVols.h"
#using <System.Windows.Forms.dll>
#include "Launcher.h"
using namespace System;
using namespace System::Windows::Forms;

namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormSessioIniciada
	/// </summary>
	public ref class FormSessioIniciada : public System::Windows::Forms::Form
	{
	public:
		FormSessioIniciada(void)
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
		~FormSessioIniciada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonConsultaUsuari;

	private: System::Windows::Forms::Button^ buttonTancarSessio;
	private: System::Windows::Forms::Button^ buttonEsborraUsuari;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonEstatVol;
	private: System::Windows::Forms::Button^ BotoReserves;
	private: System::Windows::Forms::GroupBox^ groupBoxGestioVols;
	private: System::Windows::Forms::GroupBox^ groupBoxGestioCompte;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::PictureBox^ pictureBox4;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormSessioIniciada::typeid));
			this->buttonConsultaUsuari = (gcnew System::Windows::Forms::Button());
			this->buttonTancarSessio = (gcnew System::Windows::Forms::Button());
			this->buttonEsborraUsuari = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonEstatVol = (gcnew System::Windows::Forms::Button());
			this->BotoReserves = (gcnew System::Windows::Forms::Button());
			this->groupBoxGestioVols = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxGestioCompte = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxGestioVols->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBoxGestioCompte->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonConsultaUsuari
			// 
			resources->ApplyResources(this->buttonConsultaUsuari, L"buttonConsultaUsuari");
			this->buttonConsultaUsuari->Name = L"buttonConsultaUsuari";
			this->buttonConsultaUsuari->UseVisualStyleBackColor = true;
			this->buttonConsultaUsuari->Click += gcnew System::EventHandler(this, &FormSessioIniciada::buttonConsultaUsuari_Click);
			// 
			// buttonTancarSessio
			// 
			resources->ApplyResources(this->buttonTancarSessio, L"buttonTancarSessio");
			this->buttonTancarSessio->BackColor = System::Drawing::Color::Salmon;
			this->buttonTancarSessio->Name = L"buttonTancarSessio";
			this->buttonTancarSessio->UseVisualStyleBackColor = false;
			this->buttonTancarSessio->Click += gcnew System::EventHandler(this, &FormSessioIniciada::buttonTancarSessio_Click);
			// 
			// buttonEsborraUsuari
			// 
			resources->ApplyResources(this->buttonEsborraUsuari, L"buttonEsborraUsuari");
			this->buttonEsborraUsuari->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonEsborraUsuari->Name = L"buttonEsborraUsuari";
			this->buttonEsborraUsuari->UseVisualStyleBackColor = false;
			this->buttonEsborraUsuari->Click += gcnew System::EventHandler(this, &FormSessioIniciada::buttonEsborraUsuari_Click);
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormSessioIniciada::button1_Click);
			// 
			// buttonEstatVol
			// 
			resources->ApplyResources(this->buttonEstatVol, L"buttonEstatVol");
			this->buttonEstatVol->Name = L"buttonEstatVol";
			this->buttonEstatVol->UseVisualStyleBackColor = true;
			this->buttonEstatVol->Click += gcnew System::EventHandler(this, &FormSessioIniciada::buttonEstatVol_Click);
			// 
			// BotoReserves
			// 
			resources->ApplyResources(this->BotoReserves, L"BotoReserves");
			this->BotoReserves->Name = L"BotoReserves";
			this->BotoReserves->UseVisualStyleBackColor = true;
			this->BotoReserves->Click += gcnew System::EventHandler(this, &FormSessioIniciada::buttonConsultaReserves_Click);
			// 
			// groupBoxGestioVols
			// 
			resources->ApplyResources(this->groupBoxGestioVols, L"groupBoxGestioVols");
			this->groupBoxGestioVols->Controls->Add(this->pictureBox1);
			this->groupBoxGestioVols->Controls->Add(this->buttonEstatVol);
			this->groupBoxGestioVols->Controls->Add(this->button1);
			this->groupBoxGestioVols->Controls->Add(this->BotoReserves);
			this->groupBoxGestioVols->Name = L"groupBoxGestioVols";
			this->groupBoxGestioVols->TabStop = false;
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			// 
			// groupBoxGestioCompte
			// 
			resources->ApplyResources(this->groupBoxGestioCompte, L"groupBoxGestioCompte");
			this->groupBoxGestioCompte->Controls->Add(this->pictureBox3);
			this->groupBoxGestioCompte->Controls->Add(this->pictureBox2);
			this->groupBoxGestioCompte->Controls->Add(this->buttonConsultaUsuari);
			this->groupBoxGestioCompte->Controls->Add(this->buttonTancarSessio);
			this->groupBoxGestioCompte->Controls->Add(this->buttonEsborraUsuari);
			this->groupBoxGestioCompte->Name = L"groupBoxGestioCompte";
			this->groupBoxGestioCompte->TabStop = false;
			// 
			// pictureBox2
			// 
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			resources->ApplyResources(this->pictureBox4, L"pictureBox4");
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->TabStop = false;
			// 
			// FormSessioIniciada
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->groupBoxGestioCompte);
			this->Controls->Add(this->groupBoxGestioVols);
			this->Controls->Add(this->pictureBox4);
			this->Name = L"FormSessioIniciada";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->groupBoxGestioVols->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBoxGestioCompte->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void buttonConsultaUsuari_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormSessioIniciada());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormConsultaClient());
		this->Close();
	}

	private: System::Void buttonTancarSessio_Click(System::Object^ sender, System::EventArgs^ e) {
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
				this->Close(); // Cierra el formulario actual
			}			
			
		}
		catch (std::exception& e) {
			MessageBox::Show("Error: " + gcnew System::String(e.what()));
		}
	}
	private: System::Void buttonEsborraUsuari_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormSessioIniciada());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormEsborraUsuari());
		this->Close();

		CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();

		bool hiHa = presentacio.hiHaUsuari();

		if (!hiHa) {
			Launcher::Instance->formStack->Pop();
			this->Close();
		}

	}
	private: System::Void buttonEstatVol_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormSessioIniciada());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormBuscarVolPerAEstat());
		this->Close();
	}

	private: System::Void buttonConsultaReserves_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormSessioIniciada());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormConsultaVolsReservatsClient());
		this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormSessioIniciada());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormBuscarVols());
		this->Close();
	}


};
}
