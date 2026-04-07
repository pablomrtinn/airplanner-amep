#pragma once
#include "FormConsultarEstatVol.h"
#include "FormConsultarInfoVol.h"
#include "CercadoraVol.h"
#include "AirPlannerSingleton.h"
#include "PassarelaUsuari.h"
#include "Launcher.h"
namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormBuscarVolPerAEstat
	/// </summary>
	public ref class FormBuscarVolPerAEstat : public System::Windows::Forms::Form
	{
	public:
		FormBuscarVolPerAEstat(void)
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
		~FormBuscarVolPerAEstat()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ TextBoxID;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ titol;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormBuscarVolPerAEstat::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TextBoxID = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->titol = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(70, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(650, 42);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Identificador del vol que vols consultar";
			// 
			// TextBoxID
			// 
			this->TextBoxID->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TextBoxID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBoxID->Location = System::Drawing::Point(276, 143);
			this->TextBoxID->Name = L"TextBoxID";
			this->TextBoxID->Size = System::Drawing::Size(241, 38);
			this->TextBoxID->TabIndex = 8;
			this->TextBoxID->Text = L"id";
			this->TextBoxID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->TextBoxID->Enter += gcnew System::EventHandler(this, &FormBuscarVolPerAEstat::textBoxID_enter);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::Salmon;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(66, 924);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(230, 87);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Enrere";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormBuscarVolPerAEstat::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1620, 924);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 87);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormBuscarVolPerAEstat::button1_Click);
			// 
			// titol
			// 
			this->titol->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->titol->AutoSize = true;
			this->titol->BackColor = System::Drawing::Color::Transparent;
			this->titol->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titol->ForeColor = System::Drawing::Color::RoyalBlue;
			this->titol->Location = System::Drawing::Point(604, 214);
			this->titol->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->titol->Name = L"titol";
			this->titol->Size = System::Drawing::Size(722, 97);
			this->titol->TabIndex = 14;
			this->titol->Text = L"CONSULTAR VOL";
			this->titol->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->TextBoxID);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(565, 371);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(791, 250);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Consulta l\'estat d\'un vol";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1921, 1080);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FormBuscarVolPerAEstat::pictureBox1_Click);
			// 
			// FormBuscarVolPerAEstat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1920, 1061);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->titol);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormBuscarVolPerAEstat";
			this->Text = L"AirPlanner";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBoxID_enter(System::Object^ sender, System::EventArgs^ e) { //nom

		if (TextBoxID->Text == "id") {
			TextBoxID->Text = "";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//hauria de tornar al Form1
		Launcher::Instance->formStack->Pop();
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			std::string id = msclr::interop::marshal_as<std::string>(TextBoxID->Text);
			if (id == "" || id == "id") {
				throw gcnew Exception("Error: El camp 'id' està buit.");
			}
			//Cercadora vol per a comprobar que l'id sigui valid
			CercadoraVol cercadora = CercadoraVol::getInstance();
			cercadora.cercaVolPerId(id);

			AirPlannerSingleton& AirPlannerSing = AirPlannerSingleton::getInstance();
			PassarelaUsuari* usuari = AirPlannerSing.obteUsuari();
			string tipus = usuari->obtetipus();

			if (tipus == "Client") {
				Launcher::Instance->formStack->Pop();
				Launcher::Instance->formStack->Push(gcnew FormBuscarVolPerAEstat());
				Launcher::Instance->formStack->Push(gcnew AirPlanner::FormConsultarEstatVol(id));
				this->Close();
			}
			else if (tipus == "Treballador") {
				Launcher::Instance->formStack->Pop();
				Launcher::Instance->formStack->Push(gcnew FormBuscarVolPerAEstat());
				Launcher::Instance->formStack->Push(gcnew AirPlanner::FormConsultarInfoVol(id));
				this->Close();
			}
			else {

				MessageBox::Show("Error, no es pot accedir a aquesta funcionalitat.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Launcher::Instance->formStack->Pop();
				this->Close();
			}
		
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
