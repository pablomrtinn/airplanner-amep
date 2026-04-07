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
	/// Resumen de FormRegistrarTreballador1
	/// </summary>
	public ref class FormRegistrarTreballador1 : public System::Windows::Forms::Form
	{
	public:
		FormRegistrarTreballador1(void)
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
		~FormRegistrarTreballador1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxCorreu;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::TextBox^ textBoxContrasenya;

	private: System::Windows::Forms::TextBox^ textBoxIdentificador;
	private: System::Windows::Forms::Button^ enrrereButton;
	private: System::Windows::Forms::Button^ buttonRegistrar;
	private: System::Windows::Forms::GroupBox^ GrupBoxTreballador;
	private: System::Windows::Forms::PictureBox^ pictureBox1;










	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormRegistrarTreballador1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxCorreu = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxContrasenya = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIdentificador = (gcnew System::Windows::Forms::TextBox());
			this->enrrereButton = (gcnew System::Windows::Forms::Button());
			this->buttonRegistrar = (gcnew System::Windows::Forms::Button());
			this->GrupBoxTreballador = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->GrupBoxTreballador->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3173, 1768);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 71);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(100, 233);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Correu electronic";
			// 
			// textBoxCorreu
			// 
			this->textBoxCorreu->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxCorreu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCorreu->Location = System::Drawing::Point(98, 267);
			this->textBoxCorreu->Name = L"textBoxCorreu";
			this->textBoxCorreu->Size = System::Drawing::Size(271, 31);
			this->textBoxCorreu->TabIndex = 2;
			this->textBoxCorreu->Text = L"Correu";
			this->textBoxCorreu->Enter += gcnew System::EventHandler(this, &FormRegistrarTreballador1::textBoxCorreu_Enter);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(536, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 31);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Contrasenya";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(100, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(249, 31);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Nom del treballador";
			// 
			// textBoxNom
			// 
			this->textBoxNom->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNom->Location = System::Drawing::Point(98, 132);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(271, 31);
			this->textBoxNom->TabIndex = 6;
			this->textBoxNom->Text = L"Nom";
			this->textBoxNom->Enter += gcnew System::EventHandler(this, &FormRegistrarTreballador1::textBox_Nom);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label4->Location = System::Drawing::Point(377, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1266, 97);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Dona d\'alta un nou treballador";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::Tomato;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(740, 1768);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(230, 71);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Enrere";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(536, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 31);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Identificador";
			// 
			// textBoxContrasenya
			// 
			this->textBoxContrasenya->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxContrasenya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxContrasenya->Location = System::Drawing::Point(535, 132);
			this->textBoxContrasenya->Name = L"textBoxContrasenya";
			this->textBoxContrasenya->Size = System::Drawing::Size(271, 31);
			this->textBoxContrasenya->TabIndex = 12;
			this->textBoxContrasenya->Text = L"Contrasenya";
			this->textBoxContrasenya->Enter += gcnew System::EventHandler(this, &FormRegistrarTreballador1::textBox2_Contrasenya);
			// 
			// textBoxIdentificador
			// 
			this->textBoxIdentificador->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxIdentificador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxIdentificador->Location = System::Drawing::Point(535, 267);
			this->textBoxIdentificador->Name = L"textBoxIdentificador";
			this->textBoxIdentificador->Size = System::Drawing::Size(271, 31);
			this->textBoxIdentificador->TabIndex = 14;
			this->textBoxIdentificador->Text = L"Identificador";
			this->textBoxIdentificador->Enter += gcnew System::EventHandler(this, &FormRegistrarTreballador1::textBoxIdentificador_Enter);
			// 
			// enrrereButton
			// 
			this->enrrereButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->enrrereButton->BackColor = System::Drawing::Color::Salmon;
			this->enrrereButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enrrereButton->Location = System::Drawing::Point(118, 911);
			this->enrrereButton->Margin = System::Windows::Forms::Padding(2);
			this->enrrereButton->Name = L"enrrereButton";
			this->enrrereButton->Size = System::Drawing::Size(240, 70);
			this->enrrereButton->TabIndex = 15;
			this->enrrereButton->Text = L"Enrere";
			this->enrrereButton->UseVisualStyleBackColor = false;
			this->enrrereButton->Click += gcnew System::EventHandler(this, &FormRegistrarTreballador1::enrrereButton_Click);
			// 
			// buttonRegistrar
			// 
			this->buttonRegistrar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonRegistrar->BackColor = System::Drawing::Color::MediumAquamarine;
			this->buttonRegistrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRegistrar->Location = System::Drawing::Point(1608, 920);
			this->buttonRegistrar->Margin = System::Windows::Forms::Padding(2);
			this->buttonRegistrar->Name = L"buttonRegistrar";
			this->buttonRegistrar->Size = System::Drawing::Size(238, 70);
			this->buttonRegistrar->TabIndex = 16;
			this->buttonRegistrar->Text = L"Registrar";
			this->buttonRegistrar->UseVisualStyleBackColor = false;
			this->buttonRegistrar->Click += gcnew System::EventHandler(this, &FormRegistrarTreballador1::buttonRegistrar_Click);
			// 
			// GrupBoxTreballador
			// 
			this->GrupBoxTreballador->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GrupBoxTreballador->Controls->Add(this->label3);
			this->GrupBoxTreballador->Controls->Add(this->label1);
			this->GrupBoxTreballador->Controls->Add(this->label2);
			this->GrupBoxTreballador->Controls->Add(this->textBoxIdentificador);
			this->GrupBoxTreballador->Controls->Add(this->label5);
			this->GrupBoxTreballador->Controls->Add(this->textBoxContrasenya);
			this->GrupBoxTreballador->Controls->Add(this->textBoxNom);
			this->GrupBoxTreballador->Controls->Add(this->textBoxCorreu);
			this->GrupBoxTreballador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GrupBoxTreballador->Location = System::Drawing::Point(547, 300);
			this->GrupBoxTreballador->Margin = System::Windows::Forms::Padding(2);
			this->GrupBoxTreballador->Name = L"GrupBoxTreballador";
			this->GrupBoxTreballador->Padding = System::Windows::Forms::Padding(2);
			this->GrupBoxTreballador->Size = System::Drawing::Size(899, 406);
			this->GrupBoxTreballador->TabIndex = 0;
			this->GrupBoxTreballador->TabStop = false;
			this->GrupBoxTreballador->Text = L"Omple els següents camps per donar d\'alta un nou treballador";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1907, 1047);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// FormRegistrarTreballador1
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->GrupBoxTreballador);
			this->Controls->Add(this->buttonRegistrar);
			this->Controls->Add(this->enrrereButton);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormRegistrarTreballador1";
			this->Text = L"AirPlanner";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FormRegistrarTreballador1::FormRegistrarClient_Load);
			this->GrupBoxTreballador->ResumeLayout(false);
			this->GrupBoxTreballador->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void FormRegistrarClient_Load(System::Object^ sender, System::EventArgs^ e) {
		//Si fem tabulador, el primer element que es selecciona es el textBoxNom.
		this->textBoxNom->TabIndex = 0;     
		this->textBoxCorreu->TabIndex = 2;   
		this->textBoxContrasenya->TabIndex = 1;
		this->textBoxIdentificador->TabIndex = 3;
	}

		   // boto registr
		   // nom
	private: System::Void textBox_Nom(System::Object^ sender, System::EventArgs^ e) { //nom

		if (textBoxNom->Text == "Nom") {
			textBoxNom->Text = "";
		}
	}

		   // correu electronic
	private: System::Void textBoxCorreu_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxCorreu->Text == "Correu") { // textBoxCorreu->Text agafa la info com String^ i no com std::string
			textBoxCorreu->Text = "";
		}
	}
		   // contrasenya
	private: System::Void textBox2_Contrasenya(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxContrasenya->Text == "Contrasenya") {
			textBoxContrasenya->Text = "";
			textBoxContrasenya->PasswordChar = '*';
		}
	}

private: System::Void enrrereButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Launcher::Instance->formStack->Pop();
	this->Close(); // Cierra el formulario actual
}
private: System::Void buttonRegistrar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		std::string correu = msclr::interop::marshal_as<std::string>(textBoxCorreu->Text);
		std::string nom = msclr::interop::marshal_as<std::string>(textBoxNom->Text);
		std::string contrasenya = msclr::interop::marshal_as<std::string>(textBoxContrasenya->Text);

		std::string identificador = msclr::interop::marshal_as<std::string>(textBoxIdentificador->Text);

		// Verificar si la fecha seleccionada es mayor que hoy
		if (correu == "" || correu == "Correu") {
			MessageBox::Show("Error, el camp 'correu' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (nom == "" || nom == "Nom") {
			MessageBox::Show("Error, el camp 'nom' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (contrasenya == "" || contrasenya == "Contrasenya") {
			MessageBox::Show("Error, és perillòs anar sense contrasenya! Crea una.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (identificador == "" || identificador == "Identificador") {
			MessageBox::Show("Error, el camp 'Identificador' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}


		CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
		presentacio.processarRegistrarTreballador(correu, nom, contrasenya, identificador);
		MessageBox::Show("Has registrat correctament a un treballador. Ara podrà iniciar sessió des de la pantalla inicial.");
		Launcher::Instance->formStack->Pop();
		this->Close(); // Cierra el formulario actual

		
	}
	catch (Exception^ ex) {
		// Convertimos la excepci�n a una cadena para usarla en la comparaci�n
		String^ errorMsg = ex->Message;

		if (errorMsg->Contains("Duplicate entry")) {
			if (errorMsg->Contains("PRIMARY")) {
				MessageBox::Show("Error: El correu electonic ja existeix al sistema. Si us plau, tria un altre.",
					"Error de base de dades",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
			else if (errorMsg->Contains("UNIQUE")) {
				if (errorMsg->Contains("id")) {
					MessageBox::Show("Error: El ID ja esta registrat. Si us plau, prova amb un altre.",
						"Error de base de dades",
						MessageBoxButtons::OK,
						MessageBoxIcon::Error);
				}
				else if (errorMsg->Contains("correu_electronic")) {
					MessageBox::Show("Error: El correu electronic ja est� registrat. Si us plau, prova amb un altre.",
						"Error de base de dades",
						MessageBoxButtons::OK,
						MessageBoxIcon::Error);
				}
				else {
					MessageBox::Show("Error: S'ha product un error de unicitat en un camp no especificat.",
						"Error de base de dades",
						MessageBoxButtons::OK,
						MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("Error: Entrada duplicada.",
					"Error de base de dades",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
		}
		else if (errorMsg->Contains("Cannot add or update a child row") &&
			errorMsg->Contains("foreign key constraint fails")) {
			MessageBox::Show("Error: L'aeroport associat no existeix. Si us plau, enregistra'l abans d'afegir el treballador.",
				"Error de base de dades",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else {
			MessageBox::Show("Error inesperat: " + errorMsg,
				"Error de base de dades",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}

}
private: System::Void textBoxIdentificador_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxIdentificador->Text == "Identificador") {
		textBoxIdentificador->Text = "";
	}
}
};
}