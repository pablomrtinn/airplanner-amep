#include "pch.h"
#include "TxRegistrarAerolinia.h"

TxRegistrarAerolinia::TxRegistrarAerolinia(std::string correu, std::string contrasenya, std::string nom) {
	_correu = correu;
	_contrasenya = contrasenya;
	_nom = nom;
}

void TxRegistrarAerolinia::executar() {
	PassarelaUsuari u(_nom, _correu, _contrasenya, "Aerolinia");
	PassarelaAerolinia a(_correu);
	bool esborraUsuari = false;
	try {
		u.insereix();
		esborraUsuari = true;
		a.insereix();
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if (esborraUsuari) u.esborra();
		
	}
}