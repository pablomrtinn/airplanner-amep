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
	/// Resumen de FormEsborraTreballador
	/// </summary>
	public ref class FormEsborraTreballador : public System::Windows::Forms::Form
	{
	public:
		FormEsborraTreballador(void)
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
		~FormEsborraTreballador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ EsborrarTreballadorButton;
	private: System::Windows::Forms::TextBox^ CorreuTextBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ GrupBoxTreballador;
	private: System::Windows::Forms::PictureBox^ pictureBox1;









	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEsborraTreballador::typeid));
			this->EsborrarTreballadorButton = (gcnew System::Windows::Forms::Button());
			this->CorreuTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->GrupBoxTreballador = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->GrupBoxTreballador->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// EsborrarTreballadorButton
			// 
			this->EsborrarTreballadorButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->EsborrarTreballadorButton->BackColor = System::Drawing::Color::MediumAquamarine;
			this->EsborrarTreballadorButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->EsborrarTreballadorButton->Location = System::Drawing::Point(1649, 917);
			this->EsborrarTreballadorButton->Margin = System::Windows::Forms::Padding(2);
			this->EsborrarTreballadorButton->Name = L"EsborrarTreballadorButton";
			this->EsborrarTreballadorButton->Size = System::Drawing::Size(195, 68);
			this->EsborrarTreballadorButton->TabIndex = 0;
			this->EsborrarTreballadorButton->Text = L"Esborrar";
			this->EsborrarTreballadorButton->UseVisualStyleBackColor = false;
			this->EsborrarTreballadorButton->Click += gcnew System::EventHandler(this, &FormEsborraTreballador::esborraTreballador_Click);
			// 
			// CorreuTextBox
			// 
			this->CorreuTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->CorreuTextBox->Location = System::Drawing::Point(326, 153);
			this->CorreuTextBox->Margin = System::Windows::Forms::Padding(2);
			this->CorreuTextBox->Name = L"CorreuTextBox";
			this->CorreuTextBox->Size = System::Drawing::Size(444, 30);
			this->CorreuTextBox->TabIndex = 1;
			this->CorreuTextBox->Text = L"Correu Treballador";
			this->CorreuTextBox->Enter += gcnew System::EventHandler(this, &FormEsborraTreballador::CorreuTextBox_Enter);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(619, 174);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(869, 97);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Esborrar Treballador";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(47, 153);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Correu del Treballador:";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(97, 917);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 68);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Enrere";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormEsborraTreballador::enrere_Click);
			// 
			// GrupBoxTreballador
			// 
			this->GrupBoxTreballador->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GrupBoxTreballador->Controls->Add(this->label2);
			this->GrupBoxTreballador->Controls->Add(this->CorreuTextBox);
			this->GrupBoxTreballador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GrupBoxTreballador->Location = System::Drawing::Point(636, 348);
			this->GrupBoxTreballador->Margin = System::Windows::Forms::Padding(2);
			this->GrupBoxTreballador->Name = L"GrupBoxTreballador";
			this->GrupBoxTreballador->Padding = System::Windows::Forms::Padding(2);
			this->GrupBoxTreballador->Size = System::Drawing::Size(852, 311);
			this->GrupBoxTreballador->TabIndex = 5;
			this->GrupBoxTreballador->TabStop = false;
			this->GrupBoxTreballador->Text = L"Omple els següents camps per donar de baixa un treballador";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1920, 1067);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// FormEsborraTreballador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1920, 1061);
			this->Controls->Add(this->GrupBoxTreballador);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->EsborrarTreballadorButton);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"FormEsborraTreballador";
			this->Text = L"AirPlanner";
			this->GrupBoxTreballador->ResumeLayout(false);
			this->GrupBoxTreballador->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void esborraTreballador_Click(System::Object^ sender, System::EventArgs^ e) {
		string correu = msclr::interop::marshal_as<std::string>(CorreuTextBox->Text);
		if (correu == "") {
			MessageBox::Show("Introdueix un correu", "Esborrar Treballador", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else if (correu == "Correu Treballador") {
			MessageBox::Show("Error: El camp 'Correu Treballador' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			try {
				CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
				presentacio.processarEsborraTreballador(correu);
				MessageBox::Show("Treballador esborrat correctament!", "Treballador Esborrat", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void CorreuTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (CorreuTextBox->Text == "Correu Treballador") {
			CorreuTextBox->Text = "";
		}
	}
	private: System::Void enrere_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}

};
}
