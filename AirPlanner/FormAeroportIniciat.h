#pragma once
#include "FormModificaTreballador.h"
#include "FormConsultarTreballadorsAeroport.h"
#include "FormEsborraTreballador.h"
#include "FormPeticions.h"
#include <msclr/marshal_cppstd.h>
#include "FormConsultaVolsAeroport.h"
#include "FormRegistrarTreballador1.h"
#include "Launcher.h"
namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormAeroportIniciat
	/// </summary>
	public ref class FormAeroportIniciat : public System::Windows::Forms::Form
	{
	public:
		FormAeroportIniciat(void)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormAeroportIniciat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

    private: System::Windows::Forms::Button^ buttonModificaTreballador;

	private: System::Windows::Forms::Button^ buttonConsultaTreballadors;
	private: System::Windows::Forms::Button^ buttonEsborraTreballador;
	protected:

	private: System::Windows::Forms::Button^ buttonConsultaVolsAeroport;

	private: System::Windows::Forms::Button^ buttonPeticions;

	private: System::Windows::Forms::Button^ buttonRegistrarTreballador;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAeroportIniciat::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonModificaTreballador = (gcnew System::Windows::Forms::Button());
			this->buttonConsultaTreballadors = (gcnew System::Windows::Forms::Button());
			this->buttonEsborraTreballador = (gcnew System::Windows::Forms::Button());
			this->buttonConsultaVolsAeroport = (gcnew System::Windows::Forms::Button());
			this->buttonPeticions = (gcnew System::Windows::Forms::Button());
			this->buttonRegistrarTreballador = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(118, 907);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(289, 90);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Tanca Sessió";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormAeroportIniciat::button1_TancaSessio);
			// 
			// buttonModificaTreballador
			// 
			this->buttonModificaTreballador->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonModificaTreballador->BackColor = System::Drawing::SystemColors::Control;
			this->buttonModificaTreballador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonModificaTreballador->Location = System::Drawing::Point(40, 311);
			this->buttonModificaTreballador->Name = L"buttonModificaTreballador";
			this->buttonModificaTreballador->Size = System::Drawing::Size(350, 89);
			this->buttonModificaTreballador->TabIndex = 0;
			this->buttonModificaTreballador->Text = L"Modifica Treballador";
			this->buttonModificaTreballador->UseVisualStyleBackColor = true;
			this->buttonModificaTreballador->Click += gcnew System::EventHandler(this, &FormAeroportIniciat::buttonModificaTreballador_Click);
			// 
			// buttonConsultaTreballadors
			// 
			this->buttonConsultaTreballadors->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonConsultaTreballadors->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonConsultaTreballadors->Location = System::Drawing::Point(40, 184);
			this->buttonConsultaTreballadors->Name = L"buttonConsultaTreballadors";
			this->buttonConsultaTreballadors->Size = System::Drawing::Size(350, 94);
			this->buttonConsultaTreballadors->TabIndex = 10;
			this->buttonConsultaTreballadors->Text = L"Consultar Treballadors";
			this->buttonConsultaTreballadors->UseVisualStyleBackColor = true;
			this->buttonConsultaTreballadors->Click += gcnew System::EventHandler(this, &FormAeroportIniciat::buttonConsultaTreballadors_Click);
			// 
			// buttonEsborraTreballador
			// 
			this->buttonEsborraTreballador->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonEsborraTreballador->BackColor = System::Drawing::SystemColors::Control;
			this->buttonEsborraTreballador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonEsborraTreballador->Location = System::Drawing::Point(40, 441);
			this->buttonEsborraTreballador->Name = L"buttonEsborraTreballador";
			this->buttonEsborraTreballador->Size = System::Drawing::Size(350, 94);
			this->buttonEsborraTreballador->TabIndex = 0;
			this->buttonEsborraTreballador->Text = L"Esborrar Treballador";
			this->buttonEsborraTreballador->UseVisualStyleBackColor = true;
			this->buttonEsborraTreballador->Click += gcnew System::EventHandler(this, &FormAeroportIniciat::buttonEsborraTreballador_Click);
			// 
			// buttonConsultaVolsAeroport
			// 
			this->buttonConsultaVolsAeroport->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonConsultaVolsAeroport->BackColor = System::Drawing::SystemColors::Control;
			this->buttonConsultaVolsAeroport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonConsultaVolsAeroport->Location = System::Drawing::Point(40, 270);
			this->buttonConsultaVolsAeroport->Name = L"buttonConsultaVolsAeroport";
			this->buttonConsultaVolsAeroport->Size = System::Drawing::Size(350, 89);
			this->buttonConsultaVolsAeroport->TabIndex = 0;
			this->buttonConsultaVolsAeroport->Text = L"Consultar Sortides";
			this->buttonConsultaVolsAeroport->UseVisualStyleBackColor = true;
			this->buttonConsultaVolsAeroport->Click += gcnew System::EventHandler(this, &FormAeroportIniciat::buttonConsultaVolsAeroport_Click);
			// 
			// buttonPeticions
			// 
			this->buttonPeticions->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonPeticions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonPeticions->Location = System::Drawing::Point(40, 130);
			this->buttonPeticions->Name = L"buttonPeticions";
			this->buttonPeticions->Size = System::Drawing::Size(350, 95);
			this->buttonPeticions->TabIndex = 0;
			this->buttonPeticions->Text = L"Consultar Peticions";
			this->buttonPeticions->UseVisualStyleBackColor = true;
			this->buttonPeticions->Click += gcnew System::EventHandler(this, &FormAeroportIniciat::buttonPeticions_Click);
			// 
			// buttonRegistrarTreballador
			// 
			this->buttonRegistrarTreballador->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonRegistrarTreballador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonRegistrarTreballador->Location = System::Drawing::Point(40, 56);
			this->buttonRegistrarTreballador->Margin = System::Windows::Forms::Padding(2);
			this->buttonRegistrarTreballador->Name = L"buttonRegistrarTreballador";
			this->buttonRegistrarTreballador->Size = System::Drawing::Size(350, 95);
			this->buttonRegistrarTreballador->TabIndex = 4;
			this->buttonRegistrarTreballador->Text = L"Registrar Treballador";
			this->buttonRegistrarTreballador->UseVisualStyleBackColor = true;
			this->buttonRegistrarTreballador->Click += gcnew System::EventHandler(this, &FormAeroportIniciat::PROVA_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox1->Location = System::Drawing::Point(-6, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1921, 1080);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label4->Location = System::Drawing::Point(232, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1472, 97);
			this->label4->TabIndex = 20;
			this->label4->Text = L"SESSIÓ INICIADA COM AEROPORT ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonPeticions);
			this->groupBox1->Controls->Add(this->buttonConsultaVolsAeroport);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(485, 318);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(427, 571);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gestió Vols:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonRegistrarTreballador);
			this->groupBox2->Controls->Add(this->buttonConsultaTreballadors);
			this->groupBox2->Controls->Add(this->buttonModificaTreballador);
			this->groupBox2->Controls->Add(this->buttonEsborraTreballador);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(1009, 318);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(427, 571);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Gestió Treballadors:";
			// 
			// FormAeroportIniciat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormAeroportIniciat";
			this->Text = L"AirPlanner";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
  private: System::Void buttonModificaTreballador_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ idTreballador = "";
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAeroportIniciat());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormModificaTreballador(idTreballador));
		this->Close();
	}
	private: System::Void button1_TancaSessio(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}
	private: System::Void buttonConsultaTreballadors_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAeroportIniciat());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormConsultarTreballadorsAeroport());
		this->Close();
	}
	private: System::Void buttonEsborraTreballador_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAeroportIniciat());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormEsborraTreballador()); 
		this->Close();
  }
	private: System::Void buttonConsultaVolsAeroport_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAeroportIniciat());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormConsultaVolsAeroport());
		this->Close();
  }
	private: System::Void buttonPeticions_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAeroportIniciat());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormPeticions());
		this->Close();
	}
	private: System::Void PROVA_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew FormAeroportIniciat());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormRegistrarTreballador1());
		this->Close();
	}
};
}
