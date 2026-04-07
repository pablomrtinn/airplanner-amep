#pragma once
#include "CapaDePresentacio.h"
#include "FormSessioIniciada.h"
#include "FormAdministradorIniciat.h"
#include "FormAeroliniaIniciada.h"
#include "FormAeroportIniciat.h"
#include "FormTreballadorIniciat.h"
#include "FormCorreuOlvidaContrasenya.h"
#include "FormCodi.h"
#include "FormNovaContrasenyaOlvidaContrasenya.h"
#include "FormRegistrarClient.h"
#include <msclr/marshal_cppstd.h>
#include "Launcher.h"
#include "FormPeticions.h"

using namespace System;
using namespace System::Windows::Forms;

namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormIniciaSessio
	/// </summary>
	public ref class FormIniciaSessio : public System::Windows::Forms::Form
	{
	public:
		FormIniciaSessio(void)
		{
			InitializeComponent();

			this->WindowState = FormWindowState::Maximized;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormIniciaSessio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ titulo;
	private: System::Windows::Forms::TextBox^ Correo;
	private: System::Windows::Forms::TextBox^ Contrasenya;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ caixaInfo;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ OlvidoCOntrasenya;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button4;


	protected:

	protected:

	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormIniciaSessio::typeid));
			this->titulo = (gcnew System::Windows::Forms::Label());
			this->Correo = (gcnew System::Windows::Forms::TextBox());
			this->Contrasenya = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->caixaInfo = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->OlvidoCOntrasenya = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->caixaInfo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// titulo
			// 
			this->titulo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->titulo->AutoSize = true;
			this->titulo->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
			this->titulo->ForeColor = System::Drawing::Color::RoyalBlue;
			this->titulo->Location = System::Drawing::Point(680, 142);
			this->titulo->Name = L"titulo";
			this->titulo->Size = System::Drawing::Size(655, 97);
			this->titulo->TabIndex = 0;
			this->titulo->Text = L"INICIA SESSIÓ";
			// 
			// Correo
			// 
			this->Correo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Correo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Correo->Location = System::Drawing::Point(416, 155);
			this->Correo->Name = L"Correo";
			this->Correo->Size = System::Drawing::Size(428, 38);
			this->Correo->TabIndex = 1;
			this->Correo->Text = L"Correu";
			this->Correo->Enter += gcnew System::EventHandler(this, &FormIniciaSessio::Correo_Enter);
			// 
			// Contrasenya
			// 
			this->Contrasenya->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Contrasenya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Contrasenya->Location = System::Drawing::Point(416, 266);
			this->Contrasenya->Name = L"Contrasenya";
			this->Contrasenya->Size = System::Drawing::Size(428, 38);
			this->Contrasenya->TabIndex = 2;
			this->Contrasenya->Text = L"Contrasenya";
			this->Contrasenya->Enter += gcnew System::EventHandler(this, &FormIniciaSessio::Contrasenya_Enter);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1605, 868);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 100);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Inicia sessió";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormIniciaSessio::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(410, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 31);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Correu electrònic";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(410, 232);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 31);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Contrasenya";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::Salmon;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(116, 868);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 100);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Enrere";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormIniciaSessio::button2_Click);
			// 
			// caixaInfo
			// 
			this->caixaInfo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->caixaInfo->Controls->Add(this->button4);
			this->caixaInfo->Controls->Add(this->OlvidoCOntrasenya);
			this->caixaInfo->Controls->Add(this->label2);
			this->caixaInfo->Controls->Add(this->label1);
			this->caixaInfo->Controls->Add(this->Correo);
			this->caixaInfo->Controls->Add(this->Contrasenya);
			this->caixaInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->caixaInfo->Location = System::Drawing::Point(342, 257);
			this->caixaInfo->Name = L"caixaInfo";
			this->caixaInfo->Size = System::Drawing::Size(1253, 478);
			this->caixaInfo->TabIndex = 7;
			this->caixaInfo->TabStop = false;
			this->caixaInfo->Text = L"Connecta’t i accedeix al teu espai organitzat.";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 16));
			this->button4->Location = System::Drawing::Point(856, 266);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(38, 36);
			this->button4->TabIndex = 9;
			this->button4->Text = L"👁";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FormIniciaSessio::button4_Click);
			// 
			// OlvidoCOntrasenya
			// 
			this->OlvidoCOntrasenya->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->OlvidoCOntrasenya->AutoSize = true;
			this->OlvidoCOntrasenya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.5F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OlvidoCOntrasenya->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->OlvidoCOntrasenya->Location = System::Drawing::Point(675, 307);
			this->OlvidoCOntrasenya->Name = L"OlvidoCOntrasenya";
			this->OlvidoCOntrasenya->Size = System::Drawing::Size(169, 17);
			this->OlvidoCOntrasenya->TabIndex = 9;
			this->OlvidoCOntrasenya->Text = L"He oblidat la contrasenya";
			this->OlvidoCOntrasenya->Click += gcnew System::EventHandler(this, &FormIniciaSessio::OlvidoCOntrasenya_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(819, 759);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Sense compte\?";
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::Moccasin;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(946, 741);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 51);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Registra\'t ara!";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormIniciaSessio::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1920, 1080);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// FormIniciaSessio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(1920, 1061);
			this->Controls->Add(this->caixaInfo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->titulo);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormIniciaSessio";
			this->Text = L"AirPlanner";
			this->Load += gcnew System::EventHandler(this, &FormIniciaSessio::FormIniciaSessio_Load);
			this->caixaInfo->ResumeLayout(false);
			this->caixaInfo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormIniciaSessio_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   // Evento del bot?n
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		std::string correu = msclr::interop::marshal_as<std::string>(Correo->Text);
		std::string contrasenya = msclr::interop::marshal_as<std::string>(Contrasenya->Text);

		try
		{
			std::string tipus;
			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
			tipus = presentacio.processarIniciarSessio(correu, contrasenya);
			//this->Hide(); // Oculta el formulario actual
			if (tipus == "Client") {

				Launcher::Instance->formStack->Pop();
				Launcher::Instance->formStack->Push(gcnew AirPlanner::FormSessioIniciada());
				this->Close();
			}
			else if (tipus == "Treballador") {
				Launcher::Instance->formStack->Pop();
				Launcher::Instance->formStack->Push(gcnew AirPlanner::FormTreballadorIniciat());
				this->Close();
			}
			else if (tipus == "Admin")
			{
				Launcher::Instance->formStack->Pop();
				Launcher::Instance->formStack->Push(gcnew AirPlanner::FormAdministradorIniciat());
				this->Close();
			}
			else if (tipus == "Aerolinia")
			{
				Launcher::Instance->formStack->Pop();
				Launcher::Instance->formStack->Push(gcnew AirPlanner::FormAeroliniaIniciada());
				this->Close();
			}
			else if (tipus == "Aeroport")
			{
				Launcher::Instance->formStack->Pop();
				Launcher::Instance->formStack->Push(gcnew AirPlanner::FormAeroportIniciat());
				this->Close();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: No existeix cap usuari amb aquest correu o la contrasenya es incorrecta.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close(); // Cierra este formulario
	}
	private: System::Void Correo_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (Correo->Text == "Correu") {
			Correo->Text = "";
		}
	}
	private: System::Void Contrasenya_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (Contrasenya->Text == "Contrasenya") {
			Contrasenya->Text = "";
			Contrasenya->PasswordChar = '*';
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
			   System::String^ assumpte = "Oblit de contrasenya [" + codi + "]";

			   CercadoraUsuari& cercadoraUsuari = CercadoraUsuari::getInstance();
			   PassarelaUsuari passarelaUsuari = cercadoraUsuari.cercaUsuari(destinatari);
			   std::string nom = passarelaUsuari.obteNom();
			   System::String^ nomManaged = msclr::interop::marshal_as<System::String^>(nom);

			   System::String^ cos =
				   "<!DOCTYPE html><html lang='ca'><head>"
				   "<meta charset='UTF-8'/>"
				   "</head><body style='font-family: Arial, sans-serif; background-color: #e0e7ff; padding: 20px;'>"

				   "<div style='max-width: 500px; margin: auto; background: white; border-radius: 10px; box-shadow: 0 2px 10px rgba(0,0,0,0.1); overflow: hidden;'>"

				   "<!-- Cabecera azul -->"
				   "<div style='background-color: #005bea; color: white; padding: 20px; text-align: center; font-size: 24px; font-weight: bold;'>"
				   "AirPlanner"
				   "</div>"

				   "<div style='padding: 0 30px 30px 30px; text-align: center;'>"
				   "<img src='https://i.postimg.cc/R0JgxsLr/Whats-App-Image-2025-05-15-at-18-37-37-1.jpg' alt='AirPlanner' style='width: 180px; margin-top: 20px; margin-bottom: 30px;'/>"

				   "<h2 style='color: #333;'>Acabes d'oblidar la teva contrasenya?</h2>"
				   "<p style='font-size: 16px; color: #555;'>No et preocupis! A AirPlanner, canviar-la és molt fàcil! Només introdueix el codi de sota en la nostra aplicació per continuar.</p>"

				   "<div style='text-align: center; margin: 30px 0;'>"
				   "  <div style='background-color: #005bea; color: white; font-size: 32px; font-weight: bold; padding: 7px 30px; border-radius: 12px; letter-spacing: 4px; display: inline-block; line-height: 1;'>"
				   + codi +
				   "  </div>"
				   "</div>"

				   "<p style='color: #888; font-size: 14px;'>Gràcies per confiar en AirPlanner.</p>"
				   "<hr style='margin: 40px 0; border: none; border-top: 1px solid #eee;'/>"
				   "<p style='font-size: 12px; color: #aaa;'>Aquest correu electrònic ha estat generat automàticament pel sistema. Si no l’has sol·licitat, pots ignorar-lo.</p>"

				   "</div></div></body></html>";


			   try
			   {
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
			   catch (System::Exception^ ex)
			   {
				   System::Windows::Forms::MessageBox::Show("Error en enviar el correu: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }

	private: System::Void OlvidoCOntrasenya_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			String^ correu;


			FormCorreuOlvidaContrasenya^ form = gcnew FormCorreuOlvidaContrasenya();
			System::Windows::Forms::DialogResult resultat = form->ShowDialog();

			if (resultat == System::Windows::Forms::DialogResult::OK)
			{
				correu = form->Correu;
			}
			else
			{
				// L'usuari ha tancat la finestra o ha cancel·lat
				MessageBox::Show("Verificació cancel·lada. Torna a intentar-ho", "Cancel·lat", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			int intents = -1;
			bool autentificat = false;
			System::String^ codi;


			while (!autentificat)
			{
				if (intents <= 0) {
					codi = GenerarCodiNumeric();
					EnviarCodiPerCorreu(correu, codi);
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
					}
					else
					{
						--intents;
						MessageBox::Show("Codi incorrecte. Torna-ho a intentar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else
				{
					// L'usuari ha tancat la finestra o ha cancel·lat
					MessageBox::Show("Verificació cancel·lada. Torna a intentar-ho", "Cancel·lat", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					break;
				}
			}

			if (autentificat) {
				String^ contrasenya;
				FormNovaContrasenyaOlvidaContrasenya^ form = gcnew FormNovaContrasenyaOlvidaContrasenya();
				System::Windows::Forms::DialogResult resultat = form->ShowDialog();

				if (resultat == System::Windows::Forms::DialogResult::OK)
				{
					contrasenya = form->NovaContrasenya;
				}

				CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
				string correuNormal = msclr::interop::marshal_as<std::string>(correu);
				string contrasenyaNormal = msclr::interop::marshal_as<std::string>(contrasenya);
				presentacio.processarOblitContrasenya(correuNormal, contrasenyaNormal);

				MessageBox::Show("Has canviat correctament la contrasenya. Ara pots iniciar sessió.");
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormRegistrarClient());
		this->Close();
	}


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Contrasenya->PasswordChar == '*') {
			this->Contrasenya->PasswordChar = '\0';
			this->button4->Text = L"🙈";
		}
		else {
			this->Contrasenya->PasswordChar = '*';
			this->button4->Text = L"👁";
		}
	}
	};
}