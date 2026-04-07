#include "pch.h"
#include "DTOVol.h"

DTOVol::DTOVol(){
	_idVol = "";
	_origen = "";
	_desti = "";
	_sortidaPrevista = "";
	_arribadaPrevista = "";
	_sortidaActualitzada = "";
	_arribadaActualitzada = "";
	_preu = 0;
	_modelAvio = "";
	_correuAerolinia = "";
}
DTOVol::DTOVol(string idVol, string origen, string desti, string sortidaP, string arribadaP, string sortidaA, string arribadaA, float preu, string modelAvio, string correuAerolinia){
	_idVol = idVol;
	_origen = origen;
	_desti = desti;
	_sortidaPrevista = sortidaP;
	_arribadaPrevista = arribadaP;
	_sortidaActualitzada = sortidaA;
	_arribadaActualitzada = arribadaA;
	_preu = preu;
	_modelAvio = modelAvio;
	_correuAerolinia = correuAerolinia;
}
DTOVol::~DTOVol(){}

DTOVol& DTOVol::operator=(const DTOVol& obj){
	if (this != &obj) {
		_idVol = obj._idVol;
		_origen = obj._origen;
		_desti = obj._desti;
		_sortidaPrevista = obj._sortidaPrevista;
		_arribadaPrevista = obj._arribadaPrevista;
		_sortidaActualitzada = obj._sortidaActualitzada;
		_arribadaActualitzada = obj._arribadaActualitzada;
		_preu = obj._preu;
		_modelAvio = obj._modelAvio;
		_correuAerolinia = obj._correuAerolinia;
	}
	return *this;
}

string DTOVol::obteIdVol() const {
	return _idVol;
}

string DTOVol::obteOrigen() const {
	return _origen;
}

string DTOVol::obteDesti() const {
	return _desti;
}

string DTOVol::obteSortidaPrevista() const {
	return _sortidaPrevista;
}

string DTOVol::obteArribadaPrevista() const {
	return _arribadaPrevista;
}

string DTOVol::obteSortidaActualitzada() const {
	return _sortidaActualitzada;
}

string DTOVol::obteArribadaActualitzada() const {
	return _arribadaActualitzada;
}

float DTOVol::obtePreu() const {
	return _preu;
}

string DTOVol::obteModelAvio() const {
	return _modelAvio;
}

string DTOVol::obteCorreuAerolinia() const {
	return _correuAerolinia;
}

void DTOVol::setIdVol(const string& idVol) {
	_idVol = idVol;
}

void DTOVol::setOrigen(const string& origen) {
	_origen = origen;
}

void DTOVol::setDesti(const string& desti) {
	_desti = desti;
}

void DTOVol::setSortidaPrevista(const string& sortidaP) {
	_sortidaPrevista = sortidaP;
}

void DTOVol::setArribadaPrevista(const string& arribadaP) {
	_arribadaPrevista = arribadaP;
}

void DTOVol::setSortidaActualitzada(const string& sortidaA) {
	_sortidaActualitzada = sortidaA;
}

void DTOVol::setArribadaActualitzada(const string& arribadaA) {
	_arribadaActualitzada = arribadaA;
}

void DTOVol::setPreu(const float& preu) {
	_preu = preu;
}

void DTOVol::setModelAvio(const string& modelAvio) {
	_modelAvio = modelAvio;
}

void DTOVol::setCorreuAerolinia(const string& correuAerolinia) {
	_correuAerolinia = correuAerolinia;
}
