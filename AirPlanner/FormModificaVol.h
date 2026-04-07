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
	/// Resumen de FormModificaVol
	/// </summary>
	public ref class FormModificaVol : public System::Windows::Forms::Form
	{
	public:
		FormModificaVol(void)
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
		~FormModificaVol()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ModificaButton;
	private: System::Windows::Forms::Button^ EnrereButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ IDtextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxOrigen;
	private: System::Windows::Forms::TextBox^ textBoxDesti;
	private: System::Windows::Forms::TextBox^ textBoxModelAvio;
	private: System::Windows::Forms::TextBox^ textBoxPreu;
	private: System::Windows::Forms::DateTimePicker^ dateTimeSortidaP;
	private: System::Windows::Forms::DateTimePicker^ dateTimeArribadaP;
	private: System::Windows::Forms::DateTimePicker^ dateTimeSortidaA;
	private: System::Windows::Forms::DateTimePicker^ dateTimeArribadaA;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ GrupBoxTreballador;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormModificaVol::typeid));
			this->ModificaButton = (gcnew System::Windows::Forms::Button());
			this->EnrereButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->IDtextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxOrigen = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDesti = (gcnew System::Windows::Forms::TextBox());
			this->textBoxModelAvio = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPreu = (gcnew System::Windows::Forms::TextBox());
			this->dateTimeSortidaP = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimeArribadaP = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimeSortidaA = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimeArribadaA = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->GrupBoxTreballador = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->GrupBoxTreballador->SuspendLayout();
			this->SuspendLayout();
			// 
			// ModificaButton
			// 
			this->ModificaButton->BackColor = System::Drawing::Color::MediumAquamarine;
			this->ModificaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->ModificaButton->Location = System::Drawing::Point(1601, 876);
			this->ModificaButton->Margin = System::Windows::Forms::Padding(2);
			this->ModificaButton->Name = L"ModificaButton";
			this->ModificaButton->Size = System::Drawing::Size(230, 71);
			this->ModificaButton->TabIndex = 0;
			this->ModificaButton->Text = L"Modifica";
			this->ModificaButton->UseVisualStyleBackColor = false;
			this->ModificaButton->Click += gcnew System::EventHandler(this, &FormModificaVol::ModificaVol_Click);
			// 
			// EnrereButton
			// 
			this->EnrereButton->BackColor = System::Drawing::Color::Salmon;
			this->EnrereButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->EnrereButton->Location = System::Drawing::Point(88, 876);
			this->EnrereButton->Margin = System::Windows::Forms::Padding(2);
			this->EnrereButton->Name = L"EnrereButton";
			this->EnrereButton->Size = System::Drawing::Size(230, 71);
			this->EnrereButton->TabIndex = 1;
			this->EnrereButton->Text = L"Enrere";
			this->EnrereButton->UseVisualStyleBackColor = false;
			this->EnrereButton->Click += gcnew System::EventHandler(this, &FormModificaVol::EnrereButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(599, 136);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(653, 97);
			this->label1->TabIndex = 2;
			this->label1->Text = L"MODIFICA VOL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label2->Location = System::Drawing::Point(609, 302);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(425, 39);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Id Vol que es vol modificar:";
			// 
			// IDtextBox
			// 
			this->IDtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->IDtextBox->Location = System::Drawing::Point(1083, 304);
			this->IDtextBox->Margin = System::Windows::Forms::Padding(2);
			this->IDtextBox->Name = L"IDtextBox";
			this->IDtextBox->Size = System::Drawing::Size(200, 38);
			this->IDtextBox->TabIndex = 4;
			this->IDtextBox->Text = L"ID Vol";
			this->IDtextBox->Enter += gcnew System::EventHandler(this, &FormModificaVol::IDtextBox_Enter);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->Location = System::Drawing::Point(228, 45);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 31);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Origen:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->Location = System::Drawing::Point(246, 102);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 31);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Destí:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label5->Location = System::Drawing::Point(71, 159);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(260, 31);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Sortida programada:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label6->Location = System::Drawing::Point(55, 218);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(276, 31);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Arribada programada:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label7->Location = System::Drawing::Point(585, 159);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(261, 31);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Sortida actualitzada:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label8->Location = System::Drawing::Point(569, 217);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(277, 31);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Arribada actualitzada:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label9->Location = System::Drawing::Point(767, 45);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 31);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Preu:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label10->Location = System::Drawing::Point(694, 102);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(152, 31);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Model avió:";
			// 
			// textBoxOrigen
			// 
			this->textBoxOrigen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBoxOrigen->Location = System::Drawing::Point(345, 48);
			this->textBoxOrigen->Margin = System::Windows::Forms::Padding(2);
			this->textBoxOrigen->Name = L"textBoxOrigen";
			this->textBoxOrigen->Size = System::Drawing::Size(200, 30);
			this->textBoxOrigen->TabIndex = 13;
			this->textBoxOrigen->Text = L"Origen";
			this->textBoxOrigen->Enter += gcnew System::EventHandler(this, &FormModificaVol::textBoxOrigen_Enter);
			// 
			// textBoxDesti
			// 
			this->textBoxDesti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBoxDesti->Location = System::Drawing::Point(345, 105);
			this->textBoxDesti->Margin = System::Windows::Forms::Padding(2);
			this->textBoxDesti->Name = L"textBoxDesti";
			this->textBoxDesti->Size = System::Drawing::Size(200, 30);
			this->textBoxDesti->TabIndex = 14;
			this->textBoxDesti->Text = L"Destí";
			this->textBoxDesti->Enter += gcnew System::EventHandler(this, &FormModificaVol::textBoxDesti_Enter);
			// 
			// textBoxModelAvio
			// 
			this->textBoxModelAvio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBoxModelAvio->Location = System::Drawing::Point(861, 105);
			this->textBoxModelAvio->Margin = System::Windows::Forms::Padding(2);
			this->textBoxModelAvio->Name = L"textBoxModelAvio";
			this->textBoxModelAvio->Size = System::Drawing::Size(200, 30);
			this->textBoxModelAvio->TabIndex = 20;
			this->textBoxModelAvio->Text = L"Model Avió";
			this->textBoxModelAvio->Enter += gcnew System::EventHandler(this, &FormModificaVol::textBoxModelAvio_Enter);
			// 
			// textBoxPreu
			// 
			this->textBoxPreu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBoxPreu->Location = System::Drawing::Point(861, 48);
			this->textBoxPreu->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPreu->Name = L"textBoxPreu";
			this->textBoxPreu->Size = System::Drawing::Size(200, 30);
			this->textBoxPreu->TabIndex = 19;
			this->textBoxPreu->Enter += gcnew System::EventHandler(this, &FormModificaVol::textBoxPreu_Enter);
			// 
			// dateTimeSortidaP
			// 
			this->dateTimeSortidaP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dateTimeSortidaP->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->dateTimeSortidaP->CustomFormat = L"yyyy-MM-dd HH:mm";
			this->dateTimeSortidaP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->dateTimeSortidaP->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimeSortidaP->Location = System::Drawing::Point(345, 159);
			this->dateTimeSortidaP->Name = L"dateTimeSortidaP";
			this->dateTimeSortidaP->Size = System::Drawing::Size(200, 30);
			this->dateTimeSortidaP->TabIndex = 21;
			// 
			// dateTimeArribadaP
			// 
			this->dateTimeArribadaP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dateTimeArribadaP->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->dateTimeArribadaP->CustomFormat = L"yyyy-MM-dd HH:mm";
			this->dateTimeArribadaP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->dateTimeArribadaP->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimeArribadaP->Location = System::Drawing::Point(345, 218);
			this->dateTimeArribadaP->Name = L"dateTimeArribadaP";
			this->dateTimeArribadaP->Size = System::Drawing::Size(200, 30);
			this->dateTimeArribadaP->TabIndex = 22;
			// 
			// dateTimeSortidaA
			// 
			this->dateTimeSortidaA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dateTimeSortidaA->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->dateTimeSortidaA->CustomFormat = L"yyyy-MM-dd HH:mm";
			this->dateTimeSortidaA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->dateTimeSortidaA->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimeSortidaA->Location = System::Drawing::Point(861, 160);
			this->dateTimeSortidaA->Name = L"dateTimeSortidaA";
			this->dateTimeSortidaA->Size = System::Drawing::Size(200, 30);
			this->dateTimeSortidaA->TabIndex = 23;
			// 
			// dateTimeArribadaA
			// 
			this->dateTimeArribadaA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dateTimeArribadaA->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->dateTimeArribadaA->CustomFormat = L"yyyy-MM-dd HH:mm";
			this->dateTimeArribadaA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->dateTimeArribadaA->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimeArribadaA->Location = System::Drawing::Point(861, 219);
			this->dateTimeArribadaA->Name = L"dateTimeArribadaA";
			this->dateTimeArribadaA->Size = System::Drawing::Size(200, 30);
			this->dateTimeArribadaA->TabIndex = 24;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1920, 1080);
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// GrupBoxTreballador
			// 
			this->GrupBoxTreballador->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GrupBoxTreballador->Controls->Add(this->textBoxOrigen);
			this->GrupBoxTreballador->Controls->Add(this->dateTimeArribadaA);
			this->GrupBoxTreballador->Controls->Add(this->label3);
			this->GrupBoxTreballador->Controls->Add(this->label8);
			this->GrupBoxTreballador->Controls->Add(this->dateTimeSortidaA);
			this->GrupBoxTreballador->Controls->Add(this->textBoxDesti);
			this->GrupBoxTreballador->Controls->Add(this->label10);
			this->GrupBoxTreballador->Controls->Add(this->label7);
			this->GrupBoxTreballador->Controls->Add(this->textBoxModelAvio);
			this->GrupBoxTreballador->Controls->Add(this->dateTimeArribadaP);
			this->GrupBoxTreballador->Controls->Add(this->textBoxPreu);
			this->GrupBoxTreballador->Controls->Add(this->label4);
			this->GrupBoxTreballador->Controls->Add(this->dateTimeSortidaP);
			this->GrupBoxTreballador->Controls->Add(this->label9);
			this->GrupBoxTreballador->Controls->Add(this->label5);
			this->GrupBoxTreballador->Controls->Add(this->label6);
			this->GrupBoxTreballador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GrupBoxTreballador->Location = System::Drawing::Point(413, 398);
			this->GrupBoxTreballador->Margin = System::Windows::Forms::Padding(2);
			this->GrupBoxTreballador->Name = L"GrupBoxTreballador";
			this->GrupBoxTreballador->Padding = System::Windows::Forms::Padding(2);
			this->GrupBoxTreballador->Size = System::Drawing::Size(1170, 310);
			this->GrupBoxTreballador->TabIndex = 26;
			this->GrupBoxTreballador->TabStop = false;
			this->GrupBoxTreballador->Text = L"Omple els següents camps que vulguis modificar del vol";
			// 
			// FormModificaVol
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->GrupBoxTreballador);
			this->Controls->Add(this->IDtextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->EnrereButton);
			this->Controls->Add(this->ModificaButton);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"FormModificaVol";
			this->Text = L"Modifica Vol";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->GrupBoxTreballador->ResumeLayout(false);
			this->GrupBoxTreballador->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ModificaVol_Click(System::Object^ sender, System::EventArgs^ e) {

		try {

			string idVol = msclr::interop::marshal_as<std::string>(IDtextBox->Text);	
			string origen = msclr::interop::marshal_as<std::string>(textBoxOrigen->Text);
			string desti = msclr::interop::marshal_as<std::string>(textBoxDesti->Text);

			System::DateTime sortidaPDateTime = dateTimeSortidaP->Value;
			System::DateTime arribadaPDateTime = dateTimeArribadaP->Value;

			string sortidaP = msclr::interop::marshal_as<std::string>(sortidaPDateTime.ToString("yyyy-MM-dd HH:mm:ss"));
			string arribadaP = msclr::interop::marshal_as<std::string>(arribadaPDateTime.ToString("yyyy-MM-dd HH:mm:ss"));

			System::DateTime sortidaADateTime = dateTimeSortidaA->Value;
			System::DateTime arribadaADateTime = dateTimeArribadaA->Value;

			string sortidaA = msclr::interop::marshal_as<std::string>(sortidaADateTime.ToString("yyyy-MM-dd HH:mm:ss"));
			string arribadaA = msclr::interop::marshal_as<std::string>(arribadaADateTime.ToString("yyyy-MM-dd HH:mm:ss"));

			string temp = msclr::interop::marshal_as<std::string>(textBoxPreu->Text);

			double preu = -1.0;
			if (temp != "") preu = std::stod(temp);

			string modelAvio = msclr::interop::marshal_as<std::string>(textBoxModelAvio->Text);

			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();

			if (idVol == "" || idVol == "ID Vol") throw gcnew Exception("El camp ID Vol no pot estar buit!");

			if (origen == "Origen") origen = "";
			if (desti == "Destí") origen = "";
			if (modelAvio == "Model Avió") modelAvio = "";


			presentacio.processarModificaVol(idVol, origen, desti, sortidaP, arribadaP, sortidaA, arribadaA, preu, modelAvio);
			MessageBox::Show("Vol modificat correctament!", "Vol Modificar", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Launcher::Instance->formStack->Pop();
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}

	private: System::Void EnrereButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}

	private: System::Void IDtextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (IDtextBox->Text == "ID Vol") {
			IDtextBox->Text = "";
		}
	}
	private: System::Void textBoxOrigen_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxOrigen->Text == "Origen") {
			textBoxOrigen->Text = "";
		}
	}
	private: System::Void textBoxDesti_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxDesti->Text == "Destí") {
			textBoxDesti->Text = "";
		}
	}

	private: System::Void textBoxPreu_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPreu->Text == "Preu") {
			textBoxPreu->Text = "";
		}
	}
	private: System::Void textBoxModelAvio_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxModelAvio->Text == "Model Avió") {
			textBoxModelAvio->Text = "";
		}
	}
};
}
