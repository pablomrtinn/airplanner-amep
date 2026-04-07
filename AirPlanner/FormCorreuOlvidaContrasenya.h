#pragma once

namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FormCorreuOlvidaContrasenya : public System::Windows::Forms::Form
	{
	public:
		// Camp públic per accedir al correu
		String^ Correu;

		FormCorreuOlvidaContrasenya(void)
		{
			InitializeComponent();
		}

	protected:
		~FormCorreuOlvidaContrasenya()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container^ components;
		Label^ lblMissatge;
		TextBox^ txtCorreu;
		Button^ btnEnviar;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->lblMissatge = (gcnew System::Windows::Forms::Label());
			this->txtCorreu = (gcnew System::Windows::Forms::TextBox());
			this->btnEnviar = (gcnew System::Windows::Forms::Button());

			this->SuspendLayout();

			// Form
			this->Text = L"Recuperació de contrasenya";
			this->ClientSize = System::Drawing::Size(440, 160);
			this->StartPosition = FormStartPosition::CenterParent;
			this->MaximizeBox = false;
			this->MinimizeBox = false;

			// Label
			this->lblMissatge->AutoSize = true;
			this->lblMissatge->Location = System::Drawing::Point(20, 20);
			this->lblMissatge->Size = System::Drawing::Size(380, 30);
			this->lblMissatge->Text = L"Introdueix el correu electrònic per verificar que ets el propietari.";

			// TextBox
			this->txtCorreu->Location = System::Drawing::Point(20, 60);
			this->txtCorreu->Size = System::Drawing::Size(380, 22);
			this->txtCorreu->TabIndex = 0;

			// Button
			this->btnEnviar->Text = L"Enviar";
			this->btnEnviar->Location = System::Drawing::Point(310, 100);
			this->btnEnviar->Size = System::Drawing::Size(90, 30);
			this->btnEnviar->TabIndex = 1;
			this->btnEnviar->Click += gcnew System::EventHandler(this, &FormCorreuOlvidaContrasenya::btnEnviar_Click);

			// Afegir controls al formulari
			this->Controls->Add(this->lblMissatge);
			this->Controls->Add(this->txtCorreu);
			this->Controls->Add(this->btnEnviar);

			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private:
		void btnEnviar_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (String::IsNullOrWhiteSpace(this->txtCorreu->Text))
			{
				MessageBox::Show(L"Si us plau, introdueix el teu correu electrònic.", L"Camp buit", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			this->Correu = this->txtCorreu->Text->Trim();
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
	};
}
