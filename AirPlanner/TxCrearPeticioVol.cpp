#include "pch.h"
#include "TxCrearPeticioVol.h"

TxCrearPeticioVol::TxCrearPeticioVol(string idVol, string origen, string desti, string datahoraSortida, string datahoraArribada, float preu, string modelAvio, string correuAerolinia, string correuAeroport, string dataSolicitud, string estat, string motiuResolucio, string dataResolucio) {

    _idVol = idVol;
	_origen = origen;
	_desti = desti;
	_sortidaPrevista = datahoraSortida;
	_arribadaPrevista = datahoraArribada;
	_preu = preu;
	_modelAvio = modelAvio;
	_correuAerolinia = correuAerolinia;
	_correuAeroport = correuAeroport;
	_dataSolicitud = dataSolicitud;
	_estat = estat;
	_motiuResolucio = motiuResolucio;
}

void TxCrearPeticioVol::executa() {

	PassarelaAeroport aeroport;
	CercadoraAeroport cercadoraAeroport;
	aeroport = cercadoraAeroport.cercaAeroportPerSigles(_origen); //sino es troba aquestes sigles la cercadora ja dona error
	aeroport = cercadoraAeroport.cercaAeroportPerSigles(_desti); //sino es troba aquestes sigles la cercadora ja dona error
	_correuAeroport = aeroport.obteCorreu();


	PassarelaPeticions peticio(_idVol, _origen, _desti, _sortidaPrevista, _arribadaPrevista, _preu, _modelAvio, _correuAerolinia, _correuAeroport, _dataSolicitud, _estat, _motiuResolucio, _dataResolucio);
    peticio.insereix();
}
