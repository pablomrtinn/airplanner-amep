#pragma once
#include "CapaDePresentacio.h"
#include <msclr/marshal_cppstd.h>
#include "Launcher.h"
namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FormEstatPeticions : public System::Windows::Forms::Form
	{
	public:
		FormEstatPeticions(void)
		{
			InitializeComponent();
			this->Shown += gcnew System::EventHandler(this, &FormEstatPeticions::FormPeticions_Load);
		}

	protected:
		~FormEstatPeticions()
		{
			if (components) {
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	private: System::Void InitializeComponent(void)
	{
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEstatPeticions::typeid));
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
		this->SuspendLayout();
		// 
		// button1
		// 
		this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->button1->BackColor = System::Drawing::Color::Salmon;
		this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->button1->Location = System::Drawing::Point(194, 969);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(150, 50);
		this->button1->TabIndex = 1;
		this->button1->Text = L"Enrere";
		this->button1->UseVisualStyleBackColor = false;
		this->button1->Click += gcnew System::EventHandler(this, &FormEstatPeticions::button1_Click);
		// 
		// dataGridView1
		// 
		this->dataGridView1->AllowUserToResizeColumns = false;
		this->dataGridView1->AllowUserToResizeRows = false;
		this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView1->Location = System::Drawing::Point(194, 123);
		this->dataGridView1->MultiSelect = false;
		this->dataGridView1->Name = L"dataGridView1";
		this->dataGridView1->RowTemplate->Height = 33;
		this->dataGridView1->Size = System::Drawing::Size(1552, 827);
		this->dataGridView1->TabIndex = 3;
		// 
		// label1
		// 
		this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
		this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
		this->label1->Location = System::Drawing::Point(603, 23);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(817, 97);
		this->label1->TabIndex = 5;
		this->label1->Text = L"PETICIONS DE VOL";
		// 
		// pictureBox1
		// 
		this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
		this->pictureBox1->Location = System::Drawing::Point(-1, -1);
		this->pictureBox1->Name = L"pictureBox1";
		this->pictureBox1->Size = System::Drawing::Size(1905, 1042);
		this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->pictureBox1->TabIndex = 6;
		this->pictureBox1->TabStop = false;
		// 
		// FormEstatPeticions
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(1904, 1041);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->dataGridView1);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->pictureBox1);
		this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
		this->Name = L"FormEstatPeticions";
		this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
		this->Text = L"AirPlanner";
		this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
			vector<DTOEstatPeticions> peticions = presentacio.processarConsultarEstatPeticions();

			dataGridView1->SuspendLayout();
			dataGridView1->RowHeadersVisible = false;
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();
			dataGridView1->AllowUserToAddRows = false;

			dataGridView1->Columns->Add("Vol", "Vol");
			dataGridView1->Columns->Add("Origen", "Origen");
			dataGridView1->Columns->Add("Desti", "Desti");
			dataGridView1->Columns->Add("Sortida", "Sortida");
			dataGridView1->Columns->Add("Arribada", "Arribada");
			dataGridView1->Columns->Add("Preu", "Preu");
			dataGridView1->Columns->Add("Model", "Model");
			dataGridView1->Columns->Add("Aeroport", "Aeroport");
			dataGridView1->Columns->Add("DataSolicitud", "Data sol·licitud");
			dataGridView1->Columns->Add("Estat", "Estat");
			dataGridView1->Columns->Add("DataResolucio", "Data resolució");
			dataGridView1->Columns->Add("MotiuResolucio", "Motiu resolució");

			auto motiuCol = dataGridView1->Columns["MotiuResolucio"];
			motiuCol->DefaultCellStyle->WrapMode = DataGridViewTriState::True;
			motiuCol->AutoSizeMode = DataGridViewAutoSizeColumnMode::DisplayedCells;
			motiuCol->MinimumWidth = 150;

			dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
			dataGridView1->ReadOnly = true;

			for (const auto& peticion : peticions) {
				String^ motiuRaw = ConvertToManagedString(peticion.obteMotiuResolucio());
				String^ motiuFormatejat = InsertarSaltsDeLíniaCada(motiuRaw, 84);

				int index = dataGridView1->Rows->Add(
					ConvertToManagedString(peticion.obteIdVol()),
					ConvertToManagedString(peticion.obteOrigen()),
					ConvertToManagedString(peticion.obteDesti()),
					ConvertToManagedString(peticion.obteSortidaPrevista()),
					ConvertToManagedString(peticion.obteArribadaPrevista()),
					peticion.obtePreu().ToString("F2") + " €",
					ConvertToManagedString(peticion.obteModelAvio()),
					ConvertToManagedString(peticion.obteCorreuAeroport()),
					ConvertToManagedString(peticion.obteDataSolicitud()),
					ConvertToManagedString(peticion.obteEstat()),
					ConvertToManagedString(peticion.obteDataResolucio()),
					motiuFormatejat
				);

				DataGridViewRow^ dgvRow = dataGridView1->Rows[index];
				String^ estat = ConvertToManagedString(peticion.obteEstat());

				if (estat == "Denegada") {
					dgvRow->DefaultCellStyle->BackColor = Color::Salmon;
				}
				else if (estat == "Aprovada") {
					dgvRow->DefaultCellStyle->BackColor = Color::PaleGreen;
				}
				else if (estat == "Pendent") {
					dgvRow->DefaultCellStyle->BackColor = Color::LightYellow;
				}
			}

			dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;

			dataGridView1->Columns["Preu"]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			dataGridView1->Columns["Aeroport"]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			dataGridView1->Columns["Sortida"]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			dataGridView1->Columns["Arribada"]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			dataGridView1->Columns["DataSolicitud"]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			dataGridView1->Columns["DataResolucio"]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;

			dataGridView1->ResumeLayout();
			dataGridView1->ClearSelection();
		}
		catch (Exception^ ex) {
			MessageBox::Show("S'ha produït un error en mostrar les peticions:\n" + ex->Message,
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::String^ InsertarSaltsDeLíniaCada(System::String^ text, int interval) {
		if (String::IsNullOrEmpty(text) || text->Length <= interval)
			return text;

		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		for (int i = 0; i < text->Length; i++) {
			sb->Append(text[i]);
			if ((i + 1) % interval == 0 && i != text->Length - 1)
				sb->Append(Environment::NewLine);
		}
		return sb->ToString();
	}


	private: System::String^ ConvertToManagedString(const std::string& input) {
		return gcnew System::String(input.c_str());
	}

	};
}
