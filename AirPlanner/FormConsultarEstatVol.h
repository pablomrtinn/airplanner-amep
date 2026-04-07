#pragma once
#include "CapaDePresentacio.h"
#include "DTOInfoVol.h"
#include <string>
#include <msclr/marshal_cppstd.h>
#include "Launcher.h"
namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormConsultarEstatVol
	/// </summary>
	public ref class FormConsultarEstatVol : public System::Windows::Forms::Form
	{
	private: String^ id;
	public:
		FormConsultarEstatVol(std::string id)
		{
			this->id = marshal_as<String^>(id);
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
		~FormConsultarEstatVol()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ labelEstatVol;
	private: System::Windows::Forms::Label^ labelEstatVolRetardSortida;
	private: System::Windows::Forms::Label^ labelEstatVolRetardArribada;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labelSortidaPrevista;
	private: System::Windows::Forms::Label^ labelArribadaPrevista;
	private: System::Windows::Forms::Label^ labelSortidaActualitzada;
	private: System::Windows::Forms::Label^ labelArribadaActualitzada;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormConsultarEstatVol::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->labelEstatVol = (gcnew System::Windows::Forms::Label());
			this->labelEstatVolRetardSortida = (gcnew System::Windows::Forms::Label());
			this->labelEstatVolRetardArribada = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelSortidaPrevista = (gcnew System::Windows::Forms::Label());
			this->labelArribadaPrevista = (gcnew System::Windows::Forms::Label());
			this->labelSortidaActualitzada = (gcnew System::Windows::Forms::Label());
			this->labelArribadaActualitzada = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(200, 847);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 65);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Enrere";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormConsultarEstatVol::button1_Enrere);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(450, 311);
			this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(402, 39);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Arribada Prevista:            ";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(450, 223);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(399, 39);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Sortida Prevista:              ";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(569, 58);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(722, 97);
			this->label1->TabIndex = 23;
			this->label1->Text = L"CONSULTAR VOL";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(450, 488);
			this->label9->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(393, 39);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Arribada Actualitzada:    ";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(450, 404);
			this->label10->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(399, 39);
			this->label10->TabIndex = 37;
			this->label10->Text = L"Sortida Actualitzada:       ";
			// 
			// labelEstatVol
			// 
			this->labelEstatVol->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelEstatVol->AutoSize = true;
			this->labelEstatVol->BackColor = System::Drawing::SystemColors::Control;
			this->labelEstatVol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEstatVol->Location = System::Drawing::Point(999, 644);
			this->labelEstatVol->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->labelEstatVol->Name = L"labelEstatVol";
			this->labelEstatVol->Size = System::Drawing::Size(93, 39);
			this->labelEstatVol->TabIndex = 40;
			this->labelEstatVol->Text = L"estat";
			// 
			// labelEstatVolRetardSortida
			// 
			this->labelEstatVolRetardSortida->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelEstatVolRetardSortida->AutoSize = true;
			this->labelEstatVolRetardSortida->BackColor = System::Drawing::SystemColors::Control;
			this->labelEstatVolRetardSortida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelEstatVolRetardSortida->Location = System::Drawing::Point(998, 724);
			this->labelEstatVolRetardSortida->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->labelEstatVolRetardSortida->Name = L"labelEstatVolRetardSortida";
			this->labelEstatVolRetardSortida->Size = System::Drawing::Size(108, 39);
			this->labelEstatVolRetardSortida->TabIndex = 41;
			this->labelEstatVolRetardSortida->Text = L"retard";
			// 
			// labelEstatVolRetardArribada
			// 
			this->labelEstatVolRetardArribada->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelEstatVolRetardArribada->AutoSize = true;
			this->labelEstatVolRetardArribada->BackColor = System::Drawing::SystemColors::Control;
			this->labelEstatVolRetardArribada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelEstatVolRetardArribada->Location = System::Drawing::Point(1000, 805);
			this->labelEstatVolRetardArribada->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->labelEstatVolRetardArribada->Name = L"labelEstatVolRetardArribada";
			this->labelEstatVolRetardArribada->Size = System::Drawing::Size(108, 39);
			this->labelEstatVolRetardArribada->TabIndex = 42;
			this->labelEstatVolRetardArribada->Text = L"retard";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(618, 644);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(351, 39);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Estat del vol:               ";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(618, 724);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(346, 39);
			this->label3->TabIndex = 44;
			this->label3->Text = L"Retard en la sortida:  ";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(618, 805);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(350, 39);
			this->label4->TabIndex = 45;
			this->label4->Text = L"Retard en la arribada:";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(450, 573);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 39);
			this->label5->TabIndex = 46;
			this->label5->Text = L"ESTATS:";
			// 
			// labelSortidaPrevista
			// 
			this->labelSortidaPrevista->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelSortidaPrevista->AutoSize = true;
			this->labelSortidaPrevista->BackColor = System::Drawing::SystemColors::Control;
			this->labelSortidaPrevista->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSortidaPrevista->Location = System::Drawing::Point(909, 223);
			this->labelSortidaPrevista->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->labelSortidaPrevista->Name = L"labelSortidaPrevista";
			this->labelSortidaPrevista->Size = System::Drawing::Size(122, 39);
			this->labelSortidaPrevista->TabIndex = 47;
			this->labelSortidaPrevista->Text = L"sortida";
			// 
			// labelArribadaPrevista
			// 
			this->labelArribadaPrevista->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelArribadaPrevista->AutoSize = true;
			this->labelArribadaPrevista->BackColor = System::Drawing::SystemColors::Control;
			this->labelArribadaPrevista->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelArribadaPrevista->Location = System::Drawing::Point(909, 310);
			this->labelArribadaPrevista->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->labelArribadaPrevista->Name = L"labelArribadaPrevista";
			this->labelArribadaPrevista->Size = System::Drawing::Size(122, 39);
			this->labelArribadaPrevista->TabIndex = 48;
			this->labelArribadaPrevista->Text = L"sortida";
			// 
			// labelSortidaActualitzada
			// 
			this->labelSortidaActualitzada->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelSortidaActualitzada->AutoSize = true;
			this->labelSortidaActualitzada->BackColor = System::Drawing::SystemColors::Control;
			this->labelSortidaActualitzada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSortidaActualitzada->Location = System::Drawing::Point(909, 405);
			this->labelSortidaActualitzada->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->labelSortidaActualitzada->Name = L"labelSortidaActualitzada";
			this->labelSortidaActualitzada->Size = System::Drawing::Size(122, 39);
			this->labelSortidaActualitzada->TabIndex = 49;
			this->labelSortidaActualitzada->Text = L"sortida";
			// 
			// labelArribadaActualitzada
			// 
			this->labelArribadaActualitzada->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelArribadaActualitzada->AutoSize = true;
			this->labelArribadaActualitzada->BackColor = System::Drawing::SystemColors::Control;
			this->labelArribadaActualitzada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelArribadaActualitzada->Location = System::Drawing::Point(909, 488);
			this->labelArribadaActualitzada->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->labelArribadaActualitzada->Name = L"labelArribadaActualitzada";
			this->labelArribadaActualitzada->Size = System::Drawing::Size(122, 39);
			this->labelArribadaActualitzada->TabIndex = 50;
			this->labelArribadaActualitzada->Text = L"sortida";
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePicker->CustomFormat = L"yyyy-MM-dd HH:mm";
			this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker->Location = System::Drawing::Point(916, 488);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(115, 38);
			this->dateTimePicker->TabIndex = 39;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1922, 1068);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 51;
			this->pictureBox1->TabStop = false;
			// 
			// FormConsultarEstatVol
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1920, 1061);
			this->Controls->Add(this->labelArribadaActualitzada);
			this->Controls->Add(this->labelSortidaActualitzada);
			this->Controls->Add(this->labelArribadaPrevista);
			this->Controls->Add(this->labelSortidaPrevista);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelEstatVolRetardArribada);
			this->Controls->Add(this->labelEstatVolRetardSortida);
			this->Controls->Add(this->labelEstatVol);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"FormConsultarEstatVol";
			this->Text = L"FormConsultarEstatVol";
			this->Load += gcnew System::EventHandler(this, &FormConsultarEstatVol::FormConsultarEstatVol_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Enrere(System::Object^ sender, System::EventArgs^ e) {
		Launcher::Instance->formStack->Pop();
		this->Close();
	}
	private: System::Void FormConsultarEstatVol_Load(System::Object^ sender, System::EventArgs^ e) {
		try {

			msclr::interop::marshal_context context;
			std::string idString = context.marshal_as<std::string>(this->id);

			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
			DTOInfoVol info = presentacio.processarConsultarEstatVol(idString);

			string sortidaPrevista = info.obteDataHoraSortida();
			string arribadaPrevista = info.obteDataHoraArribada();
			string sortidaActualitzada = info.obteDataHoraSortidaActualitzada();
			string arribadaActualitzada = info.obteDataHoraArribadaActualitzada();

			String^ strHora = dateTimePicker->Value.ToString("yyyy-MM-dd HH:mm:ss");
			std::string horaActual = msclr::interop::marshal_as<std::string>(strHora);

			String^ arribara = "";
			String^ sortira = "";

			if (horaActual >= arribadaActualitzada){
				labelEstatVol->Text = "El vol ha arribat";
				arribara = "ha arribat";
				sortira = "ha sortit";
			}
			else if (horaActual >= sortidaActualitzada) {
				labelEstatVol->Text = "El vol ha sortit, està volant";
				arribara = "arribarà";
				sortira = "ha sortit";
			}
			else {
				labelEstatVol->Text = "El vol no ha sortit";
				arribara = "arribarà";
				sortira = "sortirà";
			}
			
			System::DateTime dtSortidaPrevista = DateTime::ParseExact(marshal_as<String^>(sortidaPrevista), "yyyy-MM-dd HH:mm:ss", nullptr);
			System::DateTime dtArribadaPrevista = DateTime::ParseExact(marshal_as<String^>(arribadaPrevista), "yyyy-MM-dd HH:mm:ss", nullptr);
			System::DateTime dtSortidaActualitzada = DateTime::ParseExact(marshal_as<String^>(sortidaActualitzada), "yyyy-MM-dd HH:mm:ss", nullptr);
			System::DateTime dtArribadaActualitzada = DateTime::ParseExact(marshal_as<String^>(arribadaActualitzada), "yyyy-MM-dd HH:mm:ss", nullptr);

			this->labelSortidaPrevista->Text = dtSortidaPrevista.ToString("yyyy-MM-dd HH:mm");
			this->labelArribadaPrevista->Text = dtArribadaPrevista.ToString("yyyy-MM-dd HH:mm");
			this->labelSortidaActualitzada->Text = dtSortidaActualitzada.ToString("yyyy-MM-dd HH:mm");
			this->labelArribadaActualitzada->Text = dtArribadaActualitzada.ToString("yyyy-MM-dd HH:mm");

			System::TimeSpan retardSortida = dtSortidaActualitzada - dtSortidaPrevista;
			System::TimeSpan retardArribada = dtArribadaActualitzada - dtArribadaPrevista;


			if (retardSortida.TotalHours >= 24) {
				labelEstatVolRetardSortida->Text = "El vol " + sortira + " més de 24 hores tard.\n";
				labelEstatVolRetardSortida->ForeColor = System::Drawing::Color::Tomato;
			}
			else if (retardSortida.TotalHours <= -24) {
				labelEstatVolRetardSortida->Text = "El vol " + sortira + " més de 24 hores abans del previst.\n";
				labelEstatVolRetardSortida->ForeColor = System::Drawing::Color::MediumAquamarine;
			}
			else if (retardSortida.TotalMinutes > 1) {
				labelEstatVolRetardSortida->Text = "El vol " + sortira + " amb " + retardSortida.Hours + " hores i " + retardSortida.Minutes + " minuts de retard.\n";
				labelEstatVolRetardSortida->ForeColor = System::Drawing::Color::Tomato;
			}
			else if (retardSortida.TotalMinutes < -1) {
				labelEstatVolRetardSortida->Text = "El vol " + sortira + " " + (-retardSortida.Hours) + " hores i " + (-retardSortida.Minutes) + " minuts abans del previst.\n";
				labelEstatVolRetardSortida->ForeColor = System::Drawing::Color::MediumAquamarine;
			}
			else {
				labelEstatVolRetardSortida->Text = "El vol " + sortira + " puntual.\n";
				labelEstatVolRetardSortida->ForeColor = System::Drawing::Color::MediumAquamarine;
			}


			if (retardArribada.TotalHours >= 24) {
				labelEstatVolRetardArribada->Text = "El vol " + arribara + " més de 24 hores tard.";
				labelEstatVolRetardArribada->ForeColor = System::Drawing::Color::Tomato;
			}
			else if (retardArribada.TotalHours <= -24) {
				labelEstatVolRetardArribada->Text = "El vol " + arribara + " més de 24 hores abans del previst.";
				labelEstatVolRetardArribada->ForeColor = System::Drawing::Color::MediumAquamarine;
			}
			else if (retardArribada.TotalMinutes > 1) {
				labelEstatVolRetardArribada->Text = "El vol " + arribara + " amb " + retardArribada.Hours + " hores i " + retardArribada.Minutes + " minuts de retard.";
				labelEstatVolRetardArribada->ForeColor = System::Drawing::Color::Tomato;
			}
			else if (retardArribada.TotalMinutes < -1) {
				labelEstatVolRetardArribada->Text = "El vol " + arribara + " " + (-retardArribada.Hours) + " hores i " + (-retardArribada.Minutes) + " minuts abans del previst.";
				labelEstatVolRetardArribada->ForeColor = System::Drawing::Color::MediumAquamarine;
			}
			else {
				labelEstatVolRetardArribada->Text = "El vol " + arribara + " puntual.";
				labelEstatVolRetardArribada->ForeColor = System::Drawing::Color::MediumAquamarine;
			}


		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Launcher::Instance->formStack->Pop();
			this->Close();
		}
	}
	};
}
