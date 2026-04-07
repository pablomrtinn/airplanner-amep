#pragma once
#include "CapadePresentacio.h"
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
	/// Resumen de FormCrearPeticio
	/// </summary>
	public ref class FormCrearPeticio : public System::Windows::Forms::Form
	{
	public:
		FormCrearPeticio(void)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
			comboBoxModelAvio->SelectedIndex = 0;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormCrearPeticio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxIdVol;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxOrigen;
	private: System::Windows::Forms::TextBox^ textBoxDesti;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxPreu;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerSortida;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerArribada;

	private: System::Windows::Forms::ComboBox^ comboBoxModelAvio;
	private: System::Windows::Forms::Label^ titol;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormCrearPeticio::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxIdVol = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxOrigen = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDesti = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxPreu = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerSortida = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerArribada = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBoxModelAvio = (gcnew System::Windows::Forms::ComboBox());
			this->titol = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Tomato;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(52, 918);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 71);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Enrere";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormCrearPeticio::button1_Enrere);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1620, 930);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(230, 71);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Registrar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->UseWaitCursor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormCrearPeticio::button2_Registrar);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(83, 39);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(339, 36);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Número Identificació Vol";
			this->label2->UseWaitCursor = true;
			// 
			// textBoxIdVol
			// 
			this->textBoxIdVol->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxIdVol->Location = System::Drawing::Point(107, 85);
			this->textBoxIdVol->Margin = System::Windows::Forms::Padding(6);
			this->textBoxIdVol->Name = L"textBoxIdVol";
			this->textBoxIdVol->Size = System::Drawing::Size(259, 27);
			this->textBoxIdVol->TabIndex = 0;
			this->textBoxIdVol->Text = L"identificador";
			this->textBoxIdVol->UseWaitCursor = true;
			this->textBoxIdVol->Enter += gcnew System::EventHandler(this, &FormCrearPeticio::textBox_idVols);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(622, 137);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(251, 36);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Aeroport d\'Origen";
			this->label3->UseWaitCursor = true;
			// 
			// textBoxOrigen
			// 
			this->textBoxOrigen->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxOrigen->Location = System::Drawing::Point(627, 179);
			this->textBoxOrigen->Margin = System::Windows::Forms::Padding(6);
			this->textBoxOrigen->Name = L"textBoxOrigen";
			this->textBoxOrigen->Size = System::Drawing::Size(259, 27);
			this->textBoxOrigen->TabIndex = 10;
			this->textBoxOrigen->Text = L"sigles aeroport origen";
			this->textBoxOrigen->UseWaitCursor = true;
			this->textBoxOrigen->Enter += gcnew System::EventHandler(this, &FormCrearPeticio::textBox_origen);
			// 
			// textBoxDesti
			// 
			this->textBoxDesti->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxDesti->Location = System::Drawing::Point(107, 179);
			this->textBoxDesti->Margin = System::Windows::Forms::Padding(6);
			this->textBoxDesti->Name = L"textBoxDesti";
			this->textBoxDesti->Size = System::Drawing::Size(259, 27);
			this->textBoxDesti->TabIndex = 11;
			this->textBoxDesti->Text = L"sigles aeroport desti";
			this->textBoxDesti->UseWaitCursor = true;
			this->textBoxDesti->Enter += gcnew System::EventHandler(this, &FormCrearPeticio::textBox_desti);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(115, 137);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(247, 36);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Aeroport de Destí";
			this->label4->UseWaitCursor = true;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(597, 39);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(312, 36);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Preu promig del seient";
			this->label5->UseWaitCursor = true;
			// 
			// textBoxPreu
			// 
			this->textBoxPreu->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxPreu->Location = System::Drawing::Point(627, 85);
			this->textBoxPreu->Margin = System::Windows::Forms::Padding(6);
			this->textBoxPreu->Name = L"textBoxPreu";
			this->textBoxPreu->Size = System::Drawing::Size(259, 27);
			this->textBoxPreu->TabIndex = 14;
			this->textBoxPreu->Text = L"preu promig seient";
			this->textBoxPreu->UseWaitCursor = true;
			this->textBoxPreu->Enter += gcnew System::EventHandler(this, &FormCrearPeticio::textBox_preu);
			// 
			// dateTimePickerSortida
			// 
			this->dateTimePickerSortida->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePickerSortida->CustomFormat = L"yyyy-MM-dd HH:mm";
			this->dateTimePickerSortida->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePickerSortida->Location = System::Drawing::Point(103, 292);
			this->dateTimePickerSortida->Name = L"dateTimePickerSortida";
			this->dateTimePickerSortida->Size = System::Drawing::Size(259, 27);
			this->dateTimePickerSortida->TabIndex = 15;
			this->dateTimePickerSortida->UseWaitCursor = true;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(115, 253);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(225, 36);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Sortida Prevista";
			this->label6->UseWaitCursor = true;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(633, 253);
			this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(244, 36);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Arribada Prevista";
			this->label7->UseWaitCursor = true;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(399, 359);
			this->label8->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(165, 36);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Model Avió";
			this->label8->UseWaitCursor = true;
			// 
			// dateTimePickerArribada
			// 
			this->dateTimePickerArribada->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePickerArribada->CustomFormat = L"yyyy-MM-dd HH:mm";
			this->dateTimePickerArribada->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePickerArribada->Location = System::Drawing::Point(627, 292);
			this->dateTimePickerArribada->Name = L"dateTimePickerArribada";
			this->dateTimePickerArribada->Size = System::Drawing::Size(259, 27);
			this->dateTimePickerArribada->TabIndex = 19;
			this->dateTimePickerArribada->UseWaitCursor = true;
			// 
			// comboBoxModelAvio
			// 
			this->comboBoxModelAvio->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBoxModelAvio->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxModelAvio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBoxModelAvio->FormattingEnabled = true;
			this->comboBoxModelAvio->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"A320", L"A380", L"B747", L"B777" });
			this->comboBoxModelAvio->Location = System::Drawing::Point(358, 398);
			this->comboBoxModelAvio->Name = L"comboBoxModelAvio";
			this->comboBoxModelAvio->Size = System::Drawing::Size(259, 33);
			this->comboBoxModelAvio->TabIndex = 20;
			this->comboBoxModelAvio->UseWaitCursor = true;
			// 
			// titol
			// 
			this->titol->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->titol->AutoSize = true;
			this->titol->BackColor = System::Drawing::Color::Transparent;
			this->titol->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
			this->titol->ForeColor = System::Drawing::Color::RoyalBlue;
			this->titol->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->titol->Location = System::Drawing::Point(637, 121);
			this->titol->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->titol->Name = L"titol";
			this->titol->Size = System::Drawing::Size(682, 97);
			this->titol->TabIndex = 22;
			this->titol->Text = L"CREAR PETICIÓ";
			this->titol->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->titol->UseWaitCursor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox1->Location = System::Drawing::Point(-8, -20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1921, 1080);
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBoxModelAvio);
			this->groupBox1->Controls->Add(this->textBoxIdVol);
			this->groupBox1->Controls->Add(this->dateTimePickerArribada);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBoxOrigen);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBoxDesti);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->dateTimePickerSortida);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBoxPreu);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(473, 233);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(998, 474);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Crea una petició de vol";
			this->groupBox1->UseWaitCursor = true;
			// 
			// FormCrearPeticio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->titol);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(1023, 480);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"FormCrearPeticio";
			this->Text = L"AirPlanner";
			this->UseWaitCursor = true;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Enter += gcnew System::EventHandler(this, &FormCrearPeticio::textBox_idVols);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion	
	
	private: System::Void button1_Enrere(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}

	private: System::Void button2_Registrar(System::Object^ sender, System::EventArgs^ e) {

		try {
			std::string idVol = msclr::interop::marshal_as<std::string>(textBoxIdVol->Text);
			std::string origen = msclr::interop::marshal_as<std::string>(textBoxOrigen->Text);
			std::string desti = msclr::interop::marshal_as<std::string>(textBoxDesti->Text);

			float preu = Convert::ToSingle(textBoxPreu->Text, System::Globalization::CultureInfo::InvariantCulture);

			System::String^ seleccionat = safe_cast<System::String^>(this->comboBoxModelAvio->SelectedItem);
			std::string modelAvio = msclr::interop::marshal_as<std::string>(seleccionat);

			System::DateTime sortidaDateTime = dateTimePickerSortida->Value;
			System::DateTime arribadaDateTime = dateTimePickerArribada->Value;

			std::string sortida = msclr::interop::marshal_as<std::string>(sortidaDateTime.ToString("yyyy-MM-dd HH:mm:ss"));
			std::string arribada = msclr::interop::marshal_as<std::string>(arribadaDateTime.ToString("yyyy-MM-dd HH:mm:ss"));
			std::string dataSolicitud = msclr::interop::marshal_as<std::string>(System::DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));


			if (sortidaDateTime < System::DateTime::Now) {
				MessageBox::Show("Error, la data de sortida no pot ser inferior a avui.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (arribadaDateTime < System::DateTime::Now) {
				MessageBox::Show("Error, la data d'arribada no pot ser inferior a avui.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (arribadaDateTime < sortidaDateTime) {
				MessageBox::Show("Error, la data d'arribada no pot ser anterior a la de sortida.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (idVol == "" || idVol == "identificador") {
				MessageBox::Show("Error, el camp 'Número Identificació de Vol' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (origen == "" || origen == "sigles aeroport origen") {
				MessageBox::Show("Error, el camp 'Aeroport d'Origen' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (desti == "" || desti == "sigles aeroport desti") {
				MessageBox::Show("Error, el camp 'Aeroport de Desti' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if ( origen == desti ) {

				MessageBox::Show("Error, els camps 'Aeroport d'Origen' i 'Aeroport de Desti' no poden ser iguals.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (preu <= 0) {
				MessageBox::Show("Error, el camp 'Preu promig del seient' no pot ser inferior o igual a 0.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
			presentacio.processarCrearPeticioVol(idVol, origen, desti, sortida, arribada, preu, modelAvio, dataSolicitud);

			MessageBox::Show("La petició ha sigut enviada correctament a l'aeoroport indicat.");

			Launcher::Instance->formStack->Pop();
			this->Close(); // Cierra el formulario actual
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	// id Vol
	private: System::Void textBox_idVols(System::Object^ sender, System::EventArgs^ e) {

		if (textBoxIdVol->Text == "identificador") {
			textBoxIdVol->Text = "";
		}
	}
	private: System::Void textBox_origen(System::Object^ sender, System::EventArgs^ e) {

		if (textBoxOrigen->Text == "sigles aeroport origen") {
			textBoxOrigen->Text = "";
		}
	}
	private: System::Void textBox_desti(System::Object^ sender, System::EventArgs^ e) {

		if (textBoxDesti->Text == "sigles aeroport desti") {
			textBoxDesti->Text = "";
		}
	}
	private: System::Void textBox_preu(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPreu->Text == "preu promig seient") {
			textBoxPreu->Text = "";
		}
	}
};
}


