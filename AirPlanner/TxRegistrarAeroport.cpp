#include "pch.h"
#include "TxRegistrarAeroport.h"

TxRegistrarAeroport::TxRegistrarAeroport(std::string correu, std::string nom, std::string contrasenya, std::string pais, std::string sigles)
{
	_correu = correu;
	_nom = nom;
	_contrasenya = contrasenya;
	_pais = pais;
	_sigles = sigles;
}

void TxRegistrarAeroport::executa() {

	PassarelaUsuari usuari(_nom, _correu, _contrasenya, "Aeroport");
	PassarelaAeroport aeroport(_correu, _pais, _sigles); //Mod con los nuevos elementos. 
	bool esborraUsuari = false;
	try {
		usuari.insereix();
		esborraUsuari = true;
		aeroport.insereix();
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if (esborraUsuari) usuari.esborra();
	}
}
