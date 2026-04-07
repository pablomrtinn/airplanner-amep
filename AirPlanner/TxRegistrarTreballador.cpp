#include "pch.h"
#include "TxRegistrarTreballador.h"


TxRegistrarTreballador::TxRegistrarTreballador(string correuElectronic, string nom, string contrasenya, string idTreballador) {
	_correuElectronic = correuElectronic;
	_nom = nom;
	_contrasenya = contrasenya;
	_id = idTreballador;
}

void TxRegistrarTreballador::executa() {
	AirPlannerSingleton& Airplanner = AirPlannerSingleton::getInstance();
	_correuAeroport = Airplanner.obteUsuari()->obteCorreuElectronic();

	PassarelaTreballador treballador(_correuElectronic, _correuAeroport, _id);
	PassarelaUsuari usuari(_nom, _correuElectronic, _contrasenya, "Treballador");
	bool esborraUsuari = false;

	try {
		usuari.insereix();
		esborraUsuari = true;
		treballador.insereix();
	}
	catch (Exception^ ex) {
		if (esborraUsuari) usuari.esborra();
		throw ex;
	}	
}