#include "pch.h"
#include "CtrlModificaTreballador.h"


CtrlModificaTreballador::CtrlModificaTreballador() {
}

CtrlModificaTreballador::~CtrlModificaTreballador() {
}

void CtrlModificaTreballador::modificaTreballador(string correuElectronic, string contrasenya, string nom, string id, string aeroport) {
	try {

		CercadoraTreballador cercadoraT;
		_treballador = cercadoraT.cercaTreballador(correuElectronic);

		CercadoraUsuari& cercadoraU = cercadoraU.getInstance();
		_usuari = cercadoraU.cercaUsuari(gcnew String(correuElectronic.c_str()));

		if (nom != "") _usuari.setNom(nom);
		if (contrasenya != "") _usuari.setContrasenya(contrasenya);
		if (id != "") _treballador.setId(id);
		if (aeroport != "") _treballador.setCorreuAeroport(aeroport);

		if (contrasenya != "" || nom != "") {
			_usuari.modifica();
		}
		if (aeroport != "" || id != "") {
			_treballador.modifica();
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
}