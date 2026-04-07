#pragma once

#include "Launcher.h"
#include "FormCtrlModificaSubscripcio.h"

namespace AirPlanner { // Reemplaza con el nombre real de tu espacio de nombres
	public ref class FormSubscripcioAvis : public System::Windows::Forms::Form
	{
	public:
		FormSubscripcioAvis()
		{
			InitializeComponent();
		}

	protected:
		~FormSubscripcioAvis()
		{
			if (components)
				delete components;
		}

	private:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Button^ btnMesTard;
		System::Windows::Forms::Button^ btnVeureSubs;

		System::ComponentModel::Container^ components;

		void InitializeComponent(void)
		{
			this->label1 = gcnew System::Windows::Forms::Label();
			this->btnMesTard = gcnew System::Windows::Forms::Button();
			this->btnVeureSubs = gcnew System::Windows::Forms::Button();
			this->SuspendLayout();

			// label1
			this->label1->AutoSize = false;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F));
			this->label1->Location = System::Drawing::Point(10, 10);
			this->label1->Size = System::Drawing::Size(340, 40);
			this->label1->Text = L"Per veure vols destacats necessites una millor subscripció.\nVols millorar-la?";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			// btnMesTard
			this->btnMesTard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->btnMesTard->Location = System::Drawing::Point(20, 70);
			this->btnMesTard->Size = System::Drawing::Size(140, 40);
			this->btnMesTard->Text = L"No, gràcies";
			this->btnMesTard->Click += gcnew System::EventHandler(this, &FormSubscripcioAvis::btnMesTard_Click);

			// btnVeureSubs
			this->btnVeureSubs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->btnVeureSubs->Location = System::Drawing::Point(190, 70);
			this->btnVeureSubs->Size = System::Drawing::Size(150, 40);
			this->btnVeureSubs->Text = L"Millorar subscripció";
			this->btnVeureSubs->Click += gcnew System::EventHandler(this, &FormSubscripcioAvis::btnVeureSubs_Click);


			// 
			// FormSubscripcioAvis
			// 
			this->ClientSize = System::Drawing::Size(360, 130);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnMesTard);
			this->Controls->Add(this->btnVeureSubs);
			this->Text = "Cap descompte";

			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->ResumeLayout(false);
			this->PerformLayout();
		}

		void btnMesTard_Click(System::Object^ sender, System::EventArgs^ e)
		{

			this->Close();
		}

		void btnVeureSubs_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->DialogResult = System::Windows::Forms::DialogResult::Yes;
		}
	};
}