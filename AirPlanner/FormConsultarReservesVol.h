#pragma once
#include "CapaDePresentacio.h"
#include "DTOReservesClient.h"
#include "FormModificaReservaVol.h"
#include "Launcher.h"

using namespace System::Globalization;

namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormConsultarReservesVol
	/// </summary>
	public ref class FormConsultarReservesVol : public System::Windows::Forms::Form
	{
	private: 
		String^ iDVol;
	public:
		FormConsultarReservesVol(String^ idV)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FormConsultarReservesVol::FormConsultaVolsReservatsClient_Load);
			this->iDVol = idV;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormConsultarReservesVol()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ idVol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NomPassatger;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TipusEquipatge;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Origen;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Desti;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SeientFila;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SeientColumna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataVol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ preuReserva;
	private: System::Windows::Forms::DataGridViewButtonColumn^ ModificaReserva;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CorreuClient;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormConsultarReservesVol::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->CorreuClient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->idVol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NomPassatger = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TipusEquipatge = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Origen = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Desti = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SeientFila = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SeientColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataVol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->preuReserva = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ModificaReserva = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->CorreuClient,
					this->idVol, this->NomPassatger, this->TipusEquipatge, this->Origen, this->Desti, this->SeientFila, this->SeientColumna, this->dataVol,
					this->preuReserva, this->ModificaReserva
			});
			this->dataGridView1->Location = System::Drawing::Point(224, 348);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->Format = L"N2";
			dataGridViewCellStyle6->NullValue = nullptr;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1482, 363);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormConsultarReservesVol::button_Modifica);
			// 
			// CorreuClient
			// 
			this->CorreuClient->HeaderText = L"Correu Client";
			this->CorreuClient->Name = L"CorreuClient";
			this->CorreuClient->ReadOnly = true;
			this->CorreuClient->Width = 133;
			// 
			// idVol
			// 
			this->idVol->HeaderText = L"Identificador de Vol";
			this->idVol->Name = L"idVol";
			this->idVol->ReadOnly = true;
			this->idVol->Width = 155;
			// 
			// NomPassatger
			// 
			this->NomPassatger->HeaderText = L"Nom del Passatger";
			this->NomPassatger->Name = L"NomPassatger";
			this->NomPassatger->ReadOnly = true;
			this->NomPassatger->Width = 177;
			// 
			// TipusEquipatge
			// 
			this->TipusEquipatge->HeaderText = L"Tipus Equipatge";
			this->TipusEquipatge->Name = L"TipusEquipatge";
			this->TipusEquipatge->ReadOnly = true;
			this->TipusEquipatge->Width = 154;
			// 
			// Origen
			// 
			this->Origen->HeaderText = L"Origen";
			this->Origen->Name = L"Origen";
			this->Origen->ReadOnly = true;
			this->Origen->Width = 90;
			// 
			// Desti
			// 
			this->Desti->HeaderText = L"Destí";
			this->Desti->Name = L"Desti";
			this->Desti->ReadOnly = true;
			this->Desti->Width = 79;
			// 
			// SeientFila
			// 
			this->SeientFila->HeaderText = L"Seient Fila";
			this->SeientFila->Name = L"SeientFila";
			this->SeientFila->ReadOnly = true;
			this->SeientFila->Width = 114;
			// 
			// SeientColumna
			// 
			this->SeientColumna->HeaderText = L"Seient Columna";
			this->SeientColumna->Name = L"SeientColumna";
			this->SeientColumna->ReadOnly = true;
			this->SeientColumna->Width = 151;
			// 
			// dataVol
			// 
			this->dataVol->HeaderText = L"Data del Vol";
			this->dataVol->Name = L"dataVol";
			this->dataVol->ReadOnly = true;
			this->dataVol->Width = 102;
			// 
			// preuReserva
			// 
			this->preuReserva->HeaderText = L"Preu de la Reserva";
			this->preuReserva->Name = L"preuReserva";
			this->preuReserva->ReadOnly = true;
			this->preuReserva->Width = 178;
			// 
			// ModificaReserva
			// 
			this->ModificaReserva->HeaderText = L"Modifica Reserva";
			this->ModificaReserva->Name = L"ModificaReserva";
			this->ModificaReserva->ReadOnly = true;
			this->ModificaReserva->Text = L"Modificar Reserva";
			this->ModificaReserva->UseColumnTextForButtonValue = true;
			this->ModificaReserva->Width = 145;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(117, 897);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 71);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Enrere";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormConsultarReservesVol::button1_Enrere);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(504, 179);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(921, 97);
			this->label1->TabIndex = 7;
			this->label1->Text = L"CONSULTA RESERVES";
			// 
			// FormConsultarReservesVol
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1920, 1061);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormConsultarReservesVol";
			this->Text = L"AirPlanner";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void FormConsultaVolsReservatsClient_Load(System::Object^ sender, System::EventArgs^ e) {
			try {

				CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
				String^ aux = this->iDVol;
				string id = marshal_as<string>(aux);
				std::vector <DTOReservesClient> reserves = presentacio.processarConsultarReservesVols(id);
				if (reserves.size() == 0) {

					MessageBox::Show("No hi ha reserves encara.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				else {

					for (int i = 0; i < reserves.size(); i++) {

						DTOReservesClient reserva = reserves[i];

						String^ correu = gcnew String(reserva.obteCorreuClient().c_str());
						String^ idVol = gcnew String(reserva.obteIdVol().c_str());
						String^ nomPassatger = gcnew String(reserva.obteNomPassatger().c_str());
						String^ tipusEquipatge = gcnew String(reserva.obteTipusEquipatge().c_str());
						String^ origen = gcnew String(reserva.obteSiglesOrigen().c_str());
						String^ desti = gcnew String(reserva.obteSiglesDesti().c_str());
						String^ seientFila = gcnew String(std::to_string(reserva.obteSeientFila()).c_str());
						String^ seientColumna = seientColumna = gcnew String(System::Char::ToString(reserva.obteSeientColumna()));
						String^ dataVol = gcnew String(reserva.obteDataVol().c_str());
						double preuReservaVal = reserva.obtePreuReserva();
						String^ preuReserva = preuReservaVal.ToString("F2", System::Globalization::CultureInfo::InvariantCulture);

						//			   dataGridView1->Rows->Add(correu, idVol, nomPassatger, tipusEquipatge, origen, desti, seientFila, seientColumna, dataVol, preuReserva);

						int rowIndex = dataGridView1->Rows->Add(correu, idVol, nomPassatger, tipusEquipatge, origen, desti, seientFila, seientColumna, dataVol, preuReserva);

						DateTime dataVolDate;
						bool esDataValida = DateTime::TryParseExact(dataVol, "dd-MM-yyyy", CultureInfo::InvariantCulture, DateTimeStyles::None, dataVolDate);
						//bool esDataValida = DateTime::TryParse(dataVol, dataVolDate);

						DateTime avui = DateTime::Today;

						if (esDataValida) {

							if (dataVolDate.Date > avui.Date) {
								// Pintar fila verd flojo
								dataGridView1->Rows[rowIndex]->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(181, 230, 181);
							}
							else {
								// Pintar fila rojo pastel
								dataGridView1->Rows[rowIndex]->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(255, 204, 204);
							}
						}
					}
					dataGridView1->Columns["preuReserva"]->DefaultCellStyle->Format = "C2";
					dataGridView1->Sort(dataGridView1->Columns["dataVol"], System::ComponentModel::ListSortDirection::Ascending);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		private: System::Void button1_Enrere(System::Object^ sender, System::EventArgs^ e) {

			//hauria de tornar al Form1
			Launcher::Instance->formStack->Pop();
			this->Close();
		}

		private: System::Void button_Modifica(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			try {

				int rowIndex = dataGridView1->CurrentRow->Index;
				if (dataGridView1->Rows[rowIndex]->DefaultCellStyle->BackColor == System::Drawing::Color::FromArgb(255, 204, 204)) {

					MessageBox::Show("No es pot modificar una reserva d'un vol que ja ha passat. \nDisculpa les molèsties.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					System::String^ _correu = dataGridView1->Rows[e->RowIndex]->Cells["CorreuClient"]->Value->ToString();
					System::String^ _idVol = dataGridView1->Rows[e->RowIndex]->Cells["idVol"]->Value->ToString();
					System::String^ _nomPassatger = dataGridView1->Rows[e->RowIndex]->Cells["NomPassatger"]->Value->ToString();
					System::String^ _tipusEquipatge = dataGridView1->Rows[e->RowIndex]->Cells["TipusEquipatge"]->Value->ToString();
					System::String^ _origen = dataGridView1->Rows[e->RowIndex]->Cells["Origen"]->Value->ToString();
					System::String^ _desti = dataGridView1->Rows[e->RowIndex]->Cells["Desti"]->Value->ToString();
					//System::int _seientFila = dataGridView1->Rows[e->RowIndex]->Cells["SeientFila"]->Value->ToString();
					int _seientF = System::Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells["SeientFila"]->Value);
					//System::char _seientColumna = dataGridView1->Rows[e->RowIndex]->Cells["SeientColumna"]->Value->ToString();
					System::Char _seientC = System::Convert::ToChar(dataGridView1->Rows[e->RowIndex]->Cells["SeientColumna"]->Value);
					System::String^ _dataVol = dataGridView1->Rows[e->RowIndex]->Cells["dataVol"]->Value->ToString();

					// Conversión directa, respetando el punto como decimal
					float _preuReserva = Convert::ToSingle(dataGridView1->Rows[e->RowIndex]->Cells["preuReserva"]->Value, CultureInfo::InvariantCulture);

					//float _preuReserva = System::Convert::ToSingle(dataGridView1->Rows[e->RowIndex]->Cells["preuReserva"]->Value);
					System::String^ _seientFila = dataGridView1->Rows[e->RowIndex]->Cells["SeientFila"]->Value->ToString();
					System::String^ _seientColumna = dataGridView1->Rows[e->RowIndex]->Cells["SeientColumna"]->Value->ToString();

					
					Launcher::Instance->formStack->Pop();
					Launcher::Instance->formStack->Push(gcnew FormConsultarReservesVol(iDVol));
					Launcher::Instance->formStack->Push(gcnew AirPlanner::FormModificaReservaVol(_correu, _idVol, _origen, _desti, _dataVol, _seientF, _seientC, _nomPassatger, _tipusEquipatge, _preuReserva));
					this->Close();
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	};
}
