#pragma once
#include "CapaDePresentacio.h"
#include "FormConsultarReservesVol.h"
#include "Launcher.h"

namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormConsultaVolsAeroport
	/// </summary>
	public ref class FormConsultaVolsAeroport : public System::Windows::Forms::Form
	{
	private: 
		
		bool es_treballador = true; // Variable per determinar si l'usuari és treballador o no
	public:
		FormConsultaVolsAeroport(void)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
		}

	protected:
		~FormConsultaVolsAeroport()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ Enrere;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormConsultaVolsAeroport::typeid));
			this->Enrere = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Enrere
			// 
			this->Enrere->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Enrere->BackColor = System::Drawing::Color::Salmon;
			this->Enrere->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Enrere->Location = System::Drawing::Point(40, 932);
			this->Enrere->Margin = System::Windows::Forms::Padding(2);
			this->Enrere->Name = L"Enrere";
			this->Enrere->Size = System::Drawing::Size(182, 79);
			this->Enrere->TabIndex = 3;
			this->Enrere->Text = L"Enrere";
			this->Enrere->UseVisualStyleBackColor = false;
			this->Enrere->Click += gcnew System::EventHandler(this, &FormConsultaVolsAeroport::Enrere_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(217, 300);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(1516, 572);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tots els vols que surten del teu Aeroport";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(26, 33);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1468, 517);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->Sorted += gcnew System::EventHandler(this, &FormConsultaVolsAeroport::dataGridView1_Sorted);
			this->dataGridView1->DefaultCellStyle->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11);
			this->dataGridView1->ColumnHeadersDefaultCellStyle->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(413, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1184, 97);
			this->label1->TabIndex = 17;
			this->label1->Text = L"CONSULTA VOLS AEROPORT";
			
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-8, -20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1920, 1080);
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			
			// 
			// FormConsultaVolsAeroport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Enrere);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormConsultaVolsAeroport";
			this->Text = L"AirPlanner";
			
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FormConsultaVolsAeroport::FormConsultaVolsAeroport_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void FormConsultaVolsAeroport_Load(System::Object^ sender, System::EventArgs^ e) {
		try {

			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
			vector<DTOVol> vols = presentacio.processarConsultaVolsAeroport();
			String^ COL_SORTIDA_PREVISTA = "Sortida Prevista";


			DataTable^ dt = gcnew DataTable();
			dt->Columns->Add("Id Vol", String::typeid);
			dt->Columns->Add("Origen", String::typeid);
			dt->Columns->Add("Desti", String::typeid);
			dt->Columns->Add(COL_SORTIDA_PREVISTA, String::typeid);
			dt->Columns->Add("Arribada Prevista", String::typeid);
			dt->Columns->Add("Sortida Actualitzada", String::typeid);
			dt->Columns->Add("Arribada Actualitzada", String::typeid);
			dt->Columns->Add("Preu", String::typeid);
			dt->Columns->Add("Model Avió", String::typeid);

			for (const auto& vol : vols) {
				dt->Rows->Add(
					gcnew String(vol.obteIdVol().c_str()),
					gcnew String(vol.obteOrigen().c_str()),
					gcnew String(vol.obteDesti().c_str()),
					gcnew String(vol.obteSortidaPrevista().c_str()),
					gcnew String(vol.obteArribadaPrevista().c_str()),
					gcnew String(vol.obteSortidaActualitzada().c_str()),
					gcnew String(vol.obteArribadaActualitzada().c_str()),
					String::Format("{0:0.00} €", vol.obtePreu()),
					gcnew String(vol.obteModelAvio().c_str())
				);
			}

			dataGridView1->DataSource = dt;
			dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;

			for each (DataGridViewColumn ^ col in dataGridView1->Columns) {
				col->Resizable = DataGridViewTriState::False;
			}

			dataGridView1_Sorted(sender, e); // pinta les files

			bool es_treballador = true;
			AirPlannerSingleton& Airplanner = AirPlannerSingleton::getInstance();
			PassarelaUsuari* usuari = Airplanner.obteUsuari();

			if (usuari->obtetipus() == "Aeroport") {

				es_treballador = false;
			}
			else if (usuari->obtetipus() == "Treballador") {

				es_treballador = true;
			}


			if (es_treballador) {
				DataGridViewButtonColumn^ btnCol = gcnew DataGridViewButtonColumn();
				btnCol->HeaderText = "Consultar Reserves";
				btnCol->Name = "Consulta_Reserves";
				btnCol->Text = "Reserves vol";
				btnCol->UseColumnTextForButtonValue = true;
				dataGridView1->Columns->Add(btnCol);
				this->dataGridView1->CellContentClick += gcnew DataGridViewCellEventHandler(this, &FormConsultaVolsAeroport::dataGridView1_CellContentClick);
			}

			dataGridView1_Sorted(sender, e); // pinta les files

			DateTime avui = DateTime::Now;
			bool trobat = false;
			for (int i = 0; i < dataGridView1->Rows->Count && !trobat; ++i) {
				if (!dataGridView1->Rows[i]->IsNewRow) {
					DateTime sortida;
					if (DateTime::TryParse(dataGridView1->Rows[i]->Cells[COL_SORTIDA_PREVISTA]->Value->ToString(), sortida)) {
						if (sortida.Date >= avui.Date) {
							dataGridView1->FirstDisplayedScrollingRowIndex = i;
							trobat = true;
						}
					}
				}
			}
			if (!trobat && dataGridView1->Rows->Count > 0) {
				int ultimaFila = dataGridView1->Rows->Count - 1;
				if (!dataGridView1->Rows[ultimaFila]->IsNewRow)
					dataGridView1->FirstDisplayedScrollingRowIndex = ultimaFila;
				else if (ultimaFila > 0)
					dataGridView1->FirstDisplayedScrollingRowIndex = ultimaFila - 1;
			}
		}
		catch (Exception^ ex) {
			System::Diagnostics::Debug::WriteLine("Error al pintar: " + ex->Message);
		}
	}

	private: System::Void Enrere_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}

	private: System::Void dataGridView1_Sorted(System::Object^ sender, System::EventArgs^ e) {
		String^ COL_SORTIDA_PREVISTA = "Sortida Prevista";
		DateTime ara = DateTime::Now;

		for (int i = 0; i < dataGridView1->Rows->Count; ++i) {
			if (!dataGridView1->Rows[i]->IsNewRow) {
				try {
					String^ dataStr = dataGridView1->Rows[i]->Cells[COL_SORTIDA_PREVISTA]->Value->ToString();
					DateTime sortida;
					if (DateTime::TryParse(dataStr, sortida)) {
						TimeSpan diferencia = sortida - ara;

						if (sortida < ara)
							dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::LightGray;
						else if (diferencia.TotalDays <= 1)
							dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::LightCoral;
						else if (diferencia.TotalDays <= 3)
							dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::LightSalmon;
						else if (diferencia.TotalDays <= 7)
							dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::PaleGoldenrod;
						else
							dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::PaleGreen;
					}
				}
				catch (Exception^ ex) {
					System::Diagnostics::Debug::WriteLine("Error al pintar: " + ex->Message);
				}
			}
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, DataGridViewCellEventArgs^ e) {
		if (dataGridView1->Columns[e->ColumnIndex]->Name == "Consulta_Reserves" && e->RowIndex >= 0) {
			String^ idVol = dataGridView1->Rows[e->RowIndex]->Cells["Id Vol"]->Value->ToString();
			Launcher::Instance->formStack->Pop();
			Launcher::Instance->formStack->Push(gcnew FormConsultaVolsAeroport());
			Launcher::Instance->formStack->Push(gcnew AirPlanner::FormConsultarReservesVol(idVol));
			this->Close();
		}
	}
};
}   
