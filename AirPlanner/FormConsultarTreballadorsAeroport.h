#pragma once
#include "CapaDePresentacio.h"
#include "FormModificaTreballador.h"
#include "Launcher.h"
namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormConsultarTreballadorsAeroport
	/// </summary>
	public ref class FormConsultarTreballadorsAeroport : public System::Windows::Forms::Form
	{
	public:
		FormConsultarTreballadorsAeroport(void)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormConsultarTreballadorsAeroport()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ correuElectronic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewButtonColumn^ modifica;
	private: System::Windows::Forms::DataGridViewButtonColumn^ esborra;
	private: System::Windows::Forms::PictureBox^ pictureBox1;














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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormConsultarTreballadorsAeroport::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->correuElectronic = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->modifica = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->esborra = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::Salmon;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(165, 904);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(230, 83);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Enrere";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormConsultarTreballadorsAeroport::button2_Enrere);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label4->Location = System::Drawing::Point(193, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1544, 97);
			this->label4->TabIndex = 7;
			this->label4->Text = L"TREBALLADORS DEL TEU AEROPORT:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->nom, this->correuElectronic,
					this->id, this->modifica, this->esborra
			});
			this->dataGridView1->Location = System::Drawing::Point(597, 301);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(636, 581);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormConsultarTreballadorsAeroport::dataGridView1_CellContentClick);
			// 
			// nom
			// 
			this->nom->HeaderText = L"Nom";
			this->nom->Name = L"nom";
			this->nom->ReadOnly = true;
			// 
			// correuElectronic
			// 
			this->correuElectronic->HeaderText = L"Correu Electronic";
			this->correuElectronic->Name = L"correuElectronic";
			this->correuElectronic->ReadOnly = true;
			// 
			// id
			// 
			this->id->HeaderText = L"ID";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			// 
			// modifica
			// 
			this->modifica->HeaderText = L"Modifica";
			this->modifica->Name = L"modifica";
			this->modifica->ReadOnly = true;
			this->modifica->Text = L"Modifica";
			this->modifica->UseColumnTextForButtonValue = true;
			// 
			// esborra
			// 
			this->esborra->HeaderText = L"Esborra";
			this->esborra->Name = L"esborra";
			this->esborra->ReadOnly = true;
			this->esborra->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->esborra->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->esborra->Text = L"Esborra";
			this->esborra->UseColumnTextForButtonValue = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, -4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1925, 1070);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// FormConsultarTreballadorsAeroport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1920, 1061);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormConsultarTreballadorsAeroport";
			this->Text = L"AirPlanner";
			this->Load += gcnew System::EventHandler(this, &FormConsultarTreballadorsAeroport::FormConsultaTreballadorsAeroport_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Enrere(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && dataGridView1->Columns[e->ColumnIndex]->Name == "esborra") {
			System::String^ CorreuTreballador = dataGridView1->Rows[e->RowIndex]->Cells["correuElectronic"]->Value->ToString();
			System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
				"Estas segur que vols esborrar l treballador de correu " + CorreuTreballador + " ? ", "Confirmació",
				System::Windows::Forms::MessageBoxButtons::YesNo,
				System::Windows::Forms::MessageBoxIcon::Question
			);

			if (result == System::Windows::Forms::DialogResult::Yes) {

				try {
					std::string CorreuTreballadorStd = msclr::interop::marshal_as<std::string>(CorreuTreballador);
					CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
					presentacio.processarEsborraTreballador(CorreuTreballadorStd);
					MessageBox::Show("Treballador esborrat correctament!", "Treballador Esborrat", MessageBoxButtons::OK, MessageBoxIcon::Information);
					FormConsultaTreballadorsAeroport_Load(sender, e);
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		else if (e->RowIndex >= 0 && dataGridView1->Columns[e->ColumnIndex]->Name == "modifica") {
			try {
				System::String^ CorreuTreballador = dataGridView1->Rows[e->RowIndex]->Cells["CorreuElectronic"]->Value->ToString();
				Launcher::Instance->formStack->Pop();
				Launcher::Instance->formStack->Push(gcnew FormConsultarTreballadorsAeroport());
				Launcher::Instance->formStack->Push(gcnew AirPlanner::FormModificaTreballador(CorreuTreballador));
				this->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		//FormConsultaTreballadorsAeroport_Load(sender, e);
	}

	private: System::Void FormConsultaTreballadorsAeroport_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			dataGridView1->Rows->Clear();
			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
			std::vector <PassarelaTreballador> treballadors = presentacio.processarConsultarTreballadorsAeroport();
			for (int i = 0; i < treballadors.size(); i++) {

				PassarelaTreballador treballador = treballadors[i];

				String^ correu = gcnew String(treballador.obteCorreuElectronic().c_str());

				CercadoraUsuari& cercadoraUsuari = CercadoraUsuari::getInstance();
				PassarelaUsuari usuari = cercadoraUsuari.cercaUsuari(correu);

				String^ nom = gcnew String(usuari.obteNom().c_str());
				String^ correuElectronic = gcnew String(treballador.obteCorreuElectronic().c_str());
				String^ id = gcnew String(treballador.obteId().c_str());

				int rowIndex = dataGridView1->Rows->Add(nom, correuElectronic, id);

				// Pintar la fila de gris
				dataGridView1->Rows[rowIndex]->DefaultCellStyle->BackColor = System::Drawing::Color::LightGray;
			}
			//this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormConsultarTreballadorsAeroport::dataGridView1_CellContentClick);

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
