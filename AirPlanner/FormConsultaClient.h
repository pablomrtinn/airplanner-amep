#pragma once
#include "DTOClient.h"
#include "MyForm.h"
#include "CapaDePresentacio.h"
#include "Launcher.h"
#include "FormCtrlModificaSubscripcio.h"

namespace AirPlanner {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormConsultaClient
	/// </summary>
	public ref class FormConsultaClient : public System::Windows::Forms::Form
	{
	public:
		FormConsultaClient(void)
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
		~FormConsultaClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ titol;
	protected:

	private: System::Windows::Forms::Label^ nomUsuari;
	private: System::Windows::Forms::Label^ correuElectronic;
	private: System::Windows::Forms::Label^ dataNaixement;
	private: System::Windows::Forms::Label^ tipusSubscripcio;
	private: System::Windows::Forms::Label^ nomUsuariDTO;
	private: System::Windows::Forms::Label^ correuElectronicDTO;
	private: System::Windows::Forms::Label^ dataNaixementDTO;
	private: System::Windows::Forms::Label^ tipusSubscripcioDTO;
	private: System::Windows::Forms::Button^ modificarUsuariButton;

	private: System::Windows::Forms::Button^ enrrereButton;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormConsultaClient::typeid));
			this->titol = (gcnew System::Windows::Forms::Label());
			this->nomUsuari = (gcnew System::Windows::Forms::Label());
			this->correuElectronic = (gcnew System::Windows::Forms::Label());
			this->dataNaixement = (gcnew System::Windows::Forms::Label());
			this->tipusSubscripcio = (gcnew System::Windows::Forms::Label());
			this->nomUsuariDTO = (gcnew System::Windows::Forms::Label());
			this->correuElectronicDTO = (gcnew System::Windows::Forms::Label());
			this->dataNaixementDTO = (gcnew System::Windows::Forms::Label());
			this->tipusSubscripcioDTO = (gcnew System::Windows::Forms::Label());
			this->modificarUsuariButton = (gcnew System::Windows::Forms::Button());
			this->enrrereButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// titol
			// 
			this->titol->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->titol->AutoSize = true;
			this->titol->BackColor = System::Drawing::Color::Transparent;
			this->titol->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titol->ForeColor = System::Drawing::Color::RoyalBlue;
			this->titol->Location = System::Drawing::Point(654, 239);
			this->titol->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->titol->Name = L"titol";
			this->titol->Size = System::Drawing::Size(881, 97);
			this->titol->TabIndex = 0;
			this->titol->Text = L"CONSULTAR USUARI";
			this->titol->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// nomUsuari
			// 
			this->nomUsuari->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->nomUsuari->AutoSize = true;
			this->nomUsuari->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomUsuari->Location = System::Drawing::Point(51, 68);
			this->nomUsuari->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->nomUsuari->Name = L"nomUsuari";
			this->nomUsuari->Size = System::Drawing::Size(92, 39);
			this->nomUsuari->TabIndex = 2;
			this->nomUsuari->Text = L"Nom";
			this->nomUsuari->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// correuElectronic
			// 
			this->correuElectronic->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->correuElectronic->AutoSize = true;
			this->correuElectronic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correuElectronic->Location = System::Drawing::Point(450, 68);
			this->correuElectronic->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->correuElectronic->Name = L"correuElectronic";
			this->correuElectronic->Size = System::Drawing::Size(297, 39);
			this->correuElectronic->TabIndex = 3;
			this->correuElectronic->Text = L"Correu Electrònic";
			this->correuElectronic->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dataNaixement
			// 
			this->dataNaixement->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataNaixement->AutoSize = true;
			this->dataNaixement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dataNaixement->Location = System::Drawing::Point(51, 260);
			this->dataNaixement->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->dataNaixement->Name = L"dataNaixement";
			this->dataNaixement->Size = System::Drawing::Size(275, 39);
			this->dataNaixement->TabIndex = 4;
			this->dataNaixement->Text = L"Data Naixement";
			this->dataNaixement->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tipusSubscripcio
			// 
			this->tipusSubscripcio->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tipusSubscripcio->AutoSize = true;
			this->tipusSubscripcio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tipusSubscripcio->Location = System::Drawing::Point(450, 260);
			this->tipusSubscripcio->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->tipusSubscripcio->Name = L"tipusSubscripcio";
			this->tipusSubscripcio->Size = System::Drawing::Size(348, 39);
			this->tipusSubscripcio->TabIndex = 5;
			this->tipusSubscripcio->Text = L"Tipus de subscripció";
			this->tipusSubscripcio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// nomUsuariDTO
			// 
			this->nomUsuariDTO->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->nomUsuariDTO->AutoSize = true;
			this->nomUsuariDTO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomUsuariDTO->Location = System::Drawing::Point(51, 113);
			this->nomUsuariDTO->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->nomUsuariDTO->Name = L"nomUsuariDTO";
			this->nomUsuariDTO->Size = System::Drawing::Size(68, 39);
			this->nomUsuariDTO->TabIndex = 6;
			this->nomUsuariDTO->Text = L"xxx";
			this->nomUsuariDTO->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// correuElectronicDTO
			// 
			this->correuElectronicDTO->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->correuElectronicDTO->AutoSize = true;
			this->correuElectronicDTO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->correuElectronicDTO->Location = System::Drawing::Point(450, 113);
			this->correuElectronicDTO->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->correuElectronicDTO->Name = L"correuElectronicDTO";
			this->correuElectronicDTO->Size = System::Drawing::Size(68, 39);
			this->correuElectronicDTO->TabIndex = 7;
			this->correuElectronicDTO->Text = L"xxx";
			this->correuElectronicDTO->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// dataNaixementDTO
			// 
			this->dataNaixementDTO->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataNaixementDTO->AutoSize = true;
			this->dataNaixementDTO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dataNaixementDTO->Location = System::Drawing::Point(51, 310);
			this->dataNaixementDTO->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->dataNaixementDTO->Name = L"dataNaixementDTO";
			this->dataNaixementDTO->Size = System::Drawing::Size(68, 39);
			this->dataNaixementDTO->TabIndex = 8;
			this->dataNaixementDTO->Text = L"xxx";
			this->dataNaixementDTO->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// tipusSubscripcioDTO
			// 
			this->tipusSubscripcioDTO->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tipusSubscripcioDTO->AutoSize = true;
			this->tipusSubscripcioDTO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tipusSubscripcioDTO->Location = System::Drawing::Point(450, 310);
			this->tipusSubscripcioDTO->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->tipusSubscripcioDTO->Name = L"tipusSubscripcioDTO";
			this->tipusSubscripcioDTO->Size = System::Drawing::Size(68, 39);
			this->tipusSubscripcioDTO->TabIndex = 9;
			this->tipusSubscripcioDTO->Text = L"xxx";
			this->tipusSubscripcioDTO->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// modificarUsuariButton
			// 
			this->modificarUsuariButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->modificarUsuariButton->BackColor = System::Drawing::Color::RoyalBlue;
			this->modificarUsuariButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->modificarUsuariButton->Location = System::Drawing::Point(1189, 926);
			this->modificarUsuariButton->Margin = System::Windows::Forms::Padding(2);
			this->modificarUsuariButton->Name = L"modificarUsuariButton";
			this->modificarUsuariButton->Size = System::Drawing::Size(315, 62);
			this->modificarUsuariButton->TabIndex = 10;
			this->modificarUsuariButton->Text = L"Modificar usuari";
			this->modificarUsuariButton->UseVisualStyleBackColor = false;
			this->modificarUsuariButton->Click += gcnew System::EventHandler(this, &FormConsultaClient::modificarUsuariButton_Click);
			// 
			// enrrereButton
			// 
			this->enrrereButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->enrrereButton->BackColor = System::Drawing::Color::Tomato;
			this->enrrereButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enrrereButton->Location = System::Drawing::Point(107, 940);
			this->enrrereButton->Margin = System::Windows::Forms::Padding(2);
			this->enrrereButton->Name = L"enrrereButton";
			this->enrrereButton->Size = System::Drawing::Size(253, 62);
			this->enrrereButton->TabIndex = 11;
			this->enrrereButton->Text = L"Enrere";
			this->enrrereButton->UseVisualStyleBackColor = false;
			this->enrrereButton->Click += gcnew System::EventHandler(this, &FormConsultaClient::enrrereButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->Controls->Add(this->nomUsuari);
			this->groupBox1->Controls->Add(this->correuElectronic);
			this->groupBox1->Controls->Add(this->dataNaixement);
			this->groupBox1->Controls->Add(this->tipusSubscripcio);
			this->groupBox1->Controls->Add(this->nomUsuariDTO);
			this->groupBox1->Controls->Add(this->tipusSubscripcioDTO);
			this->groupBox1->Controls->Add(this->correuElectronicDTO);
			this->groupBox1->Controls->Add(this->dataNaixementDTO);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(702, 368);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1007, 436);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Totes les teves dades a una sola pantalla";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-9, -14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1941, 1093);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1547, 912);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(336, 91);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Modificar la Subscripció";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormConsultaClient::button1_Click);
			// 
			// FormConsultaClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->enrrereButton);
			this->Controls->Add(this->modificarUsuariButton);
			this->Controls->Add(this->titol);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"FormConsultaClient";
			this->Text = L"AirPlanner";
			this->Load += gcnew System::EventHandler(this, &FormConsultaClient::FormConsultaClient_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void enrrereButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close(); // Cierra este formulario
	}
	private: System::Void modificarUsuariButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			Launcher::Instance->formStack->Pop();
			Launcher::Instance->formStack->Push(gcnew FormConsultaClient());
			Launcher::Instance->formStack->Push(gcnew AirPlanner::MyForm());
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void FormConsultaClient_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
			DTOClient client = presentacio.processarConsultaClient();
			nomUsuariDTO->Text = gcnew String(client.obteNom().c_str());
			correuElectronicDTO->Text = gcnew String(client.obteCorreuElectronic().c_str());
			dataNaixementDTO->Text = gcnew String(client.obteDataNaixment().c_str());
			tipusSubscripcioDTO->Text = gcnew String(client.obteSubscripcio().c_str());
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Launcher::Instance->formStack->Pop();
	Launcher::Instance->formStack->Push(gcnew FormConsultaClient());
	Launcher::Instance->formStack->Push(gcnew AirPlanner::FormCtrlModificaSubscripcio());
	this->Close();
}
};
}
