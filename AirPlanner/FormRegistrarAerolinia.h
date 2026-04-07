#pragma once
#include "CapaDePresentacio.h"
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
	/// Resumen de FormRegistrarAerolinia
	/// </summary>
	public ref class FormRegistrarAerolinia : public System::Windows::Forms::Form
	{
	public:
		FormRegistrarAerolinia(void)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormRegistrarAerolinia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Registrar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxCorreu;
	private: System::Windows::Forms::TextBox^ textBoxContrasenya;
	private: System::Windows::Forms::TextBox^ textBoxNom;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	protected:

	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormRegistrarAerolinia::typeid));
			this->Registrar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxCorreu = (gcnew System::Windows::Forms::TextBox());
			this->textBoxContrasenya = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Registrar
			// 
			this->Registrar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Registrar->BackColor = System::Drawing::Color::MediumAquamarine;
			this->Registrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Registrar->ForeColor = System::Drawing::Color::Black;
			this->Registrar->Location = System::Drawing::Point(1533, 911);
			this->Registrar->Margin = System::Windows::Forms::Padding(2);
			this->Registrar->Name = L"Registrar";
			this->Registrar->Size = System::Drawing::Size(233, 65);
			this->Registrar->TabIndex = 0;
			this->Registrar->Text = L"Registrar";
			this->Registrar->UseVisualStyleBackColor = false;
			this->Registrar->Click += gcnew System::EventHandler(this, &FormRegistrarAerolinia::button1_Click_1);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(801, 175);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(795, 97);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Registrar Aerolínia";
			this->label1->Click += gcnew System::EventHandler(this, &FormRegistrarAerolinia::label1_Click);
			// 
			// textBoxCorreu
			// 
			this->textBoxCorreu->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxCorreu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCorreu->Location = System::Drawing::Point(1169, 398);
			this->textBoxCorreu->Margin = System::Windows::Forms::Padding(2);
			this->textBoxCorreu->Name = L"textBoxCorreu";
			this->textBoxCorreu->Size = System::Drawing::Size(306, 38);
			this->textBoxCorreu->TabIndex = 2;
			this->textBoxCorreu->Text = L"Correu";
			this->textBoxCorreu->TextChanged += gcnew System::EventHandler(this, &FormRegistrarAerolinia::textBox1_TextChanged);
			this->textBoxCorreu->Enter += gcnew System::EventHandler(this, &FormRegistrarAerolinia::textBoxCorreu_Enter);
			// 
			// textBoxContrasenya
			// 
			this->textBoxContrasenya->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxContrasenya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxContrasenya->Location = System::Drawing::Point(1169, 529);
			this->textBoxContrasenya->Margin = System::Windows::Forms::Padding(2);
			this->textBoxContrasenya->Name = L"textBoxContrasenya";
			this->textBoxContrasenya->Size = System::Drawing::Size(306, 38);
			this->textBoxContrasenya->TabIndex = 3;
			this->textBoxContrasenya->Text = L"Contrasenya";
			this->textBoxContrasenya->Enter += gcnew System::EventHandler(this, &FormRegistrarAerolinia::textBox2_Contrasenya);
			// 
			// textBoxNom
			// 
			this->textBoxNom->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNom->Location = System::Drawing::Point(1169, 665);
			this->textBoxNom->Margin = System::Windows::Forms::Padding(2);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(306, 38);
			this->textBoxNom->TabIndex = 4;
			this->textBoxNom->Text = L"Nom";
			this->textBoxNom->Enter += gcnew System::EventHandler(this, &FormRegistrarAerolinia::textBox_Nom);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(117, 911);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 65);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Enrere";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormRegistrarAerolinia::button1_Click_2);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(904, 398);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 31);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Correu:";
			this->label2->Click += gcnew System::EventHandler(this, &FormRegistrarAerolinia::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(904, 536);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 31);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Contrasenya:";
			this->label3->Click += gcnew System::EventHandler(this, &FormRegistrarAerolinia::label3_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(904, 672);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 31);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Nom:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1920, 1080);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// FormRegistrarAerolinia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1920, 1061);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->textBoxContrasenya);
			this->Controls->Add(this->textBoxCorreu);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Registrar);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"FormRegistrarAerolinia";
			this->Text = L"AirPlanner";
			this->Load += gcnew System::EventHandler(this, &FormRegistrarAerolinia::FormRegistrarAerolinia_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		std::string correu = msclr::interop::marshal_as<std::string>(textBoxCorreu->Text);
		std::string nom = msclr::interop::marshal_as<std::string>(textBoxNom->Text);
		std::string contrasenya = msclr::interop::marshal_as<std::string>(textBoxContrasenya->Text);

		if (correu == "" || correu == "Correu") {
			MessageBox::Show("Error, el camp 'correu' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (nom == "" || nom == "Nom") {
			MessageBox::Show("Error, el camp 'nom' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (contrasenya == "" || contrasenya == "Contrasenya") {
			MessageBox::Show("Error, el camp 'contrasenya' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
		presentacio.processarRegistrarAerolinia(correu, contrasenya, nom);

		MessageBox::Show("Has registrat l'aerolinia correctament, ara aquest ha d'iniciar sessió per a accedir al seu compte");
		Launcher::Instance->formStack->Pop();
		this->Close(); // Cierra el formulario actual
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close(); // Cierra el formulario actual
	}
	private: System::Void FormRegistrarAerolinia_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}


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

	};
}
