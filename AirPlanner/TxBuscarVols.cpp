#include "pch.h"
#include "TxBuscarVols.h"

//Constructors
TxBuscarVols::TxBuscarVols(string origen, string desti, string aerolinia, string dataSortida, float preu) {
	_origen = origen;
	_desti = desti;
	_aerolinia = aerolinia;
	_dataSortida = dataSortida;
	_preu = preu;
}

//Destructors
TxBuscarVols::~TxBuscarVols() {
}

//Modificadors
void TxBuscarVols::executar() {
	CercadoraVol& cercadoraVol = CercadoraVol::getInstance();
	_vols = cercadoraVol.cercaVolsClient(_origen, _desti, _aerolinia, _dataSortida, _preu);

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

		CercadoraUsuari& cercadoraUsuari = CercadoraUsuari::getInstance();
		string nomAerolinia = cercadoraUsuari.cercaNomAerolinia(_vols[i].obteCorreuAerolinia());
		_nomsAeroliniesVols.push_back(nomAerolinia);
	}
}

vector<DTOVol> TxBuscarVols::obteVolsDTO() const {
	return _volsDTO;
}

vector<string> TxBuscarVols::obteNomsAeroliniesVols() const {
	return _nomsAeroliniesVols;
}