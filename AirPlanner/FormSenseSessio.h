#pragma once
#include "FormIniciaSessio.h"
#include "FormRegistrarClient.h"
#include "FormModificaTreballador.h"
#include "FormRegistrarTreballador1.h"
#include "FormBuscarVols.h"
#include "Launcher.h"


namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FormSenseSessio : public System::Windows::Forms::Form
	{
	public:
		FormSenseSessio(void)
		{
			InitializeComponent();
		}

	protected:
		~FormSenseSessio()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ buttonIniciaSessio;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonRegistraSessio;
	private: System::Windows::Forms::Button^ buttonEnrere;
	private: System::Windows::Forms::Button^ buscarVols;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;




	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormSenseSessio::typeid));
			this->buttonIniciaSessio = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonRegistraSessio = (gcnew System::Windows::Forms::Button());
			this->buttonEnrere = (gcnew System::Windows::Forms::Button());
			this->buscarVols = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonIniciaSessio
			// 
			this->buttonIniciaSessio->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonIniciaSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->buttonIniciaSessio->Location = System::Drawing::Point(233, 54);
			this->buttonIniciaSessio->Margin = System::Windows::Forms::Padding(2);
			this->buttonIniciaSessio->Name = L"buttonIniciaSessio";
			this->buttonIniciaSessio->Size = System::Drawing::Size(418, 106);
			this->buttonIniciaSessio->TabIndex = 0;
			this->buttonIniciaSessio->Text = L"Inicia Sessió";
			this->buttonIniciaSessio->UseVisualStyleBackColor = true;
			this->buttonIniciaSessio->Click += gcnew System::EventHandler(this, &FormSenseSessio::buttonIniciaSessio_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(662, 192);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(764, 97);
			this->label1->TabIndex = 1;
			this->label1->Text = L"MENÚ PRINCIPAL";
			// 
			// buttonRegistraSessio
			// 
			this->buttonRegistraSessio->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonRegistraSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->buttonRegistraSessio->Location = System::Drawing::Point(233, 195);
			this->buttonRegistraSessio->Margin = System::Windows::Forms::Padding(2);
			this->buttonRegistraSessio->Name = L"buttonRegistraSessio";
			this->buttonRegistraSessio->Size = System::Drawing::Size(418, 106);
			this->buttonRegistraSessio->TabIndex = 2;
			this->buttonRegistraSessio->Text = L"Registra\'t";
			this->buttonRegistraSessio->UseVisualStyleBackColor = true;
			this->buttonRegistraSessio->Click += gcnew System::EventHandler(this, &FormSenseSessio::buttonRegistraSessio_Click);
			// 
			// buttonEnrere
			// 
			this->buttonEnrere->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonEnrere->BackColor = System::Drawing::Color::Salmon;
			this->buttonEnrere->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->buttonEnrere->Location = System::Drawing::Point(117, 879);
			this->buttonEnrere->Margin = System::Windows::Forms::Padding(2);
			this->buttonEnrere->Name = L"buttonEnrere";
			this->buttonEnrere->Size = System::Drawing::Size(300, 100);
			this->buttonEnrere->TabIndex = 3;
			this->buttonEnrere->Text = L"Enrere";
			this->buttonEnrere->UseVisualStyleBackColor = false;
			this->buttonEnrere->Click += gcnew System::EventHandler(this, &FormSenseSessio::buttonEnrere_Click);
			// 
			// buscarVols
			// 
			this->buscarVols->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buscarVols->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->buscarVols->Location = System::Drawing::Point(233, 340);
			this->buscarVols->Margin = System::Windows::Forms::Padding(2);
			this->buscarVols->Name = L"buscarVols";
			this->buscarVols->Size = System::Drawing::Size(418, 106);
			this->buscarVols->TabIndex = 4;
			this->buscarVols->Text = L"Buscar Vols";
			this->buscarVols->UseVisualStyleBackColor = true;
			this->buscarVols->Click += gcnew System::EventHandler(this, &FormSenseSessio::buscarVols_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-11, -8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1967, 1080);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->Controls->Add(this->buttonIniciaSessio);
			this->groupBox1->Controls->Add(this->buscarVols);
			this->groupBox1->Controls->Add(this->buttonRegistraSessio);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(575, 309);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(930, 488);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Benvingut/da a AirPlanner!";
			// 
			// FormSenseSessio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttonEnrere);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormSenseSessio";
			this->Text = L"Air Planner";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonIniciaSessio_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormSenseSessio());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormIniciaSessio());
		this->Close();
	}
	private: System::Void buttonRegistraSessio_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormSenseSessio());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormRegistrarClient());
		this->Close();
	}
	private: System::Void buttonEnrere_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AirPlanner::FormRegistrarTreballador1^ form = gcnew AirPlanner::FormRegistrarTreballador1();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void buscarVols_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AirPlanner::FormBuscarVols^ form = gcnew AirPlanner::FormBuscarVols();
		form->ShowDialog();
		this->Show();
	}
};

}

