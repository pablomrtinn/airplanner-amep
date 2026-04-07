#pragma once
#include "Launcher.h"
#include "FormSenseSessio.h"

namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MenuInicial : public System::Windows::Forms::Form
	{
	public:
		MenuInicial(void)
		{
			InitializeComponent();
		}

	protected:
		~MenuInicial()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuInicial::typeid));
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // button2
			   // 
			   this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->button2->BackColor = System::Drawing::Color::Salmon;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25)); 
			   this->button2->Location = System::Drawing::Point(796, 779);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(297, 92);
			   this->button2->TabIndex = 23;
			   this->button2->Text = L"Sortir";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &MenuInicial::button2_Click);
			   // 
			   // button1
			   // 
			   this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->button1->BackColor = System::Drawing::Color::MediumAquamarine;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			   this->button1->ForeColor = System::Drawing::Color::Black;
			   this->button1->Location = System::Drawing::Point(796, 656);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(297, 90);
			   this->button1->TabIndex = 22;
			   this->button1->Text = L"Inicia";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MenuInicial::button1_Click);
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(-8, -20);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(1920, 1080);
			   this->pictureBox1->TabIndex = 24;
			   this->pictureBox1->TabStop = false;
			   // 
			   // MenuInicial
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1904, 1041);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->pictureBox1);
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"MenuInicial";
			   this->Text = L"AirPlanner";
			   this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lógica para iniciar sesión
		Launcher::Instance->formStack->Pop();
		Launcher::Instance->formStack->Push(gcnew MenuInicial());
		Launcher::Instance->formStack->Push(gcnew AirPlanner::FormSenseSessio());
		this->Close();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lógica para salir
		Launcher::Instance->formStack->Pop();
		this->Close();
	}

};
}
