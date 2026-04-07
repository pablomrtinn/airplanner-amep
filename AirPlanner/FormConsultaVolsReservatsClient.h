#pragma once
#include "CapaDePresentacio.h"
#include "DTOReservesClient.h"
#include "FormModificarReserva.h"
using namespace System::Globalization;
#include "Launcher.h"
namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormConsultaVolsReservatsClient
	/// </summary>
	public ref class FormConsultaVolsReservatsClient : public System::Windows::Forms::Form
	{
	public:
		FormConsultaVolsReservatsClient(void)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FormConsultaVolsReservatsClient::FormConsultaVolsReservatsClient_Load);
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormConsultaVolsReservatsClient()
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
	private: System::Windows::Forms::DataGridViewButtonColumn^ CancelarReserva;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormConsultaVolsReservatsClient::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
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
			this->CancelarReserva = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->idVol,
					this->NomPassatger, this->TipusEquipatge, this->Origen, this->Desti, this->SeientFila, this->SeientColumna, this->dataVol, this->preuReserva,
					this->ModificaReserva, this->CancelarReserva
			});
			this->dataGridView1->Location = System::Drawing::Point(177, 350);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->Format = L"N2";
			dataGridViewCellStyle2->NullValue = nullptr;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1508, 363);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormConsultaVolsReservatsClient::dataGridView1_CellContentClick);
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
			// CancelarReserva
			// 
			this->CancelarReserva->HeaderText = L"Cancel·lar Reserva";
			this->CancelarReserva->Name = L"CancelarReserva";
			this->CancelarReserva->ReadOnly = true;
			this->CancelarReserva->Text = L"Cancel·lar Reserva";
			this->CancelarReserva->UseColumnTextForButtonValue = true;
			this->CancelarReserva->Width = 158;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(177, 872);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 71);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Enrere";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormConsultaVolsReservatsClient::button1_Enrere);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(570, 168);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(921, 97);
			this->label1->TabIndex = 7;
			this->label1->Text = L"CONSULTA RESERVES";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1920, 1080);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// FormConsultaVolsReservatsClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormConsultaVolsReservatsClient";
			this->Text = L"AirPlanner";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void FormConsultaVolsReservatsClient_Load(System::Object^ sender, System::EventArgs^ e) {
		carregaReserves();
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && dataGridView1->Columns[e->ColumnIndex]->Name == "ModificaReserva") {
			try {

				int rowIndex = dataGridView1->CurrentRow->Index;
				if (dataGridView1->Rows[rowIndex]->DefaultCellStyle->BackColor == System::Drawing::Color::FromArgb(255, 204, 204)) {

					MessageBox::Show("No es pot modificar una reserva d'un vol que ja ha passat. \nDisculpa les molèsties.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {

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
					Launcher::Instance->formStack->Push(gcnew FormConsultaVolsReservatsClient());
					Launcher::Instance->formStack->Push(gcnew AirPlanner::FormModificarReserva(_idVol, _origen, _desti, _dataVol, _seientF, _seientC, _nomPassatger, _tipusEquipatge, _preuReserva));
					this->Close();
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if (e->RowIndex >= 0 && dataGridView1->Columns[e->ColumnIndex]->Name == "CancelarReserva") {
			try {

				System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
					"Estas segur que vols cancelar aquesta reserva?", "Confirmació",
					System::Windows::Forms::MessageBoxButtons::YesNo,
					System::Windows::Forms::MessageBoxIcon::Question
				);

				if (result == System::Windows::Forms::DialogResult::Yes) {
					try {

						String^ _idVol = dataGridView1->Rows[e->RowIndex]->Cells["idVol"]->Value->ToString();
						string idVol = msclr::interop::marshal_as<string>(_idVol);

						int seientF = System::Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells["SeientFila"]->Value);

						String^ _seientC = dataGridView1->Rows[e->RowIndex]->Cells["SeientColumna"]->Value->ToString();
						string seientC = msclr::interop::marshal_as<string>(_seientC);

						CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
						presentacio.processarCancelarReserva(idVol, seientF, seientC);

						dataGridView1->Rows->Clear();
						carregaReserves();
						MessageBox::Show("Reserva cancel·lada correctament.", "Informació", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					catch (Exception^ ex) {
						MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}

			}
			catch (std::exception& e) {
				MessageBox::Show("Error: " + gcnew System::String(e.what()));
			}
		}
		//FormConsultaTreballadorsAeroport_Load(sender, e);
	}

	private: void carregaReserves() {
		try {

			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
			std::vector <DTOReservesClient> reserves = presentacio.processarConsultarVolsReservatsClient();
			if (reserves.size() == 0) {

				MessageBox::Show("No hi ha reserves encara.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else {

				for (int i = 0; i < reserves.size(); i++) {

					DTOReservesClient reserva = reserves[i];

					String^ idVol = gcnew String(reserva.obteIdVol().c_str());
					String^ nomPassatger = gcnew String(reserva.obteNomPassatger().c_str());
					String^ tipusEquipatge = gcnew String(reserva.obteTipusEquipatge().c_str());
					String^ origen = gcnew String(reserva.obteSiglesOrigen().c_str());
					String^ desti = gcnew String(reserva.obteSiglesDesti().c_str());
					String^ seientFila = gcnew String(std::to_string(reserva.obteSeientFila()).c_str());
					String^ seientColumna = gcnew String(System::Char::ToString(reserva.obteSeientColumna()));
					String^ dataVol = gcnew String(reserva.obteDataVol().c_str());
					double preuReservaVal = reserva.obtePreuReserva();
					String^ preuReserva = preuReservaVal.ToString("F2", System::Globalization::CultureInfo::InvariantCulture);

					//dataGridView1->Rows->Add(idVol, nomPassatger, tipusEquipatge, origen, desti, seientFila, seientColumna, dataVol, preuReserva);

					int rowIndex = dataGridView1->Rows->Add(idVol, nomPassatger, tipusEquipatge, origen, desti, seientFila, seientColumna, dataVol, preuReserva);

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
				dataGridView1->Sort(dataGridView1->Columns["dataVol"], System::ComponentModel::ListSortDirection::Descending);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button1_Enrere(System::Object^ sender, System::EventArgs^ e) {
		//Hauria de tronar al Form1????????????????????
		Launcher::Instance->formStack->Pop();
		this->Close();
	}
	};
}