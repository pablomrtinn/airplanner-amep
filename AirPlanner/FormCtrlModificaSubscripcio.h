#pragma once
#include "CapaDePresentacio.h"
#include "Launcher.h"
namespace AirPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FormCtrlModificaSubscripcio : public System::Windows::Forms::Form
	{
	public:
		FormCtrlModificaSubscripcio(void)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FormCtrlModificaSubscripcio::Form_Load);
		}

	protected:
		~FormCtrlModificaSubscripcio()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container^ components;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::RadioButton^ radioOption1;
		System::Windows::Forms::RadioButton^ radioOption2;
		System::Windows::Forms::Button^ btnCancelar;
		System::Windows::Forms::Button^ btnEliminarSubscripcio;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
		   System::Windows::Forms::Button^ btnAcceptar;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormCtrlModificaSubscripcio::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->radioOption1 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioOption2 = (gcnew System::Windows::Forms::RadioButton());
			   this->btnCancelar = (gcnew System::Windows::Forms::Button());
			   this->btnEliminarSubscripcio = (gcnew System::Windows::Forms::Button());
			   this->btnAcceptar = (gcnew System::Windows::Forms::Button());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 60, System::Drawing::FontStyle::Bold));
			   this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			   this->label1->Location = System::Drawing::Point(551, 46);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(899, 97);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Modificar Subscripció";
			   // 
			   // label2
			   // 
			   this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::SystemColors::ControlLight;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(759, 217);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(462, 42);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Les Nostres Subscripcions";
			   // 
			   // radioOption1
			   // 
			   this->radioOption1->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->radioOption1->AutoSize = true;
			   this->radioOption1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->radioOption1->Location = System::Drawing::Point(886, 329);
			   this->radioOption1->Name = L"radioOption1";
			   this->radioOption1->Size = System::Drawing::Size(104, 35);
			   this->radioOption1->TabIndex = 2;
			   this->radioOption1->Text = L"Basic";
			   this->radioOption1->UseVisualStyleBackColor = true;
			   // 
			   // radioOption2
			   // 
			   this->radioOption2->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->radioOption2->AutoSize = true;
			   this->radioOption2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->radioOption2->Location = System::Drawing::Point(886, 412);
			   this->radioOption2->Name = L"radioOption2";
			   this->radioOption2->Size = System::Drawing::Size(146, 35);
			   this->radioOption2->TabIndex = 3;
			   this->radioOption2->Text = L"Premium";
			   this->radioOption2->UseVisualStyleBackColor = true;
			   // 
			   // btnCancelar
			   // 
			   this->btnCancelar->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->btnCancelar->BackColor = System::Drawing::Color::Tomato;
			   this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnCancelar->Location = System::Drawing::Point(156, 884);
			   this->btnCancelar->Name = L"btnCancelar";
			   this->btnCancelar->Size = System::Drawing::Size(176, 56);
			   this->btnCancelar->TabIndex = 4;
			   this->btnCancelar->Text = L"Cancelar";
			   this->btnCancelar->UseVisualStyleBackColor = false;
			   this->btnCancelar->Click += gcnew System::EventHandler(this, &FormCtrlModificaSubscripcio::btnCancelar_Click);
			   // 
			   // btnEliminarSubscripcio
			   // 
			   this->btnEliminarSubscripcio->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->btnEliminarSubscripcio->BackColor = System::Drawing::Color::Tomato;
			   this->btnEliminarSubscripcio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->btnEliminarSubscripcio->Location = System::Drawing::Point(731, 886);
			   this->btnEliminarSubscripcio->Name = L"btnEliminarSubscripcio";
			   this->btnEliminarSubscripcio->Size = System::Drawing::Size(536, 55);
			   this->btnEliminarSubscripcio->TabIndex = 5;
			   this->btnEliminarSubscripcio->Text = L"Eliminar la subscripció actual";
			   this->btnEliminarSubscripcio->UseVisualStyleBackColor = false;
			   this->btnEliminarSubscripcio->Visible = false;
			   this->btnEliminarSubscripcio->Click += gcnew System::EventHandler(this, &FormCtrlModificaSubscripcio::btnEliminarSubscripcio_Click);
			   // 
			   // btnAcceptar
			   // 
			   this->btnAcceptar->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->btnAcceptar->BackColor = System::Drawing::Color::MediumAquamarine;
			   this->btnAcceptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnAcceptar->Location = System::Drawing::Point(1657, 885);
			   this->btnAcceptar->Name = L"btnAcceptar";
			   this->btnAcceptar->Size = System::Drawing::Size(186, 54);
			   this->btnAcceptar->TabIndex = 6;
			   this->btnAcceptar->Text = L"Acceptar";
			   this->btnAcceptar->UseVisualStyleBackColor = false;
			   this->btnAcceptar->Click += gcnew System::EventHandler(this, &FormCtrlModificaSubscripcio::btnAcceptar_Click);
			   // 
			   // label3
			   // 
			   this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(1049, 346);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(57, 13);
			   this->label3->TabIndex = 7;
			   this->label3->Text = L"(9.99 €/M)";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(1049, 429);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(63, 13);
			   this->label4->TabIndex = 8;
			   this->label4->Text = L"(19.99 €/M)";
			   // 
			   // label5
			   // 
			   this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(548, 564);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(924, 25);
			   this->label5->TabIndex = 9;
			   this->label5->Text = L"Ara gràcies a les nostres subscripcions pots obtenir descomptes en tots el vol de"
				   L" la plataforma.";
			   // 
			   // label6
			   // 
			   this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->Location = System::Drawing::Point(685, 635);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(650, 25);
			   this->label6->TabIndex = 10;
			   this->label6->Text = L"Si vols tenir descans i mantenir la cartera és la nostra millor oferta.";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(-2, -1);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(1907, 1023);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 11;
			   this->pictureBox1->TabStop = false;
			   // 
			   // FormCtrlModificaSubscripcio
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1904, 1022);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->btnAcceptar);
			   this->Controls->Add(this->btnEliminarSubscripcio);
			   this->Controls->Add(this->btnCancelar);
			   this->Controls->Add(this->radioOption2);
			   this->Controls->Add(this->radioOption1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->pictureBox1);
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"FormCtrlModificaSubscripcio";
			   this->Text = L"AirPlanner";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private:
		void Form_Load(System::Object^ sender, System::EventArgs^ e)
		{
			EvaluarVisibilidadEliminar();
		}

		void EvaluarVisibilidadEliminar()
		{
			AirPlannerSingleton& airPlanner = AirPlannerSingleton::getInstance();
			PassarelaUsuari usuario = *(airPlanner.obteUsuari());
			std::string CorreuElectronic = usuario.obteCorreuElectronic();

			CercadoraClient& cerca1 = CercadoraClient::getInstance();
			System::String^ correu = msclr::interop::marshal_as<System::String^>(CorreuElectronic);

			PassarelaClient client = cerca1.cercaClient(correu);

			if (client.obteSubscripcio() != "Cap")
			{
				this->btnEliminarSubscripcio->Visible = true;
			}
			else
			{
				this->btnEliminarSubscripcio->Visible = false;
			}
		}
	private: System::Void btnAcceptar_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			std::string tipoSubscripcion;
			if (radioOption1->Checked)
			{
				tipoSubscripcion = "Basic";
			}
			else if (radioOption2->Checked)
			{
				tipoSubscripcion = "Premium";
			}
			else
			{
				MessageBox::Show("Si us plau, selecciona una opció de subscripció.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return; // Salir si no se seleccion� ninguna opci�n
			}

			CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();

			presentacio.processatCtrlModificarSubscripcion(tipoSubscripcion);
			MessageBox::Show("S'ha Modificat la Subscripció amb la teva elecció");
			Launcher::Instance->formStack->Pop();
			this->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Launcher::Instance->formStack->Pop();
			this->Close();
		}



	}
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Launcher::Instance->formStack->Pop();
		this->Close();
	}
	private: System::Void btnEliminarSubscripcio_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CapaDePresentacio& presentacio = CapaDePresentacio::getInstance();

		presentacio.processatCtrlModificarSubscripcion("Cap");
		MessageBox::Show("S'ha Modificat la Subscripció amb la teva elecció");
		Launcher::Instance->formStack->Pop();
		this->Close();
	}
	};
}