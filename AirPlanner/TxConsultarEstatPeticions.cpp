#include "pch.h"
#include "TxConsultarEstatPeticions.h"


TxConsultarEstatPeticions::TxConsultarEstatPeticions() {
}

TxConsultarEstatPeticions::~TxConsultarEstatPeticions() {
}

void TxConsultarEstatPeticions::executar() {
	AirPlannerSingleton& airPlanner = AirPlannerSingleton::getInstance();
	PassarelaUsuari* _usuari = airPlanner.obteUsuari();
	string correuElectronicA = _usuari->obteCorreuElectronic();

	CercadoraPeticions& cercadoraPeticions = CercadoraPeticions::getInstance();
	_passarelaPeticions = cercadoraPeticions.cercaEstatPeticions(gcnew System::String(correuElectronicA.c_str()));

	for (int i = 0; i < _passarelaPeticions.size(); ++i) {
		DTOEstatPeticions peticio(_passarelaPeticions[i].obteIdVol(),
			_passarelaPeticions[i].obteOrigen(),
			_passarelaPeticions[i].obteDesti(),
			_passarelaPeticions[i].obteSortidaPrevista(),
			_passarelaPeticions[i].obteArribadaPrevista(),
			_passarelaPeticions[i].obtePreu(),
			_passarelaPeticions[i].obteModelAvio(),
			_passarelaPeticions[i].obteCorreuAeroport(),
			_passarelaPeticions[i].obteDataSolicitud(),
			_passarelaPeticions[i].obteEstat(),
			_passarelaPeticions[i].obteMotiuResolucio(),
			_passarelaPeticions[i].obteDataResolucio());
		_peticions.push_back(peticio);
	}
}

vector<PassarelaPeticions> TxConsultarEstatPeticions::obtePassarelaPeticions() {
	return _passarelaPeticions;
}

vector<DTOEstatPeticions> TxConsultarEstatPeticions::obtePeticions() {
	return _peticions;
}
