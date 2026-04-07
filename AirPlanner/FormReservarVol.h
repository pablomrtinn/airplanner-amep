#pragma once
#include <vector>
#include <iostream>
#include "CtrlReservarVol.h"
#include <msclr/marshal_cppstd.h>

using namespace std;

namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormReservarVol
	/// </summary>
	public ref class FormReservarVol : public System::Windows::Forms::Form
	{
	private:

		int numero_seients;

		String^ idVol;
		System::Windows::Forms::Label^ PreuTotal;
		float preuSeient;
		float totalReserva = 0.0f; // Inicialitzem a 0.0f per evitar errors d'operacions amb floats
		int seientFila;
		char seientColumna;
		Button^ seientSenseModificar;



	private: System::Windows::Forms::PictureBox^ pictureBox4;

	public:

		std::vector<std::pair<int, char>>* vec; // Puntero nativo
		FormReservarVol(int num_seients, String^ idV, int seientF, char seientC)
		{
			this->numero_seients = num_seients;
			this->idVol = idV;
			this->seientFila = seientF;
			this->seientColumna = seientC;
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;

			vec = new std::vector<std::pair<int, char>>();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormReservarVol() {
			delete vec;  // Libera la memoria del vector
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panelSeients;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormReservarVol::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelSeients = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->PreuTotal = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(102, 858);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 71);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Enrere";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormReservarVol::button1_Enrere);
			// 
			// panelSeients
			// 
			this->panelSeients->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelSeients->Location = System::Drawing::Point(801, 298);
			this->panelSeients->Name = L"panelSeients";
			this->panelSeients->Size = System::Drawing::Size(322, 736);
			this->panelSeients->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1614, 873);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(230, 71);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Continua";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormReservarVol::button2_Continua);
			// 
			// PreuTotal
			// 
			this->PreuTotal->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->PreuTotal->AutoSize = true;
			this->PreuTotal->BackColor = System::Drawing::Color::AntiqueWhite;
			this->PreuTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PreuTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PreuTotal->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->PreuTotal->Location = System::Drawing::Point(1591, 813);
			this->PreuTotal->Name = L"PreuTotal";
			this->PreuTotal->Size = System::Drawing::Size(266, 44);
			this->PreuTotal->TabIndex = 10;
			this->PreuTotal->Text = L"Preu total: 0 €";
			this->PreuTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox4->Location = System::Drawing::Point(2, -46);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(1921, 1080);
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->WaitOnLoad = true;
			// 
			// FormReservarVol
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 989);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panelSeients);
			this->Controls->Add(this->PreuTotal);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox4);
			this->Name = L"FormReservarVol";
			this->Text = L"FormReservarVol";
			this->Load += gcnew System::EventHandler(this, &FormReservarVol::FormSeients_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int contador_seients = 0;
		bool clicat = false;

	private: System::Void mod_Seient(System::Object^ sender, System::EventArgs^ e) {

		Button^ boto = safe_cast<Button^>(sender);

		clicat = true;
		//boto->Text = seientFila.ToString() + "-" + gcnew System::String(seientColumna, 1);
		boto->Enabled = true;
		boto->BackColor = Color::FromArgb(220, 245, 225);
		std::vector<std::pair<int, char>>::iterator it = vec->begin();
		bool trobat = false;
		while (!trobat && it != vec->end()) {
			if (seientFila == it->first && seientColumna == it->second) {
				vec->erase(it);
				trobat = true;

				// Actualizar el contador y el total de reserva
				--contador_seients;
				totalReserva -= preuSeient;
			}
			else {
				++it;
			}
		}
		boto->Click += gcnew System::EventHandler(this, &FormReservarVol::seleccionarSeient);
	}

	private: System::Void seleccionarSeient(System::Object^ sender, System::EventArgs^ e) {


		if (seientFila != -1 && seientColumna != '.' && !clicat) {

			//this -> seientSenseModificar->Text = seientFila.ToString() + "-" + gcnew System::String(seientColumna, 1);
			this->seientSenseModificar->Enabled = true;
			mod_Seient(this->seientSenseModificar, e);
		}

		Button^ boto = safe_cast<Button^>(sender);

		String^ texto = boto->Text; // ej: "3-C"

		// Partir el texto en el '-'
		auto separadores = gcnew cli::array<wchar_t>{ '-' };
		cli::array<String^>^ partes = texto->Split(separadores);


		int fila = Int32::Parse(partes[0]);
		char columna = (char)partes[1][0];

		if (boto->BackColor == Color::FromArgb(220, 245, 225)) {
			boto->BackColor = Color::FromArgb(144, 202, 249); // seleccionado
			++contador_seients;
			totalReserva += preuSeient;

			if (vec != nullptr) {

				vec->push_back(std::make_pair(fila, columna));
			}
		}
		else {
			boto->BackColor = Color::FromArgb(220, 245, 225); // deseleccionado
			--contador_seients;
			totalReserva -= preuSeient;
			std::vector<std::pair<int, char>>::iterator it = vec->begin();

			bool trobat = false;
			while (!trobat && it != vec->end()) {
				if (fila == it->first && columna == it->second) {
					vec->erase(it);
					trobat = true;
					//break;
				}
				else {
					++it;
				}
			}
		}

		PreuTotal->Text = "Preu total: " + totalReserva.ToString() + " €";
	}

	private: System::Void FormSeients_Load(System::Object^ sender, System::EventArgs^ e) {

		try {

			if (seientFila != -1 && seientColumna != '.') {

				int fila = seientFila;
				char columna = seientColumna;
				vec->push_back(std::make_pair(fila, columna));
				contador_seients = 1;
			}
			vector<vector<bool>> matriuSeients;
			CtrlReservarVol reserva;
			msclr::interop::marshal_context context;
			std::string idV = context.marshal_as<std::string>(idVol);

			reserva.ocupacioVol(idV); // d'aquesta manera instancio la matriu que es troba al privat del controlador -> necessari!!!!
			matriuSeients = reserva.matriuSeients(idV);

			CercadoraVol cercaVol;
			PassarelaVol vol;
			vol = cercaVol.cercaVolPerId(idV);
			preuSeient = vol.obtePreu();
			totalReserva = 0.0;

			int files = matriuSeients.size();
			int columnes = matriuSeients[0].size();

			int ampladaBoto = 40;
			int alturaBoto = 40;
			int separacio = 5;
			int separacio_extra = 0;

			vector<char> columnesLletres = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };

			for (int i = 0; i < files; i++) {
				for (int j = 0; j < columnes; j++) {

					if (j + 1 > columnes / 2) {

						separacio_extra = 40;

					}
					else {
						separacio_extra = 0;
					}
					Button^ boto = gcnew Button();
					boto->Width = ampladaBoto;
					boto->Height = alturaBoto;
					boto->Left = j * (ampladaBoto + separacio) + separacio_extra;
					boto->Top = i * (alturaBoto + separacio);
					char letra = columnesLletres[j];
					boto->Text = i.ToString() + "-" + gcnew System::String(letra, 1);

					if (seientFila == -1 && seientColumna == '.') {

						if (matriuSeients[i][j]) {
							// Seient ocupat
							boto->BackColor = Color::Gray;
							boto->Enabled = false;
						}
						else {
							// Seient lliure
							boto->BackColor = Color::FromArgb(220, 245, 225);
							boto->Enabled = true;
							boto->Click += gcnew System::EventHandler(this, &FormReservarVol::seleccionarSeient);
						}
					}
					else {

						if (seientFila == i && seientColumna == letra) {
							// Seient seleccionat
							boto->BackColor = Color::FromArgb(255, 183, 138);
							this->seientSenseModificar = boto;
							boto->Enabled = false;
							boto->Click += gcnew System::EventHandler(this, &FormReservarVol::mod_Seient);
						}
						else if (matriuSeients[i][j]) {
							// Seient ocupat
							boto->BackColor = Color::Gray;
							boto->Enabled = false;
						}
						else {
							// Seient lliure
							boto->BackColor = Color::FromArgb(220, 245, 225);
							boto->Enabled = true;
							boto->Click += gcnew System::EventHandler(this, &FormReservarVol::seleccionarSeient);
						}
					}
					panelSeients->Controls->Add(boto);
				}
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button1_Enrere(System::Object^ sender, System::EventArgs^ e) {

		this->DialogResult = System::Windows::Forms::DialogResult::Cancel; // establim com a resultat de dialogo cancelar per despés detectar--ho al form anterior
		this->Close();
	}

	private: System::Void button2_Continua(System::Object^ sender, System::EventArgs^ e) {

		if (contador_seients > numero_seients) {

			if (numero_seients == 1) {

				MessageBox::Show("No pots seleccionar més d'1 seient.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				MessageBox::Show("No pots seleccionar més de " + numero_seients + " seients.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			return;
		}
		else if (contador_seients == numero_seients) {

			if (numero_seients == 1) {

				if (seientFila != -1 && seientColumna != '.') {

					MessageBox::Show("La teva reserva s'ha modificat amb èxit.", "Informació", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					MessageBox::Show("Has seleccionat 1 seient. \nLa teva reserva s'ha registrat amb èxit.", "Informació", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			else {
				MessageBox::Show("Has seleccionat " + numero_seients + " seients. \nLa teva reserva s'ha registrat amb èxit.", "Informació", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else {

			if (numero_seients == 1) {

				MessageBox::Show("No pots seleccionar menys d'1 seient.", "Informació", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("No pots seleccionar menys de " + numero_seients + " seients.", "Informació", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			return;
		}
		this->DialogResult = System::Windows::Forms::DialogResult::OK; // establim com a resultat de dialogo OK per despés detectar--ho al form anterior
		this->Close();
	}
};
}