#include "pch.h"
#include "DTOEstatPeticions.h"

DTOEstatPeticions::DTOEstatPeticions() {
	_idVol = "";
	_origen = "";
	_desti = "";
	_sortidaPrevista = "";
	_arribadaPrevista = "";
	_preu = 0.0;
	_modelAvio = "";
	_correuAeroport = "";
	_dataSolicitud = "";
	_estat = "";
	_motiuResolucio = "";
	_dataResolucio = "";
}

DTOEstatPeticions::DTOEstatPeticions(string idVol, string origen, string desti, string sortidaPrevista, string arribadaPrevista, float preu, string modelAvio, string correuAeroport, string dataSolicitud, string estat, string motiuResolucio, string dataResolucio) {
	_idVol = idVol;
	_origen = origen;
	_desti = desti;
	_sortidaPrevista = sortidaPrevista;
	_arribadaPrevista = arribadaPrevista;
	_preu = preu;
	_modelAvio = modelAvio;
	_correuAeroport = correuAeroport;
	_dataSolicitud = dataSolicitud;
	_estat = estat;
	_motiuResolucio = motiuResolucio;
	_dataResolucio = dataResolucio;
}

DTOEstatPeticions::~DTOEstatPeticions() {

}

DTOEstatPeticions& DTOEstatPeticions::operator=(const DTOEstatPeticions& obj) {
	if (this != &obj) {
		_idVol = obj._idVol;
		_origen = obj._origen;
		_desti = obj._desti;
		_sortidaPrevista = obj._sortidaPrevista;
		_arribadaPrevista = obj._arribadaPrevista;
		_preu = obj._preu;
		_modelAvio = obj._modelAvio;
		_correuAeroport = obj._correuAeroport;
		_dataSolicitud = obj._dataSolicitud;
		_estat = obj._estat;
		_motiuResolucio = obj._motiuResolucio;
		_dataResolucio = obj._dataResolucio;
	}
	return *this;
}

string DTOEstatPeticions::obteIdVol() const {
	return _idVol;
}

string DTOEstatPeticions::obteOrigen() const {
	return _origen;
}

string DTOEstatPeticions::obteDesti() const {
	return _desti;
}

string DTOEstatPeticions::obteSortidaPrevista() const {
	return _sortidaPrevista;
}

string DTOEstatPeticions::obteArribadaPrevista() const {
	return _arribadaPrevista;
}

float DTOEstatPeticions::obtePreu() const {
	return _preu;
}

string DTOEstatPeticions::obteModelAvio() const {
	return _modelAvio;
}

string DTOEstatPeticions::obteCorreuAeroport() const {
	return _correuAeroport;
}

string DTOEstatPeticions::obteDataSolicitud() const {
	return _dataSolicitud;
}

string DTOEstatPeticions::obteEstat() const {
	return _estat;
}

string DTOEstatPeticions::obteMotiuResolucio() const {
	return _motiuResolucio;
}

string DTOEstatPeticions::obteDataResolucio() const {
	return _dataResolucio;
}


void DTOEstatPeticions::setIdVol(const string& idVol) {
	_idVol = idVol;
}

void DTOEstatPeticions::setOrigen(const string& origen) {
	_origen = origen;
}

void DTOEstatPeticions::setDesti(const string& desti) {
	_desti = desti;
}

void DTOEstatPeticions::setSortidaPrevista(const string& sortidaPrevista) {
	_sortidaPrevista = sortidaPrevista;
}

void DTOEstatPeticions::setArribadaPrevista(const string& arribadaPrevista) {
	_arribadaPrevista = arribadaPrevista;
}

void DTOEstatPeticions::setPreu(const float& preu) {
	_preu = preu;
}

void DTOEstatPeticions::setModelAvio(const string& modelAvio) {
	_modelAvio = modelAvio;
}

void DTOEstatPeticions::setCorreuAeroport(const string& correuAeroport) {
	_correuAeroport = correuAeroport;
}

void DTOEstatPeticions::setDataSolicitud(const string& dataSolicitud) {
	_dataSolicitud = dataSolicitud;
}

void DTOEstatPeticions::setEstat(const string& estat) {
	_estat = estat;
}

void DTOEstatPeticions::setMotiuResolucio(const string& motiuResolucio) {
	_motiuResolucio = motiuResolucio;
}

void DTOEstatPeticions::setDataResolucio(const string& dataResolucio) {
	_dataResolucio = dataResolucio;
}