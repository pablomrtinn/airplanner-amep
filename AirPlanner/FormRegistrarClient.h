#pragma once
#include <msclr/marshal_cppstd.h>
#include "CapaDePresentacio.h"
#include "PassarelaUsuari.h"
#include "FormCodi.h"
#include "Launcher.h"

namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::Collections::Generic;
	using namespace System::Net;
	using namespace System::Net::Mail;
	using namespace System::Threading;
	using namespace Microsoft::VisualBasic;



	/// <summary>
	/// Resumen de FormRegistrarClient
	/// </summary>
	public ref class FormRegistrarClient : public System::Windows::Forms::Form
	{
	public:
		FormRegistrarClient(void)
		{

			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;







	public:

		bool esborrat = false;

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~FormRegistrarClient()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxCorreu;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::TextBox^ textBoxContrasenya;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;

	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormRegistrarClient::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxCorreu = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxContrasenya = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Name = L"label1";
			// 
			// textBoxCorreu
			// 
			resources->ApplyResources(this->textBoxCorreu, L"textBoxCorreu");
			this->textBoxCorreu->Name = L"textBoxCorreu";
			this->textBoxCorreu->Enter += gcnew System::EventHandler(this, &FormRegistrarClient::textBoxCorreu_Enter);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Name = L"label3";
			// 
			// textBoxNom
			// 
			resources->ApplyResources(this->textBoxNom, L"textBoxNom");
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Enter += gcnew System::EventHandler(this, &FormRegistrarClient::textBox_Nom);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label4->Name = L"label4";
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->BackColor = System::Drawing::Color::Salmon;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormRegistrarClient::button2_Enrere);
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Name = L"label5";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Name = L"label6";
			// 
			// textBoxContrasenya
			// 
			resources->ApplyResources(this->textBoxContrasenya, L"textBoxContrasenya");
			this->textBoxContrasenya->Name = L"textBoxContrasenya";
			this->textBoxContrasenya->Enter += gcnew System::EventHandler(this, &FormRegistrarClient::textBox2_Contrasenya);
			// 
			// comboBox1
			// 
			resources->ApplyResources(this->comboBox1, L"comboBox1");
			this->comboBox1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) {
				resources->GetString(L"comboBox1.AutoCompleteCustomSource"),
					resources->GetString(L"comboBox1.AutoCompleteCustomSource1"), resources->GetString(L"comboBox1.AutoCompleteCustomSource2")
			});
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				resources->GetString(L"comboBox1.Items"), resources->GetString(L"comboBox1.Items1"),
					resources->GetString(L"comboBox1.Items2")
			});
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->SelectedIndex = 0;
			// 
			// monthCalendar1
			// 
			resources->ApplyResources(this->monthCalendar1, L"monthCalendar1");
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormRegistrarClient::button1_Registrar);
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBoxNom);
			this->groupBox1->Controls->Add(this->textBoxContrasenya);
			this->groupBox1->Controls->Add(this->monthCalendar1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBoxCorreu);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// FormRegistrarClient
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"FormRegistrarClient";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FormRegistrarClient::FormRegistrarClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void FormRegistrarClient_Load(System::Object^ sender, System::EventArgs^ e) {

	}

		   // boto registre
	private: System::Void button1_Registrar(System::Object^ sender, System::EventArgs^ e) {

		std::string correu = msclr::interop::marshal_as<std::string>(textBoxCorreu->Text);
		std::string nom = msclr::interop::marshal_as<std::string>(textBoxNom->Text);
		std::string contrasenya = msclr::interop::marshal_as<std::string>(textBoxContrasenya->Text);
		//std::string dataNaixement = msclr::interop::marshal_as<std::string>(textBoxDataNaixement->Text);
		//std::string modalitat = msclr::interop::marshal_as<std::string>(textBoxSubscripcio->Text);
		System::String^ seleccionat = safe_cast<System::String^>(this->comboBox1->SelectedItem);
		std::string modalitat = msclr::interop::marshal_as<std::string>(seleccionat);
		String^ dataNaixementAux = monthCalendar1->SelectionStart.ToString("yyyy-MM-dd");
		std::string dataNaixement = msclr::interop::marshal_as<std::string>(dataNaixementAux);

		try {
			// Obtener la fecha seleccionada y la fecha actual
			DateTime dataSeleccionada = monthCalendar1->SelectionStart;
			DateTime fechaActual = DateTime::Now;

			// Verificar si la fecha seleccionada es mayor que hoy
			if (dataSeleccionada > fechaActual) {
				MessageBox::Show("Error, la data de naixement no pot ser superior a avui.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (correu == "" || correu == "Correu") {
				MessageBox::Show("Error, el camp 'correu' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (nom == "" || nom == "Nom") {
				MessageBox::Show("Error, el camp 'nom' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (contrasenya == "" || contrasenya == "Contrasenya") {
				MessageBox::Show("Error, És perillòs anar sense contrasenya! Crea una.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (dataNaixement == "") {
				MessageBox::Show("Error, el camp 'dataNaixement' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (modalitat == "") {
				MessageBox::Show("Error, el camp 'modalitat' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			
			int edat = fechaActual.Year - dataSeleccionada.Year;
			if (dataSeleccionada > fechaActual.AddYears(-edat)) {
				edat--; // Encara no ha fet els anys aquest any
			}
			if (edat < 18) {
				MessageBox::Show("Error, has de ser major de 18 anys per registrar-te.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
			presentacio.processarRegistrarClient(nom, correu, contrasenya, dataNaixement, modalitat);
			
			int intents = -1;
			bool autentificat = false;
			System::String^ codi;
			esborrat = false;
			
			while (!autentificat)
			{
				if (intents <= 0) {
					codi = GenerarCodiNumeric();
					EnviarCodiPerCorreu(textBoxCorreu->Text, codi);
					
					if (intents > -1) MessageBox::Show("S'han exhaurit els intents. Hem enviat un nou codi al teu correu electrònic.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					intents = 3;
				}
				// Mostrar el formulari personalitzat
				FormCodi^ form = gcnew FormCodi();
				System::Windows::Forms::DialogResult resultat = form->ShowDialog();

				if (resultat == System::Windows::Forms::DialogResult::OK)
				{
					if (form->CodiIntroduit == codi)
					{
						autentificat = true;
						MessageBox::Show("Verificació correcta. Benvingut/da!", "Èxit", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					else
					{
						--intents;
						MessageBox::Show("Codi incorrecte. Torna-ho a intentar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else
				{
					// L'usuari ha tancat la finestra o ha cancel�lat
					MessageBox::Show("Verificació cancel·lada. Torna a intentar-ho", "Cancel·lat", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					throw gcnew Exception("Verificacio cancelada");
					break;
				}
			}
			
			if (autentificat) {
				Launcher::Instance->formStack->Pop();
				this->Close(); // Cierra el formulario actual
				MessageBox::Show("T'has registrat correctament, ara has d'iniciar sessió per a accedir al teu compte"); 
			}
			
		}
		catch (Exception^ ex) {

			if (ex->Message->ToLower()->Contains("duplicate entry")) {
				MessageBox::Show("Error: Ja existeix un compte amb aquest correu electrònic.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (ex->Message->ToLower()->Contains("specified")) {
				MessageBox::Show("Error: Introdueix un correu electrònic vàlid.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else System::Windows::Forms::MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			std::string contrasenya = msclr::interop::marshal_as<std::string>(textBoxContrasenya->Text);
			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
			if (!esborrat) {
				presentacio.processarEsborraClient(contrasenya, correu);
				esborrat = true;
			}
		}
	}

		   //boto enrere
	private: System::Void button2_Enrere(System::Object^ sender, System::EventArgs^ e) {

		Launcher::Instance->formStack->Pop();
		this->Close(); // Cierra el formulario actual
	}

		   // nom
	private: System::Void textBox_Nom(System::Object^ sender, System::EventArgs^ e) { //nom

		if (textBoxNom->Text == "Nom") {
			textBoxNom->Text = "";
		}
	}

		   // correu electronic
	private: System::Void textBoxCorreu_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxCorreu->Text == "Correu") { // textBoxCorreu->Text agafa la info com String^ i no com std::string
			textBoxCorreu->Text = "";
		}
	}
		   // contrasenya
	private: System::Void textBox2_Contrasenya(System::Object^ sender, System::EventArgs^ e) {

		if (textBoxContrasenya->Text == "Contrasenya") {
			textBoxContrasenya->Text = "";
			textBoxContrasenya->PasswordChar = '*';
		}
	}

System::String^ GenerarCodiNumeric()
{
	System::String^ caracters = "0123456789";
	System::Random^ rnd = gcnew System::Random();
	// serveix per construir cadenes de text de manera eficient, sobretot dins de bucles.
	System::Text::StringBuilder^ resultat = gcnew System::Text::StringBuilder();

	for (int i = 0; i < 6; i++)
	{
		int index = rnd->Next(caracters->Length);
		resultat->Append(caracters[index]);
	}

	return resultat->ToString();
}

void EnviarCodiPerCorreu(System::String^ destinatari, System::String^ codi)
{
	System::String^ remitent = "infoairplanner@gmail.com";
	System::String^ contrasenya = "lijbvnvehpiglwky";
	System::String^ assumpte = "Completa el teu registre [" + codi + "]";

	try
	{
		System::Net::Mail::MailAddress^ adreca = gcnew System::Net::Mail::MailAddress(destinatari);
	}
	catch (System::FormatException^)
	{
		throw gcnew System::ArgumentException("L'adreça de correu no és vàlida.");
	}

	System::String^ cos =
		"<!DOCTYPE html><html lang='ca'><head>"
		"<meta charset='UTF-8'/>"
		"</head><body style='font-family: Arial, sans-serif; background-color: #e0e7ff; padding: 20px;'>"
		"<div style='max-width: 500px; margin: auto; background: white; border-radius: 10px; box-shadow: 0 2px 10px rgba(0,0,0,0.1); overflow: hidden;'>"
		"<div style='background-color: #005bea; color: white; padding: 20px; text-align: center; font-size: 24px; font-weight: bold;'>"
		"AirPlanner"
		"</div>"
		"<div style='padding: 30px; text-align: center;'>"
		"<img src='https://i.postimg.cc/R0JgxsLr/Whats-App-Image-2025-05-15-at-18-37-37-1.jpg' alt='AirPlanner' style='width: 180px; margin-top: 20px; margin-bottom: 20px;'/>"
		"<h2 style='color: #333;'>El teu vol t'espera...</h2>"
		"<p style='font-size: 16px; color: #555;'>Completa el teu registre per començar l'aventura! Només introdueix el codi de sota en la nostra aplicació per continuar.</p>"
		"<div style='text-align: center; margin: 30px 0;'>"
		"  <div style='background-color: #005bea; color: white; font-size: 32px; font-weight: bold; padding: 7px 30px; border-radius: 12px; letter-spacing: 4px; display: inline-block; line-height: 1;'>"
		+ codi +
		"  </div>"
		"</div>"
		"<p style='color: #888; font-size: 14px;'>Gràcies per confiar en AirPlanner.</p>"
		"<hr style='margin: 40px 0; border: none; border-top: 1px solid #eee;'/>"
		"<p style='font-size: 12px; color: #aaa;'>Aquest correu electrònic ha estat generat automàticament pel sistema. Si no l'has sol·licitat, pots ignorar-lo.</p>"
		"</div></div></body></html>";


	System::Net::Mail::MailMessage^ missatge = gcnew System::Net::Mail::MailMessage();
	missatge->From = gcnew System::Net::Mail::MailAddress(remitent);
	missatge->To->Add(destinatari);
	missatge->Subject = assumpte;
	missatge->Body = cos;
	missatge->IsBodyHtml = true;
	missatge->SubjectEncoding = System::Text::Encoding::UTF8;
	missatge->BodyEncoding = System::Text::Encoding::UTF8;

	System::Net::Mail::SmtpClient^ smtp = gcnew System::Net::Mail::SmtpClient("smtp.gmail.com", 587);
	smtp->EnableSsl = true;
	smtp->Credentials = gcnew System::Net::NetworkCredential(remitent, contrasenya);

	smtp->Send(missatge);
}

};
}