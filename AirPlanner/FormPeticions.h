#pragma once
#include "CapaDePresentacio.h"
#include "FormMotiu.h"
#include <msclr/marshal_cppstd.h>
#include "Launcher.h"
namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FormPeticions : public System::Windows::Forms::Form
	{
	public:
		FormPeticions(void)
		{
			InitializeComponent();
			this->Shown += gcnew System::EventHandler(this, &FormPeticions::FormPeticions_Load);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormPeticions::dataGridView1_CellContentClick);
		}

	protected:
		~FormPeticions()
		{
			if (components) {
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPeticions::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(59, 929);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 79);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Enrere";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormPeticions::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(189, 320);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1552, 533);
			this->dataGridView1->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label4->Location = System::Drawing::Point(490, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(956, 97);
			this->label4->TabIndex = 21;
			this->label4->Text = L"RESOLDRE PETICIONS";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-13, -27);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1930, 1095);
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			// 
			// FormPeticions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"FormPeticions";
			this->Text = L"AirPlanner";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}

	private: System::Void FormPeticions_Load(System::Object^ sender, System::EventArgs^ e) {
		MostrarPeticions();
	}

	private: System::Void MostrarPeticions() {
		try {
			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
			vector<DTOPeticions> peticions = presentacio.processarConsultarPeticions();

			dataGridView1->SuspendLayout();
			dataGridView1->RowHeadersVisible = false;
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();
			dataGridView1->AllowUserToAddRows = false;
			dataGridView1->AllowUserToResizeColumns = false;
			dataGridView1->AllowUserToResizeRows = false;

			// Ajustar automàticament l'amplada de les columnes
			dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;

			// Habilitar la selecció de fila sencera
			dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
			dataGridView1->MultiSelect = false;
			dataGridView1->ReadOnly = true;

			// Columnes de dades
			dataGridView1->Columns->Add("Vol", "Vol");
			dataGridView1->Columns->Add("Origen", "Origen");
			dataGridView1->Columns->Add("Desti", "Desti");
			dataGridView1->Columns->Add("Sortida", "Sortida");
			dataGridView1->Columns->Add("Arribada", "Arribada");
			dataGridView1->Columns->Add("Preu", "Preu");
			dataGridView1->Columns->Add("Model", "Model");
			dataGridView1->Columns->Add("Aerolinia", "Aerolínia");
			dataGridView1->Columns->Add("DataSolicitud", "Data sol·licitud");

			// Columnes de botons
			// Columnes de botons
			DataGridViewButtonColumn^ colAprovar = gcnew DataGridViewButtonColumn();
			colAprovar->Name = "Aprovar";
			colAprovar->Text = "Aprovar";
			colAprovar->HeaderText = "";
			colAprovar->UseColumnTextForButtonValue = true;
			colAprovar->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
			colAprovar->DefaultCellStyle->BackColor = System::Drawing::Color::Green; // Color verd per aprovar
			colAprovar->DefaultCellStyle->ForeColor = System::Drawing::Color::White;  // Text blanc per aprovar
			dataGridView1->Columns->Add(colAprovar);

			DataGridViewButtonColumn^ colDenegar = gcnew DataGridViewButtonColumn();
			colDenegar->Name = "Denegar";
			colDenegar->Text = "Denegar";
			colDenegar->HeaderText = "";
			colDenegar->UseColumnTextForButtonValue = true;
			colDenegar->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
			colDenegar->DefaultCellStyle->BackColor = System::Drawing::Color::Red;   // Color vermell per denegar
			colDenegar->DefaultCellStyle->ForeColor = System::Drawing::Color::White;  // Text blanc per denegar
			dataGridView1->Columns->Add(colDenegar);

			if (peticions.empty()) {
				MessageBox::Show("No hi ha peticions disponibles al sistema.",
					"Sense peticions", MessageBoxButtons::OK, MessageBoxIcon::Information);
				dataGridView1->ResumeLayout();
				return;
			}

			// Omple files
			for (const auto& peticion : peticions) {
				dataGridView1->Rows->Add(
					ConvertToManagedString(peticion.obteIdVol()),
					ConvertToManagedString(peticion.obteOrigen()),
					ConvertToManagedString(peticion.obteDesti()),
					ConvertToManagedString(peticion.obteSortidaPrevista()),
					ConvertToManagedString(peticion.obteArribadaPrevista()),
					peticion.obtePreu().ToString("F2") + " €",
					ConvertToManagedString(peticion.obteModelAvio()),
					ConvertToManagedString(peticion.obteCorreuAerolinia()),
					ConvertToManagedString(peticion.obteDataSolicitud())
				);
			}

			// Configurar el color de selecció (fons blau)
			dataGridView1->DefaultCellStyle->SelectionBackColor = Color::DodgerBlue;
			dataGridView1->DefaultCellStyle->SelectionForeColor = Color::White;

			dataGridView1->ResumeLayout();
			dataGridView1->ClearSelection();
		}
		catch (Exception^ ex) {
			MessageBox::Show("S'ha produït un error en mostrar les peticions:\n" + ex->Message,
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try {
			if (e->RowIndex < 0) return;

			String^ idVol = dataGridView1->Rows[e->RowIndex]->Cells["Vol"]->Value->ToString();
			string idVolStd = msclr::interop::marshal_as<std::string>(idVol);

			String^ dataSolicitud = dataGridView1->Rows[e->RowIndex]->Cells["DataSolicitud"]->Value->ToString();
			System::DateTime dataSolicitudDateTime = Convert::ToDateTime(dataSolicitud);
			String^ dataSolicitudIso = dataSolicitudDateTime.ToString("yyyy-MM-dd HH:mm:ss");
			string dataSolicitudStd = msclr::interop::marshal_as<std::string>(dataSolicitudIso);

			String^ colName = dataGridView1->Columns[e->ColumnIndex]->Name;

			if (colName == "Aprovar") {
				AirPlanner::FormMotiu^ formMotiu = gcnew AirPlanner::FormMotiu("Aprovar", idVol);

				if (formMotiu->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					string motiuStd = msclr::interop::marshal_as<std::string>(formMotiu->MotiuResolucio);
					CapaDePresentacio::getInstance().processarAprovarPeticio(idVolStd, motiuStd, dataSolicitudStd);

					MessageBox::Show("Vol " + idVol + " aprovat correctament.", "Aprovar", MessageBoxButtons::OK, MessageBoxIcon::Information);
					MostrarPeticions();
				}
			}
			else if (colName == "Denegar") {
				AirPlanner::FormMotiu^ formMotiu = gcnew AirPlanner::FormMotiu("Denegar", idVol);

				if (formMotiu->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					string motiuStd = msclr::interop::marshal_as<std::string>(formMotiu->MotiuResolucio);
					CapaDePresentacio::getInstance().processarDenegarPeticio(idVolStd, motiuStd, dataSolicitudStd);

					MessageBox::Show("Vol " + idVol + " denegat correctament.", "Denegar", MessageBoxButtons::OK, MessageBoxIcon::Information);
					MostrarPeticions();
				}
			}
		}
		catch (Exception^ ex) {
			if (ex->Message->Contains("Duplicate entry")) {
				MessageBox::Show(
					"S'ha produït un error:\n" + "Ja existeix un vol amb aquest identificador",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
			}
			else{
				MessageBox::Show(
					"S'ha produït un error:\n" + ex->Message,
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
			}
		}
	}

	private: System::String^ ConvertToManagedString(const std::string& input) {
		return gcnew System::String(input.c_str());
	}
};
}
//
