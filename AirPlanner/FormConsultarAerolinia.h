#pragma once
#include <msclr/marshal_cppstd.h>
#include "CapaDePresentacio.h"
#include "Launcher.h"
namespace AirPlanner {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class FormConsultarAerolinia : public System::Windows::Forms::Form
    {
    public:
        FormConsultarAerolinia(void)
        {
            InitializeComponent();
            this->WindowState = FormWindowState::Maximized;
        }

    protected:
        ~FormConsultarAerolinia()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Button^ button2; // Nuevo botón actualizar
        System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::PictureBox^ pictureBox1;

           System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormConsultarAerolinia::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
            this->label1->Location = System::Drawing::Point(369, 154);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(1119, 97);
            this->label1->TabIndex = 1;
            this->label1->Text = L"AEROLÍNIES DEL SISTEMA";
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Salmon;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(126, 905);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(176, 56);
            this->button1->TabIndex = 1;
            this->button1->Text = L"Enrere";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &FormConsultarAerolinia::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::MediumAquamarine;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(1547, 907);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(254, 54);
            this->button2->TabIndex = 2;
            this->button2->Text = L"Actualitzar";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &FormConsultarAerolinia::button2_Click);
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(315, 316);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->ReadOnly = true;
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(1216, 427);
            this->dataGridView1->TabIndex = 3;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(-8, -20);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(1921, 1080);
            this->pictureBox1->TabIndex = 16;
            this->pictureBox1->TabStop = false;
            // 
            // FormConsultarAerolinia
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1904, 1041);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->pictureBox1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"FormConsultarAerolinia";
            this->Text = L"AirPlanner";
            this->Load += gcnew System::EventHandler(this, &FormConsultarAerolinia::FormConsultarAerolinia_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void FormConsultarAerolinia_Load(System::Object^ sender, System::EventArgs^ e) {
        carregarTaula();
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
    {

        Launcher::Instance->formStack->Pop();
        this->Close();
    }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
    {
        carregarTaula();
    }

    private: void carregarTaula()
    {
        CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();
        std::vector<DTOAerolinia> Aerolinia = presentacio.processarConsultaAerolinia();

        // Crear el DataTable
        System::Data::DataTable^ dt = gcnew System::Data::DataTable();

        dt->Columns->Add("Correu Electronic", System::String::typeid);
        dt->Columns->Add("Nom", System::String::typeid);

        // Llenar el DataTable con datos de vols
        for (const auto& Aerolinia : Aerolinia) {
            dt->Rows->Add(
                gcnew System::String(Aerolinia.obteCorreuElectronic().c_str()),
                gcnew System::String(Aerolinia.obteNom().c_str())
            );
        }

        // Asignar el DataTable al DataGridView
        dataGridView1->DataSource = dt;
        dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
    }
    };
}

