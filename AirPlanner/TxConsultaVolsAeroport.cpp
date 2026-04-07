#include "pch.h"
#include "TxConsultaVolsAeroport.h"

TxConsultaVolsAeroport::TxConsultaVolsAeroport() {

}

TxConsultaVolsAeroport::~TxConsultaVolsAeroport() {
}

void TxConsultaVolsAeroport::executar() {

	AirPlannerSingleton& Airplanner = AirPlannerSingleton::getInstance();
    PassarelaUsuari* usuari = Airplanner.obteUsuari();

    if (usuari->obtetipus()=="Aeroport"){
        _correuAeroport = usuari->obteCorreuElectronic();
    }
    else if (usuari->obtetipus()=="Treballador") {
        CercadoraTreballador cerca;
		PassarelaTreballador treballador = cerca.cercaTreballador(usuari->obteCorreuElectronic());
        _correuAeroport = treballador.obteCorreuAeroport();
    }
	else {
		throw gcnew Exception("No estas loguejat correctament. Si us plau, tenca sessió i torna-ho a intentar");
	} 

	CercadoraAeroport cercadoraAeroport;
	string siglesAeroport = cercadoraAeroport.cercaSiglesAeroport(_correuAeroport);

	CercadoraVol& cercadoraVol = CercadoraVol::getInstance();
	vector<PassarelaVol> _vols = cercadoraVol.cercaVolsAeroport(siglesAeroport);

	DTOVol volDTO;

	for (int i = 0; i < _vols.size(); i++)
	{	

		volDTO.setIdVol(_vols[i].obteIdVol());
		volDTO.setOrigen(_vols[i].obteOrigen());
		volDTO.setDesti(_vols[i].obteDesti());
		volDTO.setSortidaPrevista(_vols[i].obteSortidaPrevista());
		volDTO.setArribadaPrevista(_vols[i].obteArribadaPrevista());
		volDTO.setSortidaActualitzada(_vols[i].obteSortidaActualitzada());
		volDTO.setArribadaActualitzada(_vols[i].obteArribadaActualitzada());
		volDTO.setPreu(_vols[i].obtePreu());
		volDTO.setModelAvio(_vols[i].obteModelAvio());
		_volsDTO.push_back(volDTO);
	}
}

vector<DTOVol> TxConsultaVolsAeroport::obteVolsDTO() {
	return _volsDTO;
}