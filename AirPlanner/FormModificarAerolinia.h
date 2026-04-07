#pragma once
#include <msclr/marshal_cppstd.h>
#include "CapaDePresentacio.h"
#include "Launcher.h"
namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormModificarAerolinia
	/// </summary>
	public ref class FormModificarAerolinia : public System::Windows::Forms::Form
	{
	public:
		FormModificarAerolinia(void)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormModificarAerolinia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelTitulo;
	private: System::Windows::Forms::Label^ labelID;
	private: System::Windows::Forms::Label^ labelNombre;
	private: System::Windows::Forms::Label^ labelContrasenya;
	private: System::Windows::Forms::Label^ labelCorreo;
	private: System::Windows::Forms::Label^ labelBarra;
	private: System::Windows::Forms::TextBox^ textBoxID;
	private: System::Windows::Forms::TextBox^ textBoxNombre;
	private: System::Windows::Forms::TextBox^ textBoxContrasenya;
	private: System::Windows::Forms::TextBox^ textBoxCorreo;
	private: System::Windows::Forms::Button^ buttonvolver;
	private: System::Windows::Forms::Button^ buttonAcceptar;
	private: System::Windows::Forms::Label^ labelContrasenyaADMIN;
	private: System::Windows::Forms::TextBox^ textBoxContrasenyaADMIN;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormModificarAerolinia::typeid));
			this->labelTitulo = (gcnew System::Windows::Forms::Label());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->labelNombre = (gcnew System::Windows::Forms::Label());
			this->labelContrasenya = (gcnew System::Windows::Forms::Label());
			this->labelCorreo = (gcnew System::Windows::Forms::Label());
			this->labelBarra = (gcnew System::Windows::Forms::Label());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->textBoxContrasenya = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCorreo = (gcnew System::Windows::Forms::TextBox());
			this->buttonvolver = (gcnew System::Windows::Forms::Button());
			this->buttonAcceptar = (gcnew System::Windows::Forms::Button());
			this->labelContrasenyaADMIN = (gcnew System::Windows::Forms::Label());
			this->textBoxContrasenyaADMIN = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// labelTitulo
			// 
			this->labelTitulo->AutoSize = true;
			this->labelTitulo->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitulo->ForeColor = System::Drawing::Color::RoyalBlue;
			this->labelTitulo->Location = System::Drawing::Point(563, 90);
			this->labelTitulo->Name = L"labelTitulo";
			this->labelTitulo->Size = System::Drawing::Size(797, 97);
			this->labelTitulo->TabIndex = 0;
			this->labelTitulo->Text = L"Modificar Aerolínia";
			// 
			// labelID
			// 
			this->labelID->AutoSize = true;
			this->labelID->BackColor = System::Drawing::SystemColors::ControlLight;
			this->labelID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelID->Location = System::Drawing::Point(509, 310);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(479, 42);
			this->labelID->TabIndex = 1;
			this->labelID->Text = L"ID Aerolínia:                          ";
			// 
			// labelNombre
			// 
			this->labelNombre->AutoSize = true;
			this->labelNombre->BackColor = System::Drawing::SystemColors::ControlLight;
			this->labelNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNombre->Location = System::Drawing::Point(509, 592);
			this->labelNombre->Name = L"labelNombre";
			this->labelNombre->Size = System::Drawing::Size(481, 42);
			this->labelNombre->TabIndex = 2;
			this->labelNombre->Text = L"Nom Aerolínia:                      ";
			// 
			// labelContrasenya
			// 
			this->labelContrasenya->AutoSize = true;
			this->labelContrasenya->BackColor = System::Drawing::SystemColors::ControlLight;
			this->labelContrasenya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelContrasenya->Location = System::Drawing::Point(509, 668);
			this->labelContrasenya->Name = L"labelContrasenya";
			this->labelContrasenya->Size = System::Drawing::Size(476, 42);
			this->labelContrasenya->TabIndex = 3;
			this->labelContrasenya->Text = L"Contrasenya Aerolínia:        ";
			// 
			// labelCorreo
			// 
			this->labelCorreo->AutoSize = true;
			this->labelCorreo->BackColor = System::Drawing::SystemColors::ControlLight;
			this->labelCorreo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCorreo->Location = System::Drawing::Point(509, 754);
			this->labelCorreo->Name = L"labelCorreo";
			this->labelCorreo->Size = System::Drawing::Size(477, 42);
			this->labelCorreo->TabIndex = 4;
			this->labelCorreo->Text = L"Correu Aerolínia:                  ";
			// 
			// labelBarra
			// 
			this->labelBarra->AutoSize = true;
			this->labelBarra->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBarra->ForeColor = System::Drawing::Color::RoyalBlue;
			this->labelBarra->Location = System::Drawing::Point(361, 483);
			this->labelBarra->Name = L"labelBarra";
			this->labelBarra->Size = System::Drawing::Size(435, 51);
			this->labelBarra->TabIndex = 5;
			this->labelBarra->Text = L"Noves Informacions:";
			// 
			// textBoxID
			// 
			this->textBoxID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxID->Location = System::Drawing::Point(1051, 321);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(349, 31);
			this->textBoxID->TabIndex = 6;
			this->textBoxID->Text = L"ID: ej(vueling@gmail.com)";
			this->textBoxID->Enter += gcnew System::EventHandler(this, &FormModificarAerolinia::textBoxID_Enter);
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNombre->Location = System::Drawing::Point(1051, 592);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(349, 31);
			this->textBoxNombre->TabIndex = 7;
			this->textBoxNombre->Text = L"Nom: ej(Vueling)";
			this->textBoxNombre->Enter += gcnew System::EventHandler(this, &FormModificarAerolinia::textBoxNombre_Enter);
			// 
			// textBoxContrasenya
			// 
			this->textBoxContrasenya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxContrasenya->Location = System::Drawing::Point(1051, 680);
			this->textBoxContrasenya->Name = L"textBoxContrasenya";
			this->textBoxContrasenya->Size = System::Drawing::Size(349, 31);
			this->textBoxContrasenya->TabIndex = 8;
			this->textBoxContrasenya->Text = L"Contrasenya: ej(1234)";
			this->textBoxContrasenya->Enter += gcnew System::EventHandler(this, &FormModificarAerolinia::textBoxContrasenya_Enter);
			// 
			// textBoxCorreo
			// 
			this->textBoxCorreo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCorreo->Location = System::Drawing::Point(1051, 766);
			this->textBoxCorreo->Name = L"textBoxCorreo";
			this->textBoxCorreo->Size = System::Drawing::Size(349, 31);
			this->textBoxCorreo->TabIndex = 9;
			this->textBoxCorreo->Text = L"Correu: ej(vueling@gmail.com)";
			this->textBoxCorreo->Enter += gcnew System::EventHandler(this, &FormModificarAerolinia::textBoxCorreo_Enter);
			// 
			// buttonvolver
			// 
			this->buttonvolver->BackColor = System::Drawing::Color::Salmon;
			this->buttonvolver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonvolver->Location = System::Drawing::Point(78, 907);
			this->buttonvolver->Name = L"buttonvolver";
			this->buttonvolver->Size = System::Drawing::Size(176, 56);
			this->buttonvolver->TabIndex = 10;
			this->buttonvolver->Text = L"Enrere";
			this->buttonvolver->UseVisualStyleBackColor = false;
			this->buttonvolver->Click += gcnew System::EventHandler(this, &FormModificarAerolinia::buttonvolver_Click);
			// 
			// buttonAcceptar
			// 
			this->buttonAcceptar->BackColor = System::Drawing::Color::MediumAquamarine;
			this->buttonAcceptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAcceptar->Location = System::Drawing::Point(1599, 909);
			this->buttonAcceptar->Name = L"buttonAcceptar";
			this->buttonAcceptar->Size = System::Drawing::Size(186, 54);
			this->buttonAcceptar->TabIndex = 11;
			this->buttonAcceptar->Text = L"Modificar";
			this->buttonAcceptar->UseVisualStyleBackColor = false;
			this->buttonAcceptar->Click += gcnew System::EventHandler(this, &FormModificarAerolinia::buttonAcceptar_Click);
			// 
			// labelContrasenyaADMIN
			// 
			this->labelContrasenyaADMIN->AutoSize = true;
			this->labelContrasenyaADMIN->BackColor = System::Drawing::SystemColors::ControlLight;
			this->labelContrasenyaADMIN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelContrasenyaADMIN->Location = System::Drawing::Point(509, 392);
			this->labelContrasenyaADMIN->Name = L"labelContrasenyaADMIN";
			this->labelContrasenyaADMIN->Size = System::Drawing::Size(480, 42);
			this->labelContrasenyaADMIN->TabIndex = 12;
			this->labelContrasenyaADMIN->Text = L"Contrasenya Administrador:";
			// 
			// textBoxContrasenyaADMIN
			// 
			this->textBoxContrasenyaADMIN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxContrasenyaADMIN->Location = System::Drawing::Point(1051, 404);
			this->textBoxContrasenyaADMIN->Name = L"textBoxContrasenyaADMIN";
			this->textBoxContrasenyaADMIN->Size = System::Drawing::Size(349, 31);
			this->textBoxContrasenyaADMIN->TabIndex = 13;
			this->textBoxContrasenyaADMIN->Text = L"Contrasenya Admin: ej(1234)";
			this->textBoxContrasenyaADMIN->Enter += gcnew System::EventHandler(this, &FormModificarAerolinia::textBoxContrasenyaADMIN_Enter);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-8, -20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1921, 1080);
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// FormModificarAerolinia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->labelContrasenyaADMIN);
			this->Controls->Add(this->textBoxContrasenyaADMIN);
			this->Controls->Add(this->buttonAcceptar);
			this->Controls->Add(this->buttonvolver);
			this->Controls->Add(this->textBoxCorreo);
			this->Controls->Add(this->labelNombre);
			this->Controls->Add(this->labelID);
			this->Controls->Add(this->labelTitulo);
			this->Controls->Add(this->labelBarra);
			this->Controls->Add(this->labelCorreo);
			this->Controls->Add(this->labelContrasenya);
			this->Controls->Add(this->textBoxContrasenya);
			this->Controls->Add(this->textBoxNombre);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormModificarAerolinia";
			this->Text = L"AirPlanner";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		
	private: System::Void textBoxNombre_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxNombre->Text == "Nom: ej(Vueling)") {
			textBoxNombre->Text = "";
		}
	}
	private: System::Void textBoxID_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxID->Text == "ID: ej(vueling@gmail.com)") {
			textBoxID->Text = "";
		}
	}
		   
	private: System::Void textBoxContrasenya_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxContrasenya->Text == "Contrasenya: ej(1234)") {
			textBoxContrasenya->Text = "";
			textBoxContrasenya->PasswordChar = '*';
		}
	}
	
	private: System::Void textBoxCorreo_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxCorreo->Text == "Correu: ej(vueling@gmail.com)") {
			textBoxCorreo->Text = "";
		}
	}

	private: System::Void textBoxContrasenyaADMIN_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxContrasenyaADMIN->Text == "Contrasenya Admin: ej(1234)") {
			textBoxContrasenyaADMIN->Text = "";
			textBoxContrasenyaADMIN->PasswordChar = '*';
		}
	}


	private: System::Void buttonAcceptar_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try 
		{
			std::string ContrasenyaAdmin = msclr::interop::marshal_as<std::string>(textBoxContrasenyaADMIN->Text);
			std::string AeroliniaID = msclr::interop::marshal_as<std::string>(textBoxID->Text);
			std::string NomAerolinia = msclr::interop::marshal_as<std::string>(textBoxNombre->Text);
			std::string ContrasenyaAerolinia = msclr::interop::marshal_as<std::string>(textBoxContrasenya->Text);
			std::string CorreoAerolinia = msclr::interop::marshal_as<std::string>(textBoxCorreo->Text);

			//Comprobacion de modificaciones
			if (ContrasenyaAdmin == "" || ContrasenyaAdmin == "Contrasenya Admin: ej(1234)")
			{
				MessageBox::Show("Error, el camp 'Contrasenya Admin' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (AeroliniaID == "" || AeroliniaID == "ID: ej(vueling@gmail.com)")
			{
				MessageBox::Show("Error, el camp 'Aerolinia ID' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (NomAerolinia == "Nom: ej(Vueling)")
			{
				//Es Opt, si no lo hemos editado, = ""
				NomAerolinia = "";
			}

			if (ContrasenyaAerolinia == "Contrasenya: ej(1234)")
			{
				ContrasenyaAerolinia = "";
			}

			if (CorreoAerolinia =="Correu: ej(vueling@gmail.com)")
			{
				CorreoAerolinia = "";
			}
			
			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
			presentacio.processarModificarAerolinia(CorreoAerolinia, AeroliniaID, ContrasenyaAerolinia, NomAerolinia, ContrasenyaAdmin);

			MessageBox::Show("S'ha Modificat correctament l'Aerolinia seleccionada");
			Launcher::Instance->formStack->Pop();
			this->Close();

		}
		catch (Exception^ ex) 
		{
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void buttonvolver_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Launcher::Instance->formStack->Pop();
		this->Close();
	}
};
}
