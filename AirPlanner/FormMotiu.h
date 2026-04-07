#pragma once
#include "Launcher.h"
namespace AirPlanner {

    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;

    public ref class FormMotiu : public Form {
    public:
        property String^ MotiuResolucio;

        FormMotiu(String^ accio, String^ idVol) {
            this->accio = accio;
            this->idVol = idVol;
            this->esRebutjar = accio->ToLower()->Contains("denegar");

            String^ opcionalText = esRebutjar ? "" : " (opcional)";
            this->Text = accio + " vol " + idVol + " - Introdueix el motiu" + opcionalText;

            this->Size = System::Drawing::Size(500, 290);
            this->StartPosition = FormStartPosition::CenterParent;

            // Font gran per al text introduït per l'usuari
            System::Drawing::Font^ fontGran = gcnew System::Drawing::Font("Segoe UI", 11);

            // TextBox amb lletra gran
            textBoxMotiu = gcnew TextBox();
            textBoxMotiu->Multiline = true;
            textBoxMotiu->Font = fontGran; // Aquí es canvia la font del TextBox
            textBoxMotiu->Size = System::Drawing::Size(440, 150);
            textBoxMotiu->Location = System::Drawing::Point(20, 20);
            textBoxMotiu->ScrollBars = ScrollBars::Vertical;
            textBoxMotiu->MaxLength = 250;  // Permetre fins a 250 caràcters
            textBoxMotiu->TextChanged += gcnew EventHandler(this, &FormMotiu::OnTextChanged);

#if NET6_0_OR_GREATER
            textBoxMotiu->PlaceholderText = esRebutjar
                ? "Escriu aquí el motiu del rebuig..."
                : "Opcional: pots indicar un motiu d’aprovació...";
#endif
            this->Controls->Add(textBoxMotiu);

            // Comptador amb lletra gran (mantenim la font original)
            labelComptador = gcnew Label();
            labelComptador->AutoSize = true;
            labelComptador->Location = System::Drawing::Point(20, 180);
            labelComptador->Text = "Màxim caràcters: 250 — Restants: 250";
            this->Controls->Add(labelComptador);

            // Botó Aprovar
            Button^ btnAprovar = gcnew Button();
            btnAprovar->Text = accio;
            btnAprovar->Location = System::Drawing::Point(260, 215);
            btnAprovar->Click += gcnew EventHandler(this, &FormMotiu::OnConfirmar);
            this->Controls->Add(btnAprovar);

            // Botó Cancel·lar
            Button^ btnCancelar = gcnew Button();
            btnCancelar->Text = "Cancel·lar";
            btnCancelar->Location = System::Drawing::Point(120, 215);
            btnCancelar->Click += gcnew EventHandler(this, &FormMotiu::OnCancelar);
            this->Controls->Add(btnCancelar);

            this->AcceptButton = btnAprovar;
            this->CancelButton = btnCancelar;
        }

    private:
        TextBox^ textBoxMotiu;
        Label^ labelComptador;
        String^ accio;
        String^ idVol;
        bool esRebutjar;

        void OnConfirmar(Object^ sender, EventArgs^ e) {
            String^ motiu = textBoxMotiu->Text->Trim();

            if (esRebutjar && String::IsNullOrEmpty(motiu)) {
                MessageBox::Show("Has d'escriure un motiu per denegar el vol.", "Motiu requerit",
                    MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return; // No tanquem el formulari
            }

            this->MotiuResolucio = motiu;
            this->DialogResult = System::Windows::Forms::DialogResult::OK;
            this->Close();
        }

        void OnCancelar(Object^ sender, EventArgs^ e) {
            this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
            this->Close();
        }

        void OnTextChanged(Object^ sender, EventArgs^ e) {
            int restants = 250 - textBoxMotiu->Text->Length;
            labelComptador->Text = "Màxim caràcters: 250 — Restants: " + restants.ToString();
        }
    };
}
