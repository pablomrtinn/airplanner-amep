#include "pch.h"
#include "TxConsultarPeticions.h"

TxConsultarPeticions::TxConsultarPeticions() {
}

TxConsultarPeticions::~TxConsultarPeticions() {
}

void TxConsultarPeticions::executar() {
	AirPlannerSingleton& airPlanner = AirPlannerSingleton::getInstance();
	PassarelaUsuari* _usuari = airPlanner.obteUsuari();
	string correuElectronicA = _usuari->obteCorreuElectronic();

	CercadoraPeticions& cercadoraPeticions = CercadoraPeticions::getInstance();
	_passarelaPeticions = cercadoraPeticions.cercaPeticions(gcnew System::String(correuElectronicA.c_str()));

	for (int i = 0; i < _passarelaPeticions.size(); ++i) {
		DTOPeticions peticio(_passarelaPeticions[i].obteIdVol(),
			_passarelaPeticions[i].obteOrigen(),
			_passarelaPeticions[i].obteDesti(),
			_passarelaPeticions[i].obteSortidaPrevista(),
			_passarelaPeticions[i].obteArribadaPrevista(),
			_passarelaPeticions[i].obtePreu(),
			_passarelaPeticions[i].obteModelAvio(),
			_passarelaPeticions[i].obteCorreuAerolinia(),
			_passarelaPeticions[i].obteDataSolicitud());
		_peticions.push_back(peticio);
	}
}

vector<PassarelaPeticions> TxConsultarPeticions::obtePassarelaPeticions() {
	return _passarelaPeticions;
}

vector<DTOPeticions> TxConsultarPeticions::obtePeticions() {
	return _peticions;
}
