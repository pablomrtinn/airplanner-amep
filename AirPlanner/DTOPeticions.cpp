#include "pch.h"
#include "DTOPeticions.h"

DTOPeticions::DTOPeticions() {
	_idVol = "";
	_origen = "";
	_desti = "";
	_sortidaPrevista = "";
	_arribadaPrevista = "";
	_preu = 0.0;
	_modelAvio = "";
	_correuAerolinia = "";
	_dataSolicitud = "";	
}

DTOPeticions::DTOPeticions(string idVol, string origen, string desti, string sortidaPrevista, string arribadaPrevista, float preu, string modelAvio, string correuAerolinia, string dataSolicitud) {
	_idVol = idVol;
	_origen = origen;
	_desti = desti;
	_sortidaPrevista = sortidaPrevista;
	_arribadaPrevista = arribadaPrevista;
	_preu = preu;
	_modelAvio = modelAvio;
	_correuAerolinia = correuAerolinia;
	_dataSolicitud = dataSolicitud;
}

DTOPeticions::~DTOPeticions() {
	
}

DTOPeticions& DTOPeticions::operator=(const DTOPeticions& obj) {
	if (this != &obj) {
		_idVol = obj._idVol;
		_origen = obj._origen;
		_desti = obj._desti;
		_sortidaPrevista = obj._sortidaPrevista;
		_arribadaPrevista = obj._arribadaPrevista;
		_preu = obj._preu;
		_modelAvio = obj._modelAvio;
		_correuAerolinia = obj._correuAerolinia;
		_dataSolicitud = obj._dataSolicitud;
	}
	return *this;
}

string DTOPeticions::obteIdVol() const {
	return _idVol;
}

string DTOPeticions::obteOrigen() const {
	return _origen;
}

string DTOPeticions::obteDesti() const {
	return _desti;
}

string DTOPeticions::obteSortidaPrevista() const {
	return _sortidaPrevista;
}

string DTOPeticions::obteArribadaPrevista() const {
	return _arribadaPrevista;
}

float DTOPeticions::obtePreu() const {
	return _preu;
}

string DTOPeticions::obteModelAvio() const {
	return _modelAvio;
}

string DTOPeticions::obteCorreuAerolinia() const {
	return _correuAerolinia;
}

string DTOPeticions::obteDataSolicitud() const {
	return _dataSolicitud;
}



void DTOPeticions::setIdVol(const string& idVol) {
	_idVol = idVol;
}

void DTOPeticions::setOrigen(const string& origen) {
	_origen = origen;
}

void DTOPeticions::setDesti(const string& desti) {
	_desti = desti;
}

void DTOPeticions::setSortidaPrevista(const string& sortidaPrevista) {
	_sortidaPrevista = sortidaPrevista;
}

void DTOPeticions::setArribadaPrevista(const string& arribadaPrevista) {
	_arribadaPrevista = arribadaPrevista;
}

void DTOPeticions::setPreu(const float& preu) {
	_preu = preu;
}

void DTOPeticions::setModelAvio(const string& modelAvio) {
	_modelAvio = modelAvio;
}

void DTOPeticions::setCorreuAerolinia(const string& correuAerolinia) {
	_correuAerolinia = correuAerolinia;
}

void DTOPeticions::setDataSolicitud(const string& dataSolicitud) {
	_dataSolicitud = dataSolicitud;
}
