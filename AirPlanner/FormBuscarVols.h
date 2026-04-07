#pragma once
#include "CapaDePresentacio.h"
#include "FormNumeroReserves.h"
#include "AirPlannerSingleton.h"
#include "Launcher.h"
#include "AirPlannerSingleton.h"
#include "FormSubscripcioAvis.h"
#include "FormCtrlModificaSubscripcio.h"
namespace AirPlanner {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormBuscarVols
	/// </summary>
	public ref class FormBuscarVols : public System::Windows::Forms::Form
	{
	private:
		bool _incloureData;
	public:
		FormBuscarVols(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormBuscarVols()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::ComboBox^ desplegableOrigen;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DateTimePicker^ data;
	private: System::Windows::Forms::ComboBox^ desplegableAerolinia;


	private: System::Windows::Forms::ComboBox^ desplegableDesti;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ incloureData;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ filtrarButton;

	private: System::Windows::Forms::Label^ preuLabel;
	private: System::Windows::Forms::NumericUpDown^ preuMaxim;
	private: System::Windows::Forms::CheckBox^ aplicaPreu;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;







	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormBuscarVols::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->desplegableOrigen = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->aplicaPreu = (gcnew System::Windows::Forms::CheckBox());
			this->preuMaxim = (gcnew System::Windows::Forms::NumericUpDown());
			this->preuLabel = (gcnew System::Windows::Forms::Label());
			this->incloureData = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->data = (gcnew System::Windows::Forms::DateTimePicker());
			this->desplegableAerolinia = (gcnew System::Windows::Forms::ComboBox());
			this->desplegableDesti = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->filtrarButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->preuMaxim))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			resources->ApplyResources(this->dataGridView1, L"dataGridView1");
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->TabStop = false;
			this->dataGridView1->Sorted += gcnew System::EventHandler(this, &FormBuscarVols::dataGridView1_Sorted);
			// 
			// desplegableOrigen
			// 
			this->desplegableOrigen->AllowDrop = true;
			resources->ApplyResources(this->desplegableOrigen, L"desplegableOrigen");
			this->desplegableOrigen->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->desplegableOrigen->FormattingEnabled = true;
			this->desplegableOrigen->Items->AddRange(gcnew cli::array< System::Object^  >(1) { resources->GetString(L"desplegableOrigen.Items") });
			this->desplegableOrigen->Name = L"desplegableOrigen";
			// 
			// groupBox1
			// 
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->aplicaPreu);
			this->groupBox1->Controls->Add(this->preuMaxim);
			this->groupBox1->Controls->Add(this->preuLabel);
			this->groupBox1->Controls->Add(this->incloureData);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->data);
			this->groupBox1->Controls->Add(this->desplegableAerolinia);
			this->groupBox1->Controls->Add(this->desplegableDesti);
			this->groupBox1->Controls->Add(this->desplegableOrigen);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// aplicaPreu
			// 
			resources->ApplyResources(this->aplicaPreu, L"aplicaPreu");
			this->aplicaPreu->Name = L"aplicaPreu";
			this->aplicaPreu->UseVisualStyleBackColor = true;
			this->aplicaPreu->CheckedChanged += gcnew System::EventHandler(this, &FormBuscarVols::aplicaPreu_CheckedChanged);
			// 
			// preuMaxim
			// 
			this->preuMaxim->DecimalPlaces = 2;
			resources->ApplyResources(this->preuMaxim, L"preuMaxim");
			this->preuMaxim->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->preuMaxim->Name = L"preuMaxim";
			// 
			// preuLabel
			// 
			resources->ApplyResources(this->preuLabel, L"preuLabel");
			this->preuLabel->Name = L"preuLabel";
			// 
			// incloureData
			// 
			resources->ApplyResources(this->incloureData, L"incloureData");
			this->incloureData->Name = L"incloureData";
			this->incloureData->UseVisualStyleBackColor = true;
			this->incloureData->CheckedChanged += gcnew System::EventHandler(this, &FormBuscarVols::checkBox1_CheckedChanged);
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// data
			// 
			resources->ApplyResources(this->data, L"data");
			this->data->MinDate = System::DateTime(2025, 4, 21, 23, 22, 21, 110);
			this->data->Name = L"data";
			this->data->Value = System::DateTime(2025, 4, 21, 23, 22, 21, 110);
			// 
			// desplegableAerolinia
			// 
			resources->ApplyResources(this->desplegableAerolinia, L"desplegableAerolinia");
			this->desplegableAerolinia->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->desplegableAerolinia->FormattingEnabled = true;
			this->desplegableAerolinia->Items->AddRange(gcnew cli::array< System::Object^  >(1) { resources->GetString(L"desplegableAerolinia.Items") });
			this->desplegableAerolinia->Name = L"desplegableAerolinia";
			// 
			// desplegableDesti
			// 
			resources->ApplyResources(this->desplegableDesti, L"desplegableDesti");
			this->desplegableDesti->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->desplegableDesti->FormattingEnabled = true;
			this->desplegableDesti->Items->AddRange(gcnew cli::array< System::Object^  >(1) { resources->GetString(L"desplegableDesti.Items") });
			this->desplegableDesti->Name = L"desplegableDesti";
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->BackColor = System::Drawing::Color::Salmon;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormBuscarVols::button2_Click);
			// 
			// filtrarButton
			// 
			resources->ApplyResources(this->filtrarButton, L"filtrarButton");
			this->filtrarButton->BackColor = System::Drawing::Color::LightSkyBlue;
			this->filtrarButton->Name = L"filtrarButton";
			this->filtrarButton->UseVisualStyleBackColor = false;
			this->filtrarButton->Click += gcnew System::EventHandler(this, &FormBuscarVols::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Name = L"label1";
			// 
			// FormBuscarVols
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->filtrarButton);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"FormBuscarVols";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FormBuscarVols::FormBuscarVols_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->preuMaxim))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Enrrere_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}
	private: System::Void FormBuscarVols_Load(System::Object^ sender, System::EventArgs^ e) {
		CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
		pair<vector<string>, vector<string>> resultat = presentacio.processarObteFiltresBuscarVols();

		//Agafar els filtres de la base de dades i les asignem als desplegables
		for (const string& sigles : resultat.first) {
			desplegableOrigen->Items->Add(gcnew String(sigles.c_str()));
			desplegableDesti->Items->Add(gcnew String(sigles.c_str()));
		}

		for (const string& nomAerolinia : resultat.second) {
			desplegableAerolinia->Items->Add(gcnew String(nomAerolinia.c_str()));
		}

		//Al principi no busquem per data ni per preu 
		incloureData->Checked = false;
		data->Enabled = false;
		data->Value = System::DateTime::Now;

		aplicaPreu->Checked = false;
		preuMaxim->Enabled = false;
		preuMaxim->Value = 0;



		//Posem el filtre a tots
		desplegableAerolinia->SelectedIndex = 0;
		desplegableDesti->SelectedIndex = 0;
		desplegableOrigen->SelectedIndex = 0;
		carregarVolsEnTaula("", "", "", "", INFINITE);
	}


	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		AirPlannerSingleton airPlanner = AirPlannerSingleton::getInstance();
		if (e->RowIndex >= 0 && dataGridView1->Columns[e->ColumnIndex]->Name == "Reservar") {
			if (airPlanner.obteUsuari() == nullptr) {
				MessageBox::Show("Per reservar un vol, primer has d'iniciar sessió.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				System::String^ idVol = dataGridView1->Rows[e->RowIndex]->Cells["Id Vol"]->Value->ToString();
				Launcher::Instance->formStack->Pop();
				Launcher::Instance->formStack->Push(gcnew FormBuscarVols());
				Launcher::Instance->formStack->Push(gcnew AirPlanner::FormNumeroReserves(idVol));
				this->Close();
			}
		}
	}

		   void FormBuscarVols::carregarVolsEnTaula(String^ origen, String^ desti, String^ aerolinia, String^ dataSortida, float preu) {
			   // Limpiar la tabla
			   dataGridView1->DataSource = nullptr;
			   dataGridView1->Columns->Clear();  // Esto elimina todas las columnas, incluyendo el botón

			   // Obtener los vuelos desde la capa de presentación
			   CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
			   std::string origenStd = msclr::interop::marshal_as<std::string>(origen);
			   std::string destiStd = msclr::interop::marshal_as<std::string>(desti);
			   std::string aeroliniaStd = msclr::interop::marshal_as<std::string>(aerolinia);
			   std::string dataSortidaStd = msclr::interop::marshal_as<std::string>(dataSortida);

			   // Informació de vol, nom aerolínia
			   pair<std::vector<DTOVol>, std::vector<string>> vols = presentacio.processarBuscarVols(origenStd, destiStd, aeroliniaStd, dataSortidaStd, preu);

			   System::Data::DataTable^ dt = gcnew System::Data::DataTable();

			   // Crear las columnas de datos
			   dt->Columns->Add("Id Vol", System::String::typeid);
			   dt->Columns->Add("Aerolínia", System::String::typeid);
			   dt->Columns->Add("Origen", System::String::typeid);
			   dt->Columns->Add("Desti", System::String::typeid);
			   dt->Columns->Add("Sortida Prevista", System::String::typeid);
			   dt->Columns->Add("Arribada Prevista", System::String::typeid);
			   dt->Columns->Add("Sortida Actualitzada", System::String::typeid);
			   dt->Columns->Add("Arribada Actualitzada", System::String::typeid);
			   dt->Columns->Add("Preu", System::String::typeid);
			   dt->Columns->Add("Model Avió", System::String::typeid);

			   // Rellenar la tabla con los vuelos
			   // Rellenar la tabla con los vuelos
			   string subscripcio = "Cap";
			   AirPlannerSingleton& Airplanner = AirPlannerSingleton::getInstance();
			   PassarelaUsuari* usuari = Airplanner.obteUsuari();

			   for (int i = 0; i < vols.first.size(); ++i) {
				   const auto& vol = vols.first[i];
				   System::String^ sortidaPrevistaStr = gcnew System::String(vol.obteSortidaPrevista().c_str());

				   double preuOriginal = vol.obtePreu();
				   
				   System::String^ preuText;
				   if (usuari != nullptr && usuari->obtetipus() == "Client") {

					   CercadoraClient cerca;

					   System::String^ correuString = gcnew System::String(usuari->obteCorreuElectronic().c_str());

					   PassarelaClient client = cerca.cercaClient(correuString);

					   subscripcio = client.obteSubscripcio();
					   double preuSubscripcio;

					   if (subscripcio == "Basic") {
						   preuSubscripcio = preuOriginal * 0.9; // 10% de descompte
						   preuText = String::Format("{0:0.00} € -> {1:0.00} €", preuOriginal, preuSubscripcio);
					   }
					   else if (subscripcio == "Premium") {
						   preuSubscripcio = preuOriginal * 0.8; // 20% de descompte
						   preuText = String::Format("{0:0.00} € -> {1:0.00} €", preuOriginal, preuSubscripcio);
					   }
					   else {
						   preuText = String::Format("{0:0.00}", preuOriginal);
					   }

				   }
				   else {
					   preuText = String::Format("{0:0.00}", preuOriginal);
				   }

				   dt->Rows->Add(
					   gcnew System::String(vol.obteIdVol().c_str()),
					   gcnew System::String(vols.second[i].c_str()),
					   gcnew System::String(vol.obteOrigen().c_str()),
					   gcnew System::String(vol.obteDesti().c_str()),
					   sortidaPrevistaStr,
					   gcnew System::String(vol.obteArribadaPrevista().c_str()),
					   gcnew System::String(vol.obteSortidaActualitzada().c_str()),
					   gcnew System::String(vol.obteArribadaActualitzada().c_str()),

					   preuText,

					   gcnew System::String(vol.obteModelAvio().c_str())
				   );
			   }

			   if (usuari != nullptr && usuari->obtetipus() == "Client") {
				   if (subscripcio == "Basic") {
					   MessageBox::Show(
						   "Tens un descompte del 10% gràcies a la teva subscripció Basica.",
						   "Descompte aplicat",
						   MessageBoxButtons::OK,
						   MessageBoxIcon::Information
					   );
				   }
				   else if (subscripcio == "Premium") {
					   MessageBox::Show(
						   "Tens un descompte del 20% gràcies a la teva subscripció Premium.",
						   "Descompte aplicat",
						   MessageBoxButtons::OK,
						   MessageBoxIcon::Information
					   );
				   }
				   else if (subscripcio == "Cap") {
					   AirPlanner::FormSubscripcioAvis^ form = gcnew AirPlanner::FormSubscripcioAvis();
					   System::Windows::Forms::DialogResult result = form->ShowDialog();

					   if (result == System::Windows::Forms::DialogResult::Yes) {
						   Launcher::Instance->formStack->Pop(); // Quita el actual
						   Launcher::Instance->formStack->Push(gcnew AirPlanner::FormCtrlModificaSubscripcio);  
						   this->Close(); // Cierra el formulario actual
						   return;
					   }  
					   
				   }

			   }
			   else {
				   MessageBox::Show(
					   "Recorda que només pots reservar vols amb un compte!",
					   "Informació",
					   MessageBoxButtons::OK,
					   MessageBoxIcon::Information
				   );
			   }

			   // Establecer la fuente de datos del DataGridView
			   dataGridView1->DataSource = dt;
			   dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			   dataGridView1->Columns["Preu"]->Width = 120;

			   // Añadir la columna de botón "Reservar" al final
			   System::Windows::Forms::DataGridViewButtonColumn^ reservarButtonColumn = gcnew System::Windows::Forms::DataGridViewButtonColumn();
			   reservarButtonColumn->HeaderText = "";
			   reservarButtonColumn->Text = "Reservar Vol";
			   reservarButtonColumn->UseColumnTextForButtonValue = true;
			   reservarButtonColumn->Name = "Reservar";
			   dataGridView1->Columns->Add(reservarButtonColumn);

			   // Mover la columna de botón a la última posición
			   reservarButtonColumn->DisplayIndex = dataGridView1->Columns->Count - 1;

			   // Colorear las filas según la fecha de sortida prevista
			   dataGridView1_Sorted(nullptr, nullptr);

			   // Suscribirse al evento de clic en el botón
			   this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormBuscarVols::dataGridView1_CellContentClick);
		   }

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (incloureData->Checked) {
			data->Enabled = true;
		}
		else {
			data->Enabled = false;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Obtenir valors seleccionats
		String^ origenSeleccionat = desplegableOrigen->SelectedItem->ToString();
		String^ destiSeleccionat = desplegableDesti->SelectedItem->ToString();
		String^ aeroliniaSeleccionada = desplegableAerolinia->SelectedItem->ToString();
		String^ dataSeleccionada = data->Value.ToString("yyyy-MM-dd");
		float preu = (float)preuMaxim->Value;

		if (!incloureData->Checked) {
			dataSeleccionada = "";
		}
		if (!aplicaPreu->Checked) {
			preu = INFINITE;
		}
		if (origenSeleccionat == "Tots") {
			origenSeleccionat = "";
		}
		if (destiSeleccionat == "Tots") {
			destiSeleccionat = "";
		}
		if (aeroliniaSeleccionada == "Totes") {
			aeroliniaSeleccionada = "";
		}
		carregarVolsEnTaula(origenSeleccionat, destiSeleccionat, aeroliniaSeleccionada, dataSeleccionada, preu);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}

	private: System::Void dataGridView1_Sorted(System::Object^ sender, System::EventArgs^ e) {
		// Torna a pintar les caselles
		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			if (!dataGridView1->Rows[i]->IsNewRow) {
				try {
					System::String^ dataStr = dataGridView1->Rows[i]->Cells["Sortida Prevista"]->Value->ToString();
					System::DateTime sortidaPrevista = System::DateTime::ParseExact(dataStr, "dd-MM-yyyy HH:mm", System::Globalization::CultureInfo::InvariantCulture);
					System::DateTime ara = System::DateTime::Now;

					System::TimeSpan diferencia = sortidaPrevista - ara;

					if (sortidaPrevista < ara) {
						dataGridView1->Rows[i]->DefaultCellStyle->BackColor = System::Drawing::Color::LightGray;
					}
					else if (diferencia.TotalDays <= 1) {
						dataGridView1->Rows[i]->DefaultCellStyle->BackColor = System::Drawing::Color::LightCoral;
					}
					else if (diferencia.TotalDays <= 3) {
						dataGridView1->Rows[i]->DefaultCellStyle->BackColor = System::Drawing::Color::LightSalmon;
					}
					else if (diferencia.TotalDays <= 7) {
						dataGridView1->Rows[i]->DefaultCellStyle->BackColor = System::Drawing::Color::PaleGoldenrod;
					}
					else {
						dataGridView1->Rows[i]->DefaultCellStyle->BackColor = System::Drawing::Color::PaleGreen;
					}
				}
				catch (System::Exception^ ex) {
					System::Diagnostics::Debug::WriteLine("Error en fecha al reordenar: " + ex->Message);
				}
			}
		}
	}
	private: System::Void aplicaPreu_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (aplicaPreu->Checked) {
			preuMaxim->Enabled = true;
		}
		else {
			preuMaxim->Enabled = false;
		}
	}
	};
}
