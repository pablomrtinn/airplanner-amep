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
	/// Summary for FormEsborraAeroport
	/// </summary>
	public ref class FormEsborraAeroport : public System::Windows::Forms::Form
	{
	public:
		FormEsborraAeroport(void)
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
		~FormEsborraAeroport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelContrasenya;
	private: System::Windows::Forms::Label^ labelID;
	private: System::Windows::Forms::Label^ labelTitulo;
	private: System::Windows::Forms::Button^ buttonAcceptar;
	private: System::Windows::Forms::Button^ buttonVolver;
	private: System::Windows::Forms::TextBox^ textBoxContrasenya;
	private: System::Windows::Forms::TextBox^ textBoxID;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEsborraAeroport::typeid));
			this->labelContrasenya = (gcnew System::Windows::Forms::Label());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->labelTitulo = (gcnew System::Windows::Forms::Label());
			this->buttonAcceptar = (gcnew System::Windows::Forms::Button());
			this->buttonVolver = (gcnew System::Windows::Forms::Button());
			this->textBoxContrasenya = (gcnew System::Windows::Forms::TextBox());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// labelContrasenya
			// 
			this->labelContrasenya->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelContrasenya->AutoSize = true;
			this->labelContrasenya->BackColor = System::Drawing::SystemColors::ControlLight;
			this->labelContrasenya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelContrasenya->Location = System::Drawing::Point(519, 318);
			this->labelContrasenya->Name = L"labelContrasenya";
			this->labelContrasenya->Size = System::Drawing::Size(291, 42);
			this->labelContrasenya->TabIndex = 1;
			this->labelContrasenya->Text = L"Contrasenya:     ";
			// 
			// labelID
			// 
			this->labelID->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelID->AutoSize = true;
			this->labelID->BackColor = System::Drawing::SystemColors::ControlLight;
			this->labelID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelID->Location = System::Drawing::Point(519, 473);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(293, 42);
			this->labelID->TabIndex = 2;
			this->labelID->Text = L"Sigles Aeroport: ";
			// 
			// labelTitulo
			// 
			this->labelTitulo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelTitulo->AutoSize = true;
			this->labelTitulo->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitulo->ForeColor = System::Drawing::Color::RoyalBlue;
			this->labelTitulo->Location = System::Drawing::Point(555, 99);
			this->labelTitulo->Name = L"labelTitulo";
			this->labelTitulo->Size = System::Drawing::Size(727, 97);
			this->labelTitulo->TabIndex = 2;
			this->labelTitulo->Text = L"Esborra Aeroport";
			// 
			// buttonAcceptar
			// 
			this->buttonAcceptar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonAcceptar->BackColor = System::Drawing::Color::Tomato;
			this->buttonAcceptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAcceptar->Location = System::Drawing::Point(1632, 935);
			this->buttonAcceptar->Name = L"buttonAcceptar";
			this->buttonAcceptar->Size = System::Drawing::Size(202, 63);
			this->buttonAcceptar->TabIndex = 4;
			this->buttonAcceptar->Text = L"Esborrar";
			this->buttonAcceptar->UseVisualStyleBackColor = false;
			this->buttonAcceptar->Click += gcnew System::EventHandler(this, &FormEsborraAeroport::buttonAcceptar_Click);
			// 
			// buttonVolver
			// 
			this->buttonVolver->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonVolver->BackColor = System::Drawing::Color::Salmon;
			this->buttonVolver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonVolver->Location = System::Drawing::Point(93, 935);
			this->buttonVolver->Name = L"buttonVolver";
			this->buttonVolver->Size = System::Drawing::Size(204, 63);
			this->buttonVolver->TabIndex = 3;
			this->buttonVolver->Text = L"Cancelar";
			this->buttonVolver->UseVisualStyleBackColor = false;
			this->buttonVolver->Click += gcnew System::EventHandler(this, &FormEsborraAeroport::buttonCancelar_Click);
			// 
			// textBoxContrasenya
			// 
			this->textBoxContrasenya->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxContrasenya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxContrasenya->Location = System::Drawing::Point(949, 330);
			this->textBoxContrasenya->Name = L"textBoxContrasenya";
			this->textBoxContrasenya->Size = System::Drawing::Size(347, 31);
			this->textBoxContrasenya->TabIndex = 5;
			this->textBoxContrasenya->Text = L"Contrasenya";
			this->textBoxContrasenya->Enter += gcnew System::EventHandler(this, &FormEsborraAeroport::textBoxContrasenya_Enter);
			// 
			// textBoxID
			// 
			this->textBoxID->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxID->Location = System::Drawing::Point(947, 484);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(349, 31);
			this->textBoxID->TabIndex = 6;
			this->textBoxID->Text = L"Sigles: ej(BNC)";
			this->textBoxID->Enter += gcnew System::EventHandler(this, &FormEsborraAeroport::textBoxID_Enter);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1921, 1080);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(691, 634);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(429, 427);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			// 
			// FormEsborraAeroport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1920, 1061);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->textBoxContrasenya);
			this->Controls->Add(this->buttonVolver);
			this->Controls->Add(this->buttonAcceptar);
			this->Controls->Add(this->labelTitulo);
			this->Controls->Add(this->labelID);
			this->Controls->Add(this->labelContrasenya);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormEsborraAeroport";
			this->Text = L"AirPlanner";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void textBoxID_Enter(System::Object^ sender, System::EventArgs^ e) {
			if (textBoxID->Text == "Sigles: ej(BNC)") {
				textBoxID->Text = "";
			}
		}

		private: System::Void textBoxContrasenya_Enter(System::Object^ sender, System::EventArgs^ e) {
			if (textBoxContrasenya->Text == "Contrasenya") {
				textBoxContrasenya->Text = "";
				textBoxContrasenya->PasswordChar = '*';
			}
		}


		private: System::Void buttonAcceptar_Click(System::Object^ sender, System::EventArgs^ e)
		{
			try 
			{
				std::string ContrasenyaAdmin = msclr::interop::marshal_as<std::string>(textBoxContrasenya->Text);
				std::string AeroportID = msclr::interop::marshal_as<std::string>(textBoxID->Text);

				if (ContrasenyaAdmin == "" || ContrasenyaAdmin == "Contrasenya")
				{
					MessageBox::Show("Error, el camp 'Contraseny' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				else if (AeroportID =="" || AeroportID == "Sigles: ej(BNC)")
				{
					MessageBox::Show("Error, el camp 'Sigles' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
				presentacio.processarEsborraAeroport(ContrasenyaAdmin, AeroportID);

				MessageBox::Show("S'ha Eliminat correctament l'Aeroport seleccionat");
			}
			catch (Exception^ ex) 
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
