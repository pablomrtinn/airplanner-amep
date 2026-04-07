#include "pch.h"
#include "TxEsborraVol.h"


TxEsborraVol::TxEsborraVol(string idVol) {
	_idVol = idVol;
}

void TxEsborraVol::executar() {
	CercadoraVol& cercadora = CercadoraVol::getInstance();
	PassarelaVol vol = cercadora.cercaVolPerId(_idVol);

	try {
		vol.esborra();
		MessageBox::Show("Vol esborrat correctament!", "Vol Esborrat", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra (ERRORBOX)
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}