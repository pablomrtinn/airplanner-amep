#pragma once
#include <msclr/marshal_cppstd.h>
#include "FormReservarVol.h"
#include "PassarelaUsuari.h"
#include "AirPlannerSingleton.h"
#include "CapaDePresentacio.h"
#include "Launcher.h"

using namespace msclr::interop;
using namespace System::Globalization;
namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormModificarReserva
	/// </summary>
	public ref class FormModificaReservaVol : public System::Windows::Forms::Form
	{
	private:
		String^ correu;
		String^ idVol;
		int  seientFila;
		char seientColumna;
		String^ nom;
		String^ tipusEquipatge;
		String^ origen;
		String^ desti;
		String^ dataVol;
		String^ genere;
		String^ dataNeix;
		float preuReserva;
	public:
		FormModificaReservaVol(String^correuClient, String^ idV, String^ origenVol, String^ destiVol, String^ dataVolReserva, int seientF, char seientC, String^ nomReserva, String^ tipusEquipatgeReserva, float preu)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
			this->idVol = idV;
			this->origen = origenVol;
			this->desti = destiVol;
			this->dataVol = dataVolReserva;
			this->seientFila = seientF;
			this->seientColumna = seientC;
			this->nom = nomReserva;
			this->tipusEquipatge = tipusEquipatgeReserva;
			this->preuReserva = preu;
			this->correu = correuClient;
			//
			//TODO: agregar codigo de constructor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se esten usando.
		/// </summary>
		~FormModificaReservaVol()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Label^ labelInfoVol;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ TITOL;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TITOL = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labelInfoVol = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->monthCalendar1->Location = System::Drawing::Point(1002, 717);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 28;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(624, 717);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(295, 42);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Data Naixement ";
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Home", L"Dona", L"Prefereixo no dir-ho" });
			this->comboBox2->Location = System::Drawing::Point(1002, 628);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(296, 33);
			this->comboBox2->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(624, 619);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(293, 42);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Gènere               ";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"De ma", L"Maleta Gran", L"Maleta Petita" });
			this->comboBox1->Location = System::Drawing::Point(1002, 533);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(296, 33);
			this->comboBox1->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(624, 524);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(299, 42);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Tipus Equipatge ";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(1002, 437);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(296, 31);
			this->textBox1->TabIndex = 21;
			this->textBox1->Text = L"Nom complet ";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(624, 426);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(304, 42);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Nom Complet      ";
			// 
			// TITOL
			// 
			this->TITOL->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TITOL->AutoSize = true;
			this->TITOL->BackColor = System::Drawing::SystemColors::Control;
			this->TITOL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TITOL->ForeColor = System::Drawing::Color::RoyalBlue;
			this->TITOL->Location = System::Drawing::Point(574, 162);
			this->TITOL->Name = L"TITOL";
			this->TITOL->Size = System::Drawing::Size(784, 73);
			this->TITOL->TabIndex = 22;
			this->TITOL->Text = L"MODIFICA LA RESERVA";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Tomato;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(178, 929);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 71);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Cancel·lar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormModificaReservaVol::button1_Cancel);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1477, 929);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(230, 71);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Continua";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormModificaReservaVol::button1_Continua);
			// 
			// labelInfoVol
			// 
			this->labelInfoVol->AutoSize = true;
			this->labelInfoVol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelInfoVol->Location = System::Drawing::Point(402, 306);
			this->labelInfoVol->Name = L"labelInfoVol";
			this->labelInfoVol->Size = System::Drawing::Size(85, 25);
			this->labelInfoVol->TabIndex = 31;
			this->labelInfoVol->Text = L"InfoVol";
			// 
			// FormModificarReserva
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1920, 1061);
			this->Controls->Add(this->labelInfoVol);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TITOL);
			this->Name = L"FormModificarReserva";
			this->Text = L"FormModificarReserva";
			this->Load += gcnew System::EventHandler(this, &FormModificaReservaVol::FormModificarReserva_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Cancel(System::Object^ sender, System::EventArgs^ e) {

		Launcher::Instance->formStack->Pop();
		this->Close();
	}
	private: System::Void FormModificarReserva_Load(System::Object^ sender, System::EventArgs^ e) {

		try {

			this->labelInfoVol->Text = "El vol a modificar és: " + idVol + " amb origen en " + origen + " i desti " + desti + ".";

			CercadoraReserva cerca;

			String^ auxiliar = idVol;
			std::string vol = msclr::interop::marshal_as<std::string>(auxiliar);

			//String^ correuManaged = gcnew String(correu);
			//String^ volManaged = gcnew String(vol.c_str());

			String^ correu_aux = correu;
			string correuC = msclr::interop::marshal_as<std::string>(correu_aux);
			PassarelaReserva reserva = cerca.cercaReserva(correuC, vol, seientFila, seientColumna);

			this->textBox1->Text = nom;

			if (tipusEquipatge == "De_Ma") {
				this->comboBox1->SelectedIndex = 0;
			}
			else if (tipusEquipatge == "Maleta_Gran") {
				this->comboBox1->SelectedIndex = 1;
			}
			else if (tipusEquipatge == "Maleta_Petita") {
				this->comboBox1->SelectedIndex = 2;
			}

			genere = marshal_as<System::String^>(reserva.obteGenere());
			if (genere == "Altre") {

				this->comboBox2->SelectedIndex = 2;
			}
			else {

				this->comboBox2->SelectedItem = genere;
			}

			string dataText = reserva.obteDataNaixement();

			dataNeix = marshal_as<System::String^>(dataText);

			System::DateTime data = System::DateTime::ParseExact(
				dataNeix,
				"yyyy-MM-dd",
				CultureInfo::InvariantCulture
			);

			monthCalendar1->SelectionStart = data;

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void button1_Continua(System::Object^ sender, System::EventArgs^ e) {

		nom = this->textBox1->Text;

		String^ tipusEquipatgeAux = comboBox1->SelectedItem->ToString();
		if (tipusEquipatgeAux == "De ma") {
			tipusEquipatge = "De_Ma";
		}
		else if (tipusEquipatgeAux == "Maleta Gran") {
			tipusEquipatge = "Maleta_Gran";
		}
		else if (tipusEquipatgeAux == "Maleta Petita") {
			tipusEquipatge = "Maleta_Petita";
		}

		dataNeix = monthCalendar1->SelectionStart.ToString("yyyy-MM-dd");


		String^ genereAux = comboBox2->SelectedItem->ToString();
		if (genereAux == "Dona") {
			genere = "Dona";
		}
		else if (genereAux == "Home") {
			genere = "Home";
		}
		else {
			genere = "Altre";
		}

		// Obtener la fecha seleccionada y la fecha actual
		DateTime dataSeleccionada = monthCalendar1->SelectionStart;
		DateTime fechaActual = DateTime::Now;

		// Verificar si la fecha seleccionada es mayor que hoy
		if (dataSeleccionada > fechaActual) {
			MessageBox::Show("Error, la data de naixement no pot ser superior a avui.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (dataSeleccionada.Date == fechaActual.Date) {
			MessageBox::Show("Segur que has nascut avui...", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;

		}
		else if (nom == "" || nom == "Nom complet ") {
			MessageBox::Show("Error, el camp 'nom complet' esta buit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}


		AirPlanner::FormReservarVol^ form = gcnew AirPlanner::FormReservarVol(1, idVol, seientFila, seientColumna);
		if (form->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {

			MessageBox::Show("Reserva cancelada.", "Cancel·lat", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {

			std::vector<std::pair<int, char>>* vect = form->vec;

			//String^ dataString = dataSeleccionada.ToString();
			String^ dataAux = dataNeix;
			string _dataNeixement = marshal_as<std::string>(dataAux);

			String^ aux = tipusEquipatge;
			string _tipusEquipatge = marshal_as<std::string>(aux);

			String^ _nomAux = nom;
			string _nom = marshal_as<std::string>(_nomAux);

			string _genere = marshal_as<std::string>(genereAux);

			String^ idVolAux = idVol;
			string _idVol = marshal_as<std::string>(idVolAux);

			String^ correuAux = correu;
			string correuC = msclr::interop::marshal_as<std::string>(correuAux);

			//form->ShowDialog();
			CapaDePresentacio& capaPresentacio = CapaDePresentacio::getInstance();

			capaPresentacio.processarModificaReservaVol(correuC, seientFila, seientColumna, *vect, _idVol, _tipusEquipatge, _nom, _genere, _dataNeixement, preuReserva);
			
		}
		Launcher::Instance->formStack->Pop();
		this->Close();
	}
	};
}