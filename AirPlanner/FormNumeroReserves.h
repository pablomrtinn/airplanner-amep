#pragma once
#include "FormReservarPerClient.h"
#include "PassarelaReserva.h"
#include "FormReservarVol.h"
#include "CtrlReservarVol.h"
#include "PassarelaUsuari.h"
#include "AirPlannerSingleton.h"
#include "CapaDePresentacio.h"
#include <msclr/marshal_cppstd.h>

namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormNumeroReserves
	/// </summary>
	public ref class FormNumeroReserves : public System::Windows::Forms::Form
	{
	private:
		String^ idVol;
	public:
		FormNumeroReserves(String^ idV)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
			this->idVol = idV;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormNumeroReserves()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TITOL;
	private: System::Windows::Forms::Label^ pregunta;

	private: System::Windows::Forms::NumericUpDown^ numeric;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormNumeroReserves::typeid));
			this->TITOL = (gcnew System::Windows::Forms::Label());
			this->pregunta = (gcnew System::Windows::Forms::Label());
			this->numeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// TITOL
			// 
			this->TITOL->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TITOL->AutoSize = true;
			this->TITOL->BackColor = System::Drawing::SystemColors::Control;
			this->TITOL->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TITOL->ForeColor = System::Drawing::Color::RoyalBlue;
			this->TITOL->Location = System::Drawing::Point(651, 119);
			this->TITOL->Name = L"TITOL";
			this->TITOL->Size = System::Drawing::Size(659, 97);
			this->TITOL->TabIndex = 7;
			this->TITOL->Text = L"RESERVAR VOL";
			// 
			// pregunta
			// 
			this->pregunta->AutoSize = true;
			this->pregunta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pregunta->Location = System::Drawing::Point(349, 118);
			this->pregunta->Name = L"pregunta";
			this->pregunta->Size = System::Drawing::Size(421, 31);
			this->pregunta->TabIndex = 8;
			this->pregunta->Text = L"Quantes reserves es volen fer\?";
			// 
			// numeric
			// 
			this->numeric->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numeric->Location = System::Drawing::Point(811, 116);
			this->numeric->Name = L"numeric";
			this->numeric->Size = System::Drawing::Size(109, 38);
			this->numeric->TabIndex = 10;
			this->numeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(79, 858);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 71);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Enrere";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormNumeroReserves::button1_Enrere);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1642, 858);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(230, 71);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Continua";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormNumeroReserves::button2_Continua);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->pregunta);
			this->groupBox1->Controls->Add(this->numeric);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(332, 399);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1253, 230);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Numero de Reserves a Realitzar";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1049, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(163, 158);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, -41);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1925, 1070);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// FormNumeroReserves
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1924, 989);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TITOL);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"FormNumeroReserves";
			this->Text = L"FormNumeroReserves";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//boto enrere
	private: System::Void button1_Enrere(System::Object^ sender, System::EventArgs^ e) {

		//hauria de tornar al Form1
		Launcher::Instance->formStack->Pop();
		this->Close(); // Cierra el formulario actual
	}
		   //boto continuar
	private: System::Void button2_Continua(System::Object^ sender, System::EventArgs^ e) {

		try {

			int reserves = (int)this->numeric->Value;

			CtrlReservarVol ctrlReserva;
			//idVol = "13";// poso id 1 per provar falseoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
			msclr::interop::marshal_context context;
			std::string idV = context.marshal_as<std::string>(idVol);

			int seients_lliures = ctrlReserva.ocupacioVol(idV); // poso id 1 per provar falseoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo

			if (seients_lliures <= 0) {
				MessageBox::Show("Aquest vol ja esta ple. Disculpeu les molèsties.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (seients_lliures < reserves) {
				MessageBox::Show("No hi ha suficients seients lliures.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else if (reserves <= 0) {
				MessageBox::Show("El número de reserves ha de ser superior a 0.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			//this->Hide(); // Solo ocultar si sí que hi ha seients

			bool cancelat = false;
			vector<PassarelaReserva> vecReserves;

			PassarelaUsuari usuari;
			AirPlannerSingleton singleton = AirPlannerSingleton::getInstance();

			usuari = *(AirPlannerSingleton::getInstance().obteUsuari()); // li paso una copia de lo que apunta el punter 
			string correo = usuari.obteCorreuElectronic();

			//
			CercadoraVol cercaVol;
			PassarelaVol vol;
			vol = cercaVol.cercaVolPerId(idV);
			float preuSeient = vol.obtePreu();
			float preuTotalReserva = preuSeient * reserves; // preu total de la reserva
			//

			for (int i = 0; i < reserves && !cancelat; ++i) {
				AirPlanner::FormReservarPerClient^ form = gcnew AirPlanner::FormReservarPerClient();
				if (form->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
					cancelat = true;
				}
				else if (form->DialogResult == System::Windows::Forms::DialogResult::OK) {

					String^ nomAux = form->nom;
					String^ tipusEquipatgeAux = form->tipusEquipatge;
					String^ genereAux = form->genere;
					String^ dataNaixementAux = form->dataNaixement;

					std::string nom = msclr::interop::marshal_as<std::string>(nomAux);
					std::string tipusEquipatge = msclr::interop::marshal_as<std::string>(tipusEquipatgeAux);
					std::string genere = msclr::interop::marshal_as<std::string>(genereAux);
					std::string dataNaixement = msclr::interop::marshal_as<std::string>(dataNaixementAux);

					PassarelaReserva novaReserva(0, 'a', idV, correo, tipusEquipatge, nom, genere, dataNaixement, preuTotalReserva);
					vecReserves.push_back(novaReserva);
				}
				form->Close();
			}
			if (!cancelat) {

				int seientFila = -1;
				char seientColumna = '.';

				AirPlanner::FormReservarVol^ form = gcnew AirPlanner::FormReservarVol(reserves, idVol, seientFila, seientColumna);
				if (form->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {

					MessageBox::Show("Reserva cancelada.", "Cancel·lat", MessageBoxButtons::OK, MessageBoxIcon::Information);
					cancelat = true;
				}
				else {
					std::vector<std::pair<int, char>>* vect = form->vec;

					//form->ShowDialog();
					CapaDePresentacio& capaPresentacio = CapaDePresentacio::getInstance();
					capaPresentacio.processarReservarVol(vecReserves, *vect);
				}
			}
			else {

				MessageBox::Show("Reserva cancelada.", "Cancel·lat", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (System::Exception^ ex) {

			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		Launcher::Instance->formStack->Pop();
		this->Close(); // Cierra el formulario actual
	}
	};
}