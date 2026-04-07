#pragma once
#include "CapaDePresentacio.h"
#include "DTOInfoVol.h"
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
	/// Resumen de FormConsultarInfoVol
	/// </summary>
	public ref class FormConsultarInfoVol : public System::Windows::Forms::Form
	{
    private: 
        String^ id;
        System::DateTime _sortidaActualitzada;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
           System::DateTime _arribadaActualitzada;

	public:
		FormConsultarInfoVol(std::string id)
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
		~FormConsultarInfoVol()
		{
			if (components)
			{
				delete components;
			}
		}

    protected:

    private: System::Windows::Forms::Label^ labelArribadaPrevista;
    private: System::Windows::Forms::Label^ labelSortidaPrevista;











    private: System::Windows::Forms::DateTimePicker^ dateTimePicker;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ labelDesti;
    private: System::Windows::Forms::Label^ labelOrigen;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ labelAerolinia;

    private: System::Windows::Forms::Label^ labelModel;

    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::CheckBox^ checkBox1;
    private: System::Windows::Forms::DateTimePicker^ dateTimePickerArribadaActualitzada;
    private: System::Windows::Forms::DateTimePicker^ dateTimePickerSortidaActualitzada;
    private: System::Windows::Forms::Button^ buttonPuja;



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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormConsultarInfoVol::typeid));
            this->labelArribadaPrevista = (gcnew System::Windows::Forms::Label());
            this->labelSortidaPrevista = (gcnew System::Windows::Forms::Label());
            this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->labelDesti = (gcnew System::Windows::Forms::Label());
            this->labelOrigen = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->labelAerolinia = (gcnew System::Windows::Forms::Label());
            this->labelModel = (gcnew System::Windows::Forms::Label());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->dateTimePickerArribadaActualitzada = (gcnew System::Windows::Forms::DateTimePicker());
            this->dateTimePickerSortidaActualitzada = (gcnew System::Windows::Forms::DateTimePicker());
            this->buttonPuja = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // labelArribadaPrevista
            // 
            this->labelArribadaPrevista->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->labelArribadaPrevista->AutoSize = true;
            this->labelArribadaPrevista->BackColor = System::Drawing::SystemColors::Control;
            this->labelArribadaPrevista->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->labelArribadaPrevista->Location = System::Drawing::Point(963, 578);
            this->labelArribadaPrevista->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->labelArribadaPrevista->Name = L"labelArribadaPrevista";
            this->labelArribadaPrevista->Size = System::Drawing::Size(122, 39);
            this->labelArribadaPrevista->TabIndex = 66;
            this->labelArribadaPrevista->Text = L"sortida";
            // 
            // labelSortidaPrevista
            // 
            this->labelSortidaPrevista->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->labelSortidaPrevista->AutoSize = true;
            this->labelSortidaPrevista->BackColor = System::Drawing::SystemColors::Control;
            this->labelSortidaPrevista->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->labelSortidaPrevista->Location = System::Drawing::Point(966, 496);
            this->labelSortidaPrevista->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->labelSortidaPrevista->Name = L"labelSortidaPrevista";
            this->labelSortidaPrevista->Size = System::Drawing::Size(122, 39);
            this->labelSortidaPrevista->TabIndex = 65;
            this->labelSortidaPrevista->Text = L"sortida";
            // 
            // dateTimePicker
            // 
            this->dateTimePicker->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->dateTimePicker->CustomFormat = L"yyyy-MM-dd HH:mm";
            this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePicker->Location = System::Drawing::Point(978, 728);
            this->dateTimePicker->Name = L"dateTimePicker";
            this->dateTimePicker->Size = System::Drawing::Size(115, 38);
            this->dateTimePicker->TabIndex = 57;
            this->dateTimePicker->Visible = false;
            // 
            // label9
            // 
            this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::SystemColors::ControlLight;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(512, 728);
            this->label9->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(393, 39);
            this->label9->TabIndex = 56;
            this->label9->Text = L"Arribada Actualitzada:    ";
            // 
            // label10
            // 
            this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::SystemColors::ControlLight;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(506, 658);
            this->label10->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(399, 39);
            this->label10->TabIndex = 55;
            this->label10->Text = L"Sortida Actualitzada:       ";
            // 
            // label7
            // 
            this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::SystemColors::ControlLight;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(504, 579);
            this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(402, 39);
            this->label7->TabIndex = 54;
            this->label7->Text = L"Arribada Prevista:            ";
            // 
            // label6
            // 
            this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::SystemColors::ControlLight;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(507, 496);
            this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(399, 39);
            this->label6->TabIndex = 53;
            this->label6->Text = L"Sortida Prevista:              ";
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::SystemColors::Control;
            this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
            this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
            this->label1->Location = System::Drawing::Point(527, 68);
            this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(722, 97);
            this->label1->TabIndex = 52;
            this->label1->Text = L"CONSULTAR VOL";
            // 
            // button1
            // 
            this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button1->BackColor = System::Drawing::Color::Salmon;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(156, 934);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(210, 65);
            this->button1->TabIndex = 51;
            this->button1->Text = L"Enrere";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &FormConsultarInfoVol::button1_Click);
            // 
            // labelDesti
            // 
            this->labelDesti->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->labelDesti->AutoSize = true;
            this->labelDesti->BackColor = System::Drawing::SystemColors::Control;
            this->labelDesti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelDesti->Location = System::Drawing::Point(963, 417);
            this->labelDesti->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->labelDesti->Name = L"labelDesti";
            this->labelDesti->Size = System::Drawing::Size(122, 39);
            this->labelDesti->TabIndex = 72;
            this->labelDesti->Text = L"sortida";
            // 
            // labelOrigen
            // 
            this->labelOrigen->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->labelOrigen->AutoSize = true;
            this->labelOrigen->BackColor = System::Drawing::SystemColors::Control;
            this->labelOrigen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelOrigen->Location = System::Drawing::Point(963, 330);
            this->labelOrigen->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->labelOrigen->Name = L"labelOrigen";
            this->labelOrigen->Size = System::Drawing::Size(122, 39);
            this->labelOrigen->TabIndex = 71;
            this->labelOrigen->Text = L"sortida";
            // 
            // label4
            // 
            this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::SystemColors::ControlLight;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(504, 418);
            this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(395, 39);
            this->label4->TabIndex = 70;
            this->label4->Text = L"Desti:                                ";
            // 
            // label5
            // 
            this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::SystemColors::ControlLight;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(504, 330);
            this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(401, 39);
            this->label5->TabIndex = 69;
            this->label5->Text = L"Origen:                              ";
            // 
            // labelAerolinia
            // 
            this->labelAerolinia->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->labelAerolinia->AutoSize = true;
            this->labelAerolinia->BackColor = System::Drawing::SystemColors::Control;
            this->labelAerolinia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelAerolinia->Location = System::Drawing::Point(969, 870);
            this->labelAerolinia->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->labelAerolinia->Name = L"labelAerolinia";
            this->labelAerolinia->Size = System::Drawing::Size(122, 39);
            this->labelAerolinia->TabIndex = 77;
            this->labelAerolinia->Text = L"sortida";
            // 
            // labelModel
            // 
            this->labelModel->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->labelModel->AutoSize = true;
            this->labelModel->BackColor = System::Drawing::SystemColors::Control;
            this->labelModel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelModel->Location = System::Drawing::Point(969, 800);
            this->labelModel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->labelModel->Name = L"labelModel";
            this->labelModel->Size = System::Drawing::Size(122, 39);
            this->labelModel->TabIndex = 76;
            this->labelModel->Text = L"sortida";
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd HH:mm";
            this->dateTimePicker1->Enabled = false;
            this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePicker1->Location = System::Drawing::Point(976, 870);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(115, 38);
            this->dateTimePicker1->TabIndex = 75;
            this->dateTimePicker1->Visible = false;
            // 
            // label8
            // 
            this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::SystemColors::ControlLight;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(510, 870);
            this->label8->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(396, 39);
            this->label8->TabIndex = 74;
            this->label8->Text = L"Aerolinia:                          ";
            // 
            // label11
            // 
            this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::SystemColors::ControlLight;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(510, 799);
            this->label11->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(395, 39);
            this->label11->TabIndex = 73;
            this->label11->Text = L"Model d\'Avio:                   ";
            // 
            // label2
            // 
            this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(504, 242);
            this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(423, 39);
            this->label2->TabIndex = 78;
            this->label2->Text = L"Vols modificar aquest vol\?";
            // 
            // checkBox1
            // 
            this->checkBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->checkBox1->AutoSize = true;
            this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->checkBox1->Location = System::Drawing::Point(1106, 242);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(204, 43);
            this->checkBox1->TabIndex = 79;
            this->checkBox1->Text = L"MODIFICA";
            this->checkBox1->UseVisualStyleBackColor = true;
            this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &FormConsultarInfoVol::checkBox1_CheckedChanged);
            // 
            // dateTimePickerArribadaActualitzada
            // 
            this->dateTimePickerArribadaActualitzada->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->dateTimePickerArribadaActualitzada->CustomFormat = L"yyyy-MM-dd HH:mm";
            this->dateTimePickerArribadaActualitzada->Enabled = false;
            this->dateTimePickerArribadaActualitzada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->dateTimePickerArribadaActualitzada->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerArribadaActualitzada->Location = System::Drawing::Point(961, 722);
            this->dateTimePickerArribadaActualitzada->Name = L"dateTimePickerArribadaActualitzada";
            this->dateTimePickerArribadaActualitzada->Size = System::Drawing::Size(332, 47);
            this->dateTimePickerArribadaActualitzada->TabIndex = 80;
            // 
            // dateTimePickerSortidaActualitzada
            // 
            this->dateTimePickerSortidaActualitzada->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->dateTimePickerSortidaActualitzada->CustomFormat = L"yyyy-MM-dd HH:mm";
            this->dateTimePickerSortidaActualitzada->Enabled = false;
            this->dateTimePickerSortidaActualitzada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->dateTimePickerSortidaActualitzada->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerSortidaActualitzada->Location = System::Drawing::Point(961, 652);
            this->dateTimePickerSortidaActualitzada->Name = L"dateTimePickerSortidaActualitzada";
            this->dateTimePickerSortidaActualitzada->Size = System::Drawing::Size(332, 47);
            this->dateTimePickerSortidaActualitzada->TabIndex = 81;
            // 
            // buttonPuja
            // 
            this->buttonPuja->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->buttonPuja->BackColor = System::Drawing::Color::MediumAquamarine;
            this->buttonPuja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonPuja->Location = System::Drawing::Point(1479, 959);
            this->buttonPuja->Name = L"buttonPuja";
            this->buttonPuja->Size = System::Drawing::Size(326, 65);
            this->buttonPuja->TabIndex = 82;
            this->buttonPuja->Text = L"Actualitza l\'estat";
            this->buttonPuja->UseVisualStyleBackColor = false;
            this->buttonPuja->Visible = false;
            this->buttonPuja->Click += gcnew System::EventHandler(this, &FormConsultarInfoVol::buttonPuja_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(-1, -3);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(1923, 1067);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 83;
            this->pictureBox1->TabStop = false;
            // 
            // FormConsultarInfoVol
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1920, 1061);
            this->Controls->Add(this->buttonPuja);
            this->Controls->Add(this->dateTimePickerSortidaActualitzada);
            this->Controls->Add(this->dateTimePickerArribadaActualitzada);
            this->Controls->Add(this->checkBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->labelAerolinia);
            this->Controls->Add(this->labelModel);
            this->Controls->Add(this->dateTimePicker1);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->labelDesti);
            this->Controls->Add(this->labelOrigen);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->labelArribadaPrevista);
            this->Controls->Add(this->labelSortidaPrevista);
            this->Controls->Add(this->dateTimePicker);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->pictureBox1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"FormConsultarInfoVol";
            this->Text = L"AirPlanner";
            this->Load += gcnew System::EventHandler(this, &FormConsultarInfoVol::FormConsultarInfoVol_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        Launcher::Instance->formStack->Pop();
        this->Close();
    }

    private: System::Void FormConsultarInfoVol_Load(System::Object^ sender, System::EventArgs^ e) {
        try {
            msclr::interop::marshal_context context;
            std::string idString = context.marshal_as<std::string>(this->id);

            CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
            DTOInfoVol info = presentacio.processarConsultarEstatVol(idString);

			this->labelOrigen->Text = gcnew System::String(info.obteOrigen().c_str());
            this->labelDesti->Text = gcnew System::String(info.obteDesti().c_str());

            string sortidaPrevista = info.obteDataHoraSortida();
            string arribadaPrevista = info.obteDataHoraArribada();
            string sortidaActualitzada = info.obteDataHoraSortidaActualitzada();
            string arribadaActualitzada = info.obteDataHoraArribadaActualitzada();

            System::DateTime dtSortidaPrevista = DateTime::ParseExact(marshal_as<String^>(sortidaPrevista), "yyyy-MM-dd HH:mm:ss", nullptr);
            System::DateTime dtArribadaPrevista = DateTime::ParseExact(marshal_as<String^>(arribadaPrevista), "yyyy-MM-dd HH:mm:ss", nullptr);
            System::DateTime dtSortidaActualitzada = DateTime::ParseExact(marshal_as<String^>(sortidaActualitzada), "yyyy-MM-dd HH:mm:ss", nullptr);
            System::DateTime dtArribadaActualitzada = DateTime::ParseExact(marshal_as<String^>(arribadaActualitzada), "yyyy-MM-dd HH:mm:ss", nullptr);
            this->labelSortidaPrevista->Text = dtSortidaPrevista.ToString("yyyy-MM-dd HH:mm");
            this->labelArribadaPrevista->Text = dtArribadaPrevista.ToString("yyyy-MM-dd HH:mm");
			this->dateTimePickerArribadaActualitzada->Value = dtArribadaActualitzada;
            this->dateTimePickerSortidaActualitzada->Value = dtSortidaActualitzada;
            _sortidaActualitzada = this->dateTimePickerSortidaActualitzada->Value;
            _arribadaActualitzada = this->dateTimePickerArribadaActualitzada->Value;
			this->labelModel->Text = gcnew System::String(info.obteModelAvio().c_str());
			this->labelAerolinia->Text = gcnew System::String(info.obteNomAerolinia().c_str());
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message, "Error! En aquest moment no es pot trobar la informació del vol que busques. Intenta-ho més tard.", MessageBoxButtons::OK, MessageBoxIcon::Error);
            Launcher::Instance->formStack->Pop();
            this->Close();
        }
    }
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		this->dateTimePickerSortidaActualitzada->Enabled = true;
		this->dateTimePickerArribadaActualitzada->Enabled = true;
        this->buttonPuja->Visible = true;
	}
    else {
        this->dateTimePickerSortidaActualitzada->Enabled = false;
        this->dateTimePickerArribadaActualitzada->Enabled = false;
        this->buttonPuja->Visible = false;
    }
}
private: System::Void buttonPuja_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
        msclr::interop::marshal_context context;
        if (this->dateTimePickerSortidaActualitzada->Value == _sortidaActualitzada) {
            if (this->dateTimePickerArribadaActualitzada->Value == _arribadaActualitzada) {
                throw gcnew System::Exception("No has modificat la data o hora de sortida ni d'arribada del vol.");
            }
            else {
                if (this->dateTimePickerArribadaActualitzada->Value< _sortidaActualitzada) {
                    throw gcnew System::Exception("El vol no pot arribar abans de sortir!!.");
                }
                CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
                System::String^ dataHoraTem = this->dateTimePickerArribadaActualitzada->Value.ToString("yyyy-MM-dd HH:mm");
                dataHoraTem = dataHoraTem + ":00";
                std::string dataHoraStd = context.marshal_as<std::string>(dataHoraTem);

                std::string idStd = context.marshal_as<std::string>(id);
                presentacio.processarModificaEstatVol("", dataHoraStd, idStd);
            }
        }
        else {
            if (this->dateTimePickerArribadaActualitzada->Value == _arribadaActualitzada) {
                if (this->dateTimePickerSortidaActualitzada->Value > _arribadaActualitzada) {
                    throw gcnew System::Exception("El vol no pot arribar abans de sortir!!.");
                }
                CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
                System::String^ dataHoraTem = this->dateTimePickerSortidaActualitzada->Value.ToString("yyyy-MM-dd HH:mm");
                dataHoraTem = dataHoraTem + ":00";
                std::string dataHoraStd = context.marshal_as<std::string>(dataHoraTem);

                std::string idStd = context.marshal_as<std::string>(id);
                presentacio.processarModificaEstatVol(dataHoraStd,"", idStd);
            }
            else {
                if (this->dateTimePickerSortidaActualitzada->Value > this->dateTimePickerArribadaActualitzada->Value) {
                    throw gcnew System::Exception("El vol no pot arribar abans de sortir!!.");
                }
                CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();

                System::String^ dataHoraTem = this->dateTimePickerSortidaActualitzada->Value.ToString("yyyy-MM-dd HH:mm");
                dataHoraTem = dataHoraTem + ":00";
                std::string dataHoraSort = context.marshal_as<std::string>(dataHoraTem);

                dataHoraTem = this->dateTimePickerArribadaActualitzada->Value.ToString("yyyy-MM-dd HH:mm");
                dataHoraTem = dataHoraTem + ":00";
                std::string dataHoraArr = context.marshal_as<std::string>(dataHoraTem);

                std::string idStd = context.marshal_as<std::string>(id);
                presentacio.processarModificaEstatVol(dataHoraSort, dataHoraArr, idStd);
            }
        }
        MessageBox::Show("El vol s'ha modificat correctament.", "Missatge", MessageBoxButtons::OK, MessageBoxIcon::Information);
        this->FormConsultarInfoVol_Load(sender, e);
        this->checkBox1->Checked = false;
	}
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
};
}