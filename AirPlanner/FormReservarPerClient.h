#pragma once
#include "Launcher.h"
namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormReservarPerClient
	/// </summary>
	public ref class FormReservarPerClient : public System::Windows::Forms::Form
	{
	public:

		String^ nom;
		String^ tipusEquipatge;
		String^ genere;
		String^ dataNaixement;
		  
		FormReservarPerClient(void)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
			nom = " ";
			tipusEquipatge = " ";
			genere = " ";
			dataNaixement = " ";
			comboBox1->SelectedIndex = 0;
			comboBox2->SelectedIndex = 0;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormReservarPerClient()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormReservarPerClient::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(67, 878);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 71);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Cancel·lar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormReservarPerClient::button1_Enrere);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1629, 878);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(230, 71);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Continua";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormReservarPerClient::button2_Continua);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nom complet";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(391, 94);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(251, 31);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"Nom complet ";
			this->textBox1->Enter += gcnew System::EventHandler(this, &FormReservarPerClient::textBox_1);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(288, 39);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Tipus d\'equipatge";
			this->label2->Click += gcnew System::EventHandler(this, &FormReservarPerClient::label2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"De ma", L"Maleta Gran", L"Maleta Petita" });
			this->comboBox1->Location = System::Drawing::Point(391, 184);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(251, 33);
			this->comboBox1->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 264);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 39);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Gènere";
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Home", L"Dona", L"Prefereixo no dir-ho" });
			this->comboBox2->Location = System::Drawing::Point(391, 273);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(251, 33);
			this->comboBox2->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(37, 353);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(275, 39);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Data Naixement ";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->monthCalendar1->Location = System::Drawing::Point(391, 353);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 19;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-3, -53);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1930, 1095);
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->monthCalendar1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(584, 284);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(744, 566);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Omple el formulari per continuar amb la reserva";
			// 
			// FormReservarPerClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 989);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormReservarPerClient";
			this->Text = L"FormReservarPerClient";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void button1_Enrere(System::Object^ sender, System::EventArgs^ e) {

			this->DialogResult = System::Windows::Forms::DialogResult::Cancel; // establim com a resultat de dialogo cancelar per despés detectar--ho al form anterior
			this->Close(); // Cierra el formulario actual
		} 

		private: System::Void button2_Continua(System::Object^ sender, System::EventArgs^ e) {

			try {
				nom = textBox1->Text;
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
				dataNaixement = monthCalendar1->SelectionStart.ToString("yyyy-MM-dd");
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

				this->DialogResult = System::Windows::Forms::DialogResult::OK; // establim com a resultat de dialogo OK per despés detectar--ho al form anterior
				this->Close(); // Cierra el formulario actual
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

		// nom
		private: System::Void textBox_1(System::Object^ sender, System::EventArgs^ e) { //nom

			if (textBox1->Text == "Nom complet ") {
				textBox1->Text = "";
			}
		}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

