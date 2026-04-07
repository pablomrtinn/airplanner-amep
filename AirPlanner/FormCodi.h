#pragma once

namespace AirPlanner {

	using namespace System;
	using namespace System::Windows::Forms;

	public ref class FormCodi : public Form
	{
	public:
		// Propietat pública per accedir al codi escrit
		property String^ CodiIntroduit;

		FormCodi(void)
		{
			InitializeComponent();
		}

	protected:
		~FormCodi()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		TextBox^ textBoxCodi;
		Button^ btnValidar;
		Label^ lblInfo;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->textBoxCodi = gcnew TextBox();
			this->btnValidar = gcnew Button();
			this->lblInfo = gcnew Label();

			// 
			// FormCodi
			// 
			this->Text = L"Codi de verificació";
			this->Size = Drawing::Size(360, 170);
			this->StartPosition = FormStartPosition::CenterScreen;
			this->MaximizeBox = false;
			this->MinimizeBox = false;

			// 
			// lblInfo
			// 
			this->lblInfo->Text = L"Introdueix el codi de verificació de 6 caràcters que hem enviat al teu correu electrònic. Assegura't de revisar la safata SPAM:";
			this->lblInfo->Location = Drawing::Point(15, 15);
			this->lblInfo->MaximumSize = Drawing::Size(320, 0);
			this->lblInfo->AutoSize = true;


			// 
			// textBoxCodi
			// 
			this->textBoxCodi->Location = Drawing::Point(18, 45);
			this->textBoxCodi->MaxLength = 6;
			this->textBoxCodi->Width = 300;

			// 
			// btnValidar
			// 
			this->btnValidar->Text = L"Validar";
			this->btnValidar->Location = Drawing::Point(18, 80);
			this->btnValidar->Click += gcnew EventHandler(this, &FormCodi::OnValidarClick);

			// 
			// Controls
			// 
			this->Controls->Add(this->lblInfo);
			this->Controls->Add(this->textBoxCodi);
			this->Controls->Add(this->btnValidar);
			this->AcceptButton = this->btnValidar;
		}
#pragma endregion

	private:
		void OnValidarClick(Object^ sender, EventArgs^ e)
		{
			this->CodiIntroduit = textBoxCodi->Text->Trim();
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
	};
}
