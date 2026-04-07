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

	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			this->WindowState = FormWindowState::Maximized;
			//
			//TODO: agregar c�digo de constructor aqu�

			//
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.

		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox4;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ nomUsuari;
	private: System::Windows::Forms::Label^ correuElectronic;






	private: System::Windows::Forms::Label^ titol;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;





	private:
		/// <summary>
		/// Variable del dise�ador necesaria.

		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>

		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->nomUsuari = (gcnew System::Windows::Forms::Label());
			this->correuElectronic = (gcnew System::Windows::Forms::Label());
			this->titol = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(64, 101);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(256, 23);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(1531, 388);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(256, 23);
			this->textBox2->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(452, 101);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(256, 23);
			this->textBox4->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1604, 906);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 95);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Aplicar canvis";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Ok);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::Salmon;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(61, 906);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(230, 88);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Enrere";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Enrere);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(2, -3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1920, 1044);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->monthCalendar1);
			this->groupBox1->Controls->Add(this->nomUsuari);
			this->groupBox1->Controls->Add(this->correuElectronic);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(738, 408);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(776, 403);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Modifica el teu compte";
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::Gray;
			this->checkBox1->Location = System::Drawing::Point(235, 162);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(294, 43);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Data Naixement";
			this->checkBox1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->monthCalendar1->Enabled = false;
			this->monthCalendar1->Location = System::Drawing::Point(272, 217);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 6;
			// 
			// nomUsuari
			// 
			this->nomUsuari->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->nomUsuari->AutoSize = true;
			this->nomUsuari->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomUsuari->Location = System::Drawing::Point(57, 60);
			this->nomUsuari->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->nomUsuari->Name = L"nomUsuari";
			this->nomUsuari->Size = System::Drawing::Size(92, 39);
			this->nomUsuari->TabIndex = 2;
			this->nomUsuari->Text = L"Nom";
			this->nomUsuari->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// correuElectronic
			// 
			this->correuElectronic->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->correuElectronic->AutoSize = true;
			this->correuElectronic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correuElectronic->Location = System::Drawing::Point(445, 60);
			this->correuElectronic->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->correuElectronic->Name = L"correuElectronic";
			this->correuElectronic->Size = System::Drawing::Size(221, 39);
			this->correuElectronic->TabIndex = 3;
			this->correuElectronic->Text = L"Contrasenya";
			this->correuElectronic->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// titol
			// 
			this->titol->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->titol->AutoSize = true;
			this->titol->BackColor = System::Drawing::Color::Transparent;
			this->titol->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titol->ForeColor = System::Drawing::Color::RoyalBlue;
			this->titol->Location = System::Drawing::Point(697, 261);
			this->titol->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->titol->Name = L"titol";
			this->titol->Size = System::Drawing::Size(870, 97);
			this->titol->TabIndex = 15;
			this->titol->Text = L"MODIFICAR USUARI";
			this->titol->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->titol);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"AirPlanner";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Ok(System::Object^ sender, System::EventArgs^ e) {
		try{
			string nom = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
			string contrasenya = msclr::interop::marshal_as<std::string>(this->textBox4->Text);

			string dataNaixement = "";

			if (checkBox1->Checked) {
				String^ fechaSQL = monthCalendar1->SelectionStart.ToString("yyyy-MM-dd HH:mm:ss");
				dataNaixement = msclr::interop::marshal_as<std::string>(fechaSQL);
			}

			if (checkBox1->Checked) {
				System::DateTime today = System::DateTime::Now;
				System::DateTime birthDate = monthCalendar1->SelectionStart;

				int age = today.Year - birthDate.Year;

				// Si todavía no ha cumplido años este año, restamos uno
				if (today.Month < birthDate.Month || (today.Month == birthDate.Month && today.Day < birthDate.Day)) {
					age--;
				}

				if (age < 18) {
					throw gcnew Exception("No pots modificar el teu compte si no et major de 18 anys.");
				}
			}
			
			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();  
			presentacio.processarModificaClient(nom, contrasenya, dataNaixement, "");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		Launcher::Instance->formStack->Pop();
		this->Close();
	}

	private: System::Void Enrere(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		monthCalendar1->Enabled = true;
		checkBox1->ForeColor = System::Drawing::Color::Black;
	}
	else {
		monthCalendar1->Enabled = false;
		checkBox1->ForeColor = System::Drawing::Color::Gray;
	}
}
};
}


