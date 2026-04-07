#include "pch.h"
#include "TxEsborraTreballador.h"

TxEsborraTreballador::TxEsborraTreballador(string correuE) {
	_correuElectronic = correuE;
}

void TxEsborraTreballador::executar() {

	CercadoraUsuari& cU = CercadoraUsuari::getInstance();
	PassarelaUsuari ut = cU.cercaUsuari(gcnew String(_correuElectronic.c_str()));

	CercadoraTreballador cT;
	PassarelaTreballador t = cT.cercaTreballador(_correuElectronic);

	AirPlannerSingleton& airPlanner = AirPlannerSingleton::getInstance();

	PassarelaUsuari* u = airPlanner.obteUsuari();

	if (u->obteCorreuElectronic() != t.obteCorreuAeroport()) {
		throw gcnew Exception("Error: No tens permisos per esborrar aquest treballador");
	}
	try {
		ut.esborra();
		t.esborra();
	}
	catch (Exception^ ex) {
		throw ex;
	}
}