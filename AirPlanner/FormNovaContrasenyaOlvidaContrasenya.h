#pragma once

namespace AirPlanner {

	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;

	public ref class FormNovaContrasenyaOlvidaContrasenya : public System::Windows::Forms::Form
	{
	public:
		String^ NovaContrasenya;

		FormNovaContrasenyaOlvidaContrasenya(void)
		{
			InitializeComponent();
		}

	protected:
		~FormNovaContrasenyaOlvidaContrasenya()
		{
			if (components)
				delete components;
		}

	private:
		System::ComponentModel::Container^ components;

		Label^ lblInfo;
		TextBox^ txtNova;
		TextBox^ txtConfirmar;
		Button^ btnCanviar;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->lblInfo = (gcnew Label());
			this->txtNova = (gcnew TextBox());
			this->txtConfirmar = (gcnew TextBox());
			this->btnCanviar = (gcnew Button());

			this->SuspendLayout();

			// Form
			this->Text = L"Canviar contrasenya";
			this->ClientSize = System::Drawing::Size(420, 180);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->StartPosition = FormStartPosition::CenterParent;
			this->MaximizeBox = false;
			this->MinimizeBox = false;

			// Label informatiu
			this->lblInfo->AutoSize = false;
			this->lblInfo->Location = System::Drawing::Point(20, 20);
			this->lblInfo->Size = System::Drawing::Size(380, 40);
			this->lblInfo->Text = L"Pots canviar la teva contrasenya a continuació.\nIntrodueix dos vegades la contrasenya per canviar-la.";
			this->lblInfo->TextAlign = ContentAlignment::MiddleLeft;

			// TextBox nova contrasenya
			this->txtNova->Location = System::Drawing::Point(20, 70);
			this->txtNova->Size = System::Drawing::Size(380, 22);
			this->txtNova->UseSystemPasswordChar = true;
			// No hi ha PlaceholderText, així que pots posar un label al costat si vols

			// TextBox confirmar contrasenya
			this->txtConfirmar->Location = System::Drawing::Point(20, 110);
			this->txtConfirmar->Size = System::Drawing::Size(380, 22);
			this->txtConfirmar->UseSystemPasswordChar = true;

			// Botó canviar
			this->btnCanviar->Text = L"Canviar";
			this->btnCanviar->Location = System::Drawing::Point(310, 140);
			this->btnCanviar->Size = System::Drawing::Size(90, 30);
			this->btnCanviar->Click += gcnew System::EventHandler(this, &FormNovaContrasenyaOlvidaContrasenya::btnCanviar_Click);

			this->AcceptButton = this->btnCanviar;

			// Afegir controls
			this->Controls->Add(this->lblInfo);
			this->Controls->Add(this->txtNova);
			this->Controls->Add(this->txtConfirmar);
			this->Controls->Add(this->btnCanviar);

			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private:
		void btnCanviar_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ nova = this->txtNova->Text;
			String^ confirma = this->txtConfirmar->Text;

			if (String::IsNullOrWhiteSpace(nova) || String::IsNullOrWhiteSpace(confirma))
			{
				MessageBox::Show(L"Omple tots els camps.", L"Camp buit", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			if (!nova->Equals(confirma))
			{
				MessageBox::Show(L"Les contrasenyes no coincideixen.", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			this->NovaContrasenya = nova;
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
	};
}
