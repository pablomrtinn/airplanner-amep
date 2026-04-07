#include "pch.h"
#include "TxConsultaVolsAerolinia.h"

//Constructors
TxConsultaVolsAerolinia::TxConsultaVolsAerolinia(string correu) {
	_correuAerolinia = correu;
}

//Destructors
TxConsultaVolsAerolinia::~TxConsultaVolsAerolinia() {

}

//Modificadors
void TxConsultaVolsAerolinia::executar() {
	CercadoraVol& cercadoraVol = CercadoraVol::getInstance();
	_vols = cercadoraVol.cercaVolsAerolinia(_correuAerolinia);

	for (int i = 0; i < _vols.size(); i++)
	{
		DTOVol volDTO;
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

vector<DTOVol> TxConsultaVolsAerolinia::obteVolsDTO() const {
	return _volsDTO;
}