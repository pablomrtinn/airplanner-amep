#pragma once
#include "CapaDePresentacio.h"
#include <msclr/marshal_cppstd.h>
using namespace msclr::interop;
#include "Launcher.h"

namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormModificaTreballador
	/// </summary>
	public ref class FormModificaTreballador : public System::Windows::Forms::Form
	{
	private:
		String^ idTreballador;
	public:
		FormModificaTreballador(String^ treballador)
		{
			this->idTreballador = treballador;
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
		~FormModificaTreballador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonEnrere;
	protected:

	private: System::Windows::Forms::Button^ Modifica;
	protected:

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxID;
	private: System::Windows::Forms::TextBox^ textBoxContrasenya;
	private: System::Windows::Forms::TextBox^ textBoxCorreuE;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxCorreuA;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ GrupBoxTreballador;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormModificaTreballador::typeid));
			this->buttonEnrere = (gcnew System::Windows::Forms::Button());
			this->Modifica = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxContrasenya = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCorreuE = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCorreuA = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->GrupBoxTreballador = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->GrupBoxTreballador->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonEnrere
			// 
			this->buttonEnrere->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonEnrere->BackColor = System::Drawing::Color::Salmon;
			this->buttonEnrere->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonEnrere->Location = System::Drawing::Point(85, 905);
			this->buttonEnrere->Margin = System::Windows::Forms::Padding(2);
			this->buttonEnrere->Name = L"buttonEnrere";
			this->buttonEnrere->Size = System::Drawing::Size(170, 65);
			this->buttonEnrere->TabIndex = 22;
			this->buttonEnrere->Text = L"Enrere";
			this->buttonEnrere->UseVisualStyleBackColor = false;
			this->buttonEnrere->Click += gcnew System::EventHandler(this, &FormModificaTreballador::Enrere_Click);
			// 
			// Modifica
			// 
			this->Modifica->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Modifica->BackColor = System::Drawing::Color::MediumAquamarine;
			this->Modifica->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Modifica->Location = System::Drawing::Point(1682, 905);
			this->Modifica->Margin = System::Windows::Forms::Padding(2);
			this->Modifica->Name = L"Modifica";
			this->Modifica->Size = System::Drawing::Size(172, 65);
			this->Modifica->TabIndex = 21;
			this->Modifica->Text = L"Modifica";
			this->Modifica->UseVisualStyleBackColor = false;
			this->Modifica->Click += gcnew System::EventHandler(this, &FormModificaTreballador::Modifica_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label5->Location = System::Drawing::Point(502, 165);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(900, 97);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Modificar Treballador";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->label4->Location = System::Drawing::Point(119, 143);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(177, 31);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Contrasenya:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->label3->Location = System::Drawing::Point(246, 213);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 31);
			this->label3->TabIndex = 18;
			this->label3->Text = L"ID:";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->Location = System::Drawing::Point(409, 309);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(666, 31);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Correu Electronic del Treballador que es vol modificar:";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(217, 69);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 31);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Nom:";
			// 
			// textBoxID
			// 
			this->textBoxID->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBoxID->Location = System::Drawing::Point(341, 224);
			this->textBoxID->Margin = System::Windows::Forms::Padding(2);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(367, 38);
			this->textBoxID->TabIndex = 15;
			this->textBoxID->Text = L"Identificador";
			this->textBoxID->Enter += gcnew System::EventHandler(this, &FormModificaTreballador::textBoxID_Enter);
			// 
			// textBoxContrasenya
			// 
			this->textBoxContrasenya->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxContrasenya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBoxContrasenya->Location = System::Drawing::Point(341, 143);
			this->textBoxContrasenya->Margin = System::Windows::Forms::Padding(2);
			this->textBoxContrasenya->Name = L"textBoxContrasenya";
			this->textBoxContrasenya->Size = System::Drawing::Size(367, 38);
			this->textBoxContrasenya->TabIndex = 14;
			this->textBoxContrasenya->Text = L"Contrasenya";
			this->textBoxContrasenya->Enter += gcnew System::EventHandler(this, &FormModificaTreballador::textBoxContrasenya_Enter);
			// 
			// textBoxCorreuE
			// 
			this->textBoxCorreuE->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxCorreuE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->textBoxCorreuE->Location = System::Drawing::Point(1093, 309);
			this->textBoxCorreuE->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCorreuE->Name = L"textBoxCorreuE";
			this->textBoxCorreuE->Size = System::Drawing::Size(367, 33);
			this->textBoxCorreuE->TabIndex = 13;
			this->textBoxCorreuE->Text = L"Correu Treballador";
			this->textBoxCorreuE->Enter += gcnew System::EventHandler(this, &FormModificaTreballador::textBoxCorreuE_Enter);
			// 
			// textBoxNom
			// 
			this->textBoxNom->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBoxNom->Location = System::Drawing::Point(341, 66);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(367, 38);
			this->textBoxNom->TabIndex = 12;
			this->textBoxNom->Text = L"Nom";
			this->textBoxNom->Enter += gcnew System::EventHandler(this, &FormModificaTreballador::textBoxNom_Enter);
			// 
			// textBoxCorreuA
			// 
			this->textBoxCorreuA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxCorreuA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBoxCorreuA->Location = System::Drawing::Point(341, 296);
			this->textBoxCorreuA->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCorreuA->Name = L"textBoxCorreuA";
			this->textBoxCorreuA->Size = System::Drawing::Size(367, 38);
			this->textBoxCorreuA->TabIndex = 23;
			this->textBoxCorreuA->Text = L"Correu Aeroport";
			this->textBoxCorreuA->Enter += gcnew System::EventHandler(this, &FormModificaTreballador::textBoxCorreuA_Enter);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->label6->Location = System::Drawing::Point(80, 303);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(216, 31);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Correu Aeroport:";
			// 
			// GrupBoxTreballador
			// 
			this->GrupBoxTreballador->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GrupBoxTreballador->Controls->Add(this->label6);
			this->GrupBoxTreballador->Controls->Add(this->textBoxCorreuA);
			this->GrupBoxTreballador->Controls->Add(this->label1);
			this->GrupBoxTreballador->Controls->Add(this->textBoxNom);
			this->GrupBoxTreballador->Controls->Add(this->textBoxContrasenya);
			this->GrupBoxTreballador->Controls->Add(this->textBoxID);
			this->GrupBoxTreballador->Controls->Add(this->label4);
			this->GrupBoxTreballador->Controls->Add(this->label3);
			this->GrupBoxTreballador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GrupBoxTreballador->Location = System::Drawing::Point(519, 393);
			this->GrupBoxTreballador->Margin = System::Windows::Forms::Padding(2);
			this->GrupBoxTreballador->Name = L"GrupBoxTreballador";
			this->GrupBoxTreballador->Padding = System::Windows::Forms::Padding(2);
			this->GrupBoxTreballador->Size = System::Drawing::Size(898, 395);
			this->GrupBoxTreballador->TabIndex = 25;
			this->GrupBoxTreballador->TabStop = false;
			this->GrupBoxTreballador->Text = L"Omple els següents camps per donar modificar un treballador";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1923, 1065);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// FormModificaTreballador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1920, 1061);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxCorreuE);
			this->Controls->Add(this->GrupBoxTreballador);
			this->Controls->Add(this->buttonEnrere);
			this->Controls->Add(this->Modifica);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"FormModificaTreballador";
			this->Text = L"AirPlanner";
			this->Load += gcnew System::EventHandler(this, &FormModificaTreballador::FormModificaTreballador_Load);
			this->GrupBoxTreballador->ResumeLayout(false);
			this->GrupBoxTreballador->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void FormModificaTreballador_Load(System::Object^ sender, System::EventArgs^ e) {
	if (idTreballador != "") {
		this->label2->Visible = false;
		this->textBoxCorreuE->Visible = false;
	}
}

private: System::Void Modifica_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		
		string contrasenya = msclr::interop::marshal_as<std::string>(this->textBoxContrasenya->Text);
		string nom = msclr::interop::marshal_as<std::string>(this->textBoxNom->Text);
		string id = msclr::interop::marshal_as<std::string>(this->textBoxID->Text);
		string correuAeroport = msclr::interop::marshal_as<std::string>(this->textBoxCorreuA->Text);
		string correuE;
		if (idTreballador == "") {
			correuE = msclr::interop::marshal_as<std::string>(this->textBoxCorreuE->Text);
		}
		else {
			System::String^ treballador = idTreballador;
			correuE = marshal_as<std::string>(treballador);
		}

		if (correuE == "Correu Treballador" || correuE == "") {
			MessageBox::Show("El correu del treballador no pot estar buit!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
		if (nom == "Nom") nom = "";
		if (contrasenya == "Contrasenya") contrasenya = "";
		if (id == "Identificador") id = "";
		if (correuAeroport == "Correu Aeroport") correuAeroport = "";

		if (nom == "" && contrasenya == "" && id == "" && correuAeroport == "") {
			MessageBox::Show("No s'ha modificat cap paràmetre", "Modificar Treballador", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
		presentacio.processarModificaTreballador(correuE, contrasenya, nom, id, correuAeroport);

		MessageBox::Show("Treballador modificat correctament!", "Modificació Treballador", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}
}

private: System::Void Enrere_Click(System::Object^ sender, System::EventArgs^ e) {
	Launcher::Instance->formStack->Pop();
	this->Close();
}

private: System::Void textBoxCorreuE_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxCorreuE->Text == "Correu Treballador") {
		textBoxCorreuE->Text = "";
	}
}

private: System::Void textBoxNom_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxNom->Text == "Nom") {
		textBoxNom->Text = "";
	}
}

private: System::Void textBoxContrasenya_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxContrasenya->Text == "Contrasenya") {
		textBoxContrasenya->Text = "";
		textBoxContrasenya->PasswordChar = '*';
	}
}

private: System::Void textBoxID_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxID->Text == "Identificador") {
		textBoxID->Text = "";
	}
}

private: System::Void textBoxCorreuA_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxCorreuA->Text == "Correu Aeroport") {
		textBoxCorreuA->Text = "";
	}
}
};
}
