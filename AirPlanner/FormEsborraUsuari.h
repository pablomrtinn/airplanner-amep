#pragma once
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
	/// Resumen de FormTancarSessio
	/// </summary>
	public ref class FormEsborraUsuari : public System::Windows::Forms::Form
	{
	public:
		FormEsborraUsuari(void)
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
		~FormEsborraUsuari()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonEsborraUsuari;
	private: System::Windows::Forms::Button^ buttonEnrere;
	private: System::Windows::Forms::TextBox^ textBoxContrasenya;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEsborraUsuari::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonEsborraUsuari = (gcnew System::Windows::Forms::Button());
			this->buttonEnrere = (gcnew System::Windows::Forms::Button());
			this->textBoxContrasenya = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::LightCoral;
			this->label1->Location = System::Drawing::Point(550, 213);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(832, 97);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ESBORRAR USUARI";
			// 
			// buttonEsborraUsuari
			// 
			this->buttonEsborraUsuari->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonEsborraUsuari->BackColor = System::Drawing::Color::Salmon;
			this->buttonEsborraUsuari->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonEsborraUsuari->Location = System::Drawing::Point(1560, 910);
			this->buttonEsborraUsuari->Name = L"buttonEsborraUsuari";
			this->buttonEsborraUsuari->Size = System::Drawing::Size(307, 89);
			this->buttonEsborraUsuari->TabIndex = 1;
			this->buttonEsborraUsuari->Text = L"Esborrar Usuari";
			this->buttonEsborraUsuari->UseVisualStyleBackColor = false;
			this->buttonEsborraUsuari->Click += gcnew System::EventHandler(this, &FormEsborraUsuari::buttonEsborraUsuari_Click);
			// 
			// buttonEnrere
			// 
			this->buttonEnrere->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonEnrere->BackColor = System::Drawing::Color::Salmon;
			this->buttonEnrere->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEnrere->Location = System::Drawing::Point(28, 910);
			this->buttonEnrere->Name = L"buttonEnrere";
			this->buttonEnrere->Size = System::Drawing::Size(230, 89);
			this->buttonEnrere->TabIndex = 2;
			this->buttonEnrere->Text = L"Enrere";
			this->buttonEnrere->UseVisualStyleBackColor = false;
			this->buttonEnrere->Click += gcnew System::EventHandler(this, &FormEsborraUsuari::buttonEnrere_Click);
			// 
			// textBoxContrasenya
			// 
			this->textBoxContrasenya->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxContrasenya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxContrasenya->Location = System::Drawing::Point(163, 110);
			this->textBoxContrasenya->Name = L"textBoxContrasenya";
			this->textBoxContrasenya->Size = System::Drawing::Size(536, 47);
			this->textBoxContrasenya->TabIndex = 13;
			this->textBoxContrasenya->Text = L"Contrasenya";
			this->textBoxContrasenya->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxContrasenya->Enter += gcnew System::EventHandler(this, &FormEsborraUsuari::textBox2_Contrasenya);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(318, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(214, 39);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Contrasenya";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBoxContrasenya);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(567, 313);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(798, 209);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entra la teva contrasenya i esborra el teu compte... si ho fas, et trobarem molt "
				L"a faltar";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-7, -32);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1930, 1095);
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// FormEsborraUsuari
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttonEnrere);
			this->Controls->Add(this->buttonEsborraUsuari);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormEsborraUsuari";
			this->Text = L"AirPlanner";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonEsborraUsuari_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			std::string contrasenya = msclr::interop::marshal_as<std::string>(textBoxContrasenya->Text);

			// Verificar si la fecha seleccionada es mayor que hoy

			if (contrasenya == "" || contrasenya == "Contrasenya") {
				MessageBox::Show("Error, el camp 'contrasenya' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();

			presentacio.processarEsborraClient(contrasenya, "");
			Launcher::Instance->formStack->Pop();
			this->Close(); // Cierra el formulario actual

			MessageBox::Show("Et trobarem a faltar... El teu compte s'ha esborrat correctament.");

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void buttonEnrere_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}
	private: System::Void textBox2_Contrasenya(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxContrasenya->Text == "Contrasenya") {
			textBoxContrasenya->Text = "";
			textBoxContrasenya->PasswordChar = '*';
		}
	}
};
}
