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
	/// Summary for FormEsborraAerolinia
	/// </summary>
	public ref class FormEsborraAerolinia : public System::Windows::Forms::Form
	{
	public:
		FormEsborraAerolinia(void)
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
		~FormEsborraAerolinia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelTitulo;
	private: System::Windows::Forms::Label^ labelContrasenya;
	private: System::Windows::Forms::Label^ labelCorreo_Aerolinia;
	private: System::Windows::Forms::Button^ buttonCancelar;
	private: System::Windows::Forms::Button^ buttonAcceptar;
	private: System::Windows::Forms::TextBox^ textBoxContrasenya;
	private: System::Windows::Forms::TextBox^ textBoxCorreo_Aerolinia;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEsborraAerolinia::typeid));
			this->labelTitulo = (gcnew System::Windows::Forms::Label());
			this->labelContrasenya = (gcnew System::Windows::Forms::Label());
			this->labelCorreo_Aerolinia = (gcnew System::Windows::Forms::Label());
			this->buttonCancelar = (gcnew System::Windows::Forms::Button());
			this->buttonAcceptar = (gcnew System::Windows::Forms::Button());
			this->textBoxContrasenya = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCorreo_Aerolinia = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// labelTitulo
			// 
			this->labelTitulo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelTitulo->AutoEllipsis = true;
			this->labelTitulo->AutoSize = true;
			this->labelTitulo->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitulo->ForeColor = System::Drawing::Color::RoyalBlue;
			this->labelTitulo->Location = System::Drawing::Point(606, 103);
			this->labelTitulo->Name = L"labelTitulo";
			this->labelTitulo->Size = System::Drawing::Size(766, 97);
			this->labelTitulo->TabIndex = 2;
			this->labelTitulo->Text = L"Esborrar Aerolínia";
			// 
			// labelContrasenya
			// 
			this->labelContrasenya->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelContrasenya->AutoSize = true;
			this->labelContrasenya->BackColor = System::Drawing::SystemColors::ControlLight;
			this->labelContrasenya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelContrasenya->Location = System::Drawing::Point(616, 333);
			this->labelContrasenya->Name = L"labelContrasenya";
			this->labelContrasenya->Size = System::Drawing::Size(251, 42);
			this->labelContrasenya->TabIndex = 1;
			this->labelContrasenya->Text = L"Contrasenya :";
			// 
			// labelCorreo_Aerolinia
			// 
			this->labelCorreo_Aerolinia->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelCorreo_Aerolinia->AutoSize = true;
			this->labelCorreo_Aerolinia->BackColor = System::Drawing::SystemColors::ControlLight;
			this->labelCorreo_Aerolinia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCorreo_Aerolinia->Location = System::Drawing::Point(618, 451);
			this->labelCorreo_Aerolinia->Name = L"labelCorreo_Aerolinia";
			this->labelCorreo_Aerolinia->Size = System::Drawing::Size(249, 42);
			this->labelCorreo_Aerolinia->TabIndex = 2;
			this->labelCorreo_Aerolinia->Text = L"ID Aerolinia :  ";
			// 
			// buttonCancelar
			// 
			this->buttonCancelar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonCancelar->BackColor = System::Drawing::Color::Salmon;
			this->buttonCancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCancelar->Location = System::Drawing::Point(90, 899);
			this->buttonCancelar->Name = L"buttonCancelar";
			this->buttonCancelar->Size = System::Drawing::Size(244, 69);
			this->buttonCancelar->TabIndex = 3;
			this->buttonCancelar->Text = L"Cancelar";
			this->buttonCancelar->UseVisualStyleBackColor = false;
			this->buttonCancelar->Click += gcnew System::EventHandler(this, &FormEsborraAerolinia::buttonCancelar_Click);
			// 
			// buttonAcceptar
			// 
			this->buttonAcceptar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonAcceptar->BackColor = System::Drawing::Color::Tomato;
			this->buttonAcceptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAcceptar->Location = System::Drawing::Point(1565, 899);
			this->buttonAcceptar->Name = L"buttonAcceptar";
			this->buttonAcceptar->Size = System::Drawing::Size(230, 67);
			this->buttonAcceptar->TabIndex = 4;
			this->buttonAcceptar->Text = L"Esborrar";
			this->buttonAcceptar->UseVisualStyleBackColor = false;
			this->buttonAcceptar->Click += gcnew System::EventHandler(this, &FormEsborraAerolinia::buttonAcceptar_Click);
			// 
			// textBoxContrasenya
			// 
			this->textBoxContrasenya->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxContrasenya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxContrasenya->Location = System::Drawing::Point(1013, 344);
			this->textBoxContrasenya->Name = L"textBoxContrasenya";
			this->textBoxContrasenya->Size = System::Drawing::Size(347, 31);
			this->textBoxContrasenya->TabIndex = 5;
			this->textBoxContrasenya->Text = L"Contrasenya: ex 1234";
			this->textBoxContrasenya->Enter += gcnew System::EventHandler(this, &FormEsborraAerolinia::textBoxContrasenya_Enter);
			// 
			// textBoxCorreo_Aerolinia
			// 
			this->textBoxCorreo_Aerolinia->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxCorreo_Aerolinia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxCorreo_Aerolinia->Location = System::Drawing::Point(1013, 462);
			this->textBoxCorreo_Aerolinia->Name = L"textBoxCorreo_Aerolinia";
			this->textBoxCorreo_Aerolinia->Size = System::Drawing::Size(349, 31);
			this->textBoxCorreo_Aerolinia->TabIndex = 6;
			this->textBoxCorreo_Aerolinia->Text = L"ID Aerolinia: ej vueling@gmail.com";
			this->textBoxCorreo_Aerolinia->Enter += gcnew System::EventHandler(this, &FormEsborraAerolinia::textBoxCorreo_Aerolinia_Enter);
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
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(740, 615);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(429, 427);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// FormEsborraAerolinia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBoxCorreo_Aerolinia);
			this->Controls->Add(this->textBoxContrasenya);
			this->Controls->Add(this->buttonAcceptar);
			this->Controls->Add(this->buttonCancelar);
			this->Controls->Add(this->labelCorreo_Aerolinia);
			this->Controls->Add(this->labelContrasenya);
			this->Controls->Add(this->labelTitulo);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormEsborraAerolinia";
			this->Text = L"AirPlanner";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		private: System::Void textBoxCorreo_Aerolinia_Enter(System::Object^ sender, System::EventArgs^ e) {
			if (textBoxCorreo_Aerolinia->Text == "ID Aerolinia: ej vueling@gmail.com") {
				textBoxCorreo_Aerolinia->Text = "";
			}
		}
		

		private: System::Void textBoxContrasenya_Enter(System::Object^ sender, System::EventArgs^ e) {
			if (textBoxContrasenya->Text == "Contrasenya: ej 1234") {
				textBoxContrasenya->Text = "";
				textBoxContrasenya->PasswordChar = '*';
			}
		}



#pragma endregion
	private: System::Void buttonAcceptar_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			std::string ContrasenyaAdmin = msclr::interop::marshal_as<std::string>(textBoxContrasenya->Text);
			std::string AeroliniatID = msclr::interop::marshal_as<std::string>(textBoxCorreo_Aerolinia->Text);

			if (ContrasenyaAdmin == "" || ContrasenyaAdmin == "Contrasenya: ej 1234")
			{
				MessageBox::Show("Error, el camp 'contrasenya' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (AeroliniatID == "" || AeroliniatID == "ID Aerolinia : ej vueling@gmail.com")
			{
				MessageBox::Show("Error, el camp 'ID Aerolinia' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
			presentacio.processarEsborraAerolinea(ContrasenyaAdmin, AeroliniatID);

			MessageBox::Show("S'ha Eliminat correctament l'Aerolinia seleccionat");

		}
		catch(Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			Launcher::Instance->formStack->Pop();
			this->Close();
		}
	}
	
	private: System::Void buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Launcher::Instance->formStack->Pop();
		this->Close();
	}
};
}
