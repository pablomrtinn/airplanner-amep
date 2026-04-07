#include "pch.h"
#include "DTOAerolinia.h"

DTOAerolinia::DTOAerolinia() {
	_nom = "";
	_correuElectronic = "";
}

DTOAerolinia::DTOAerolinia(string nomA, string correuA) {
	_nom = nomA;
	_correuElectronic = correuA;
}
DTOAerolinia::~DTOAerolinia() {

}

DTOAerolinia& DTOAerolinia::operator=(const DTOAerolinia& obj) {
	if (this != &obj) {
		_nom = obj._nom;
		_correuElectronic = obj._correuElectronic;
	}
	return *this;
}

string DTOAerolinia::obteNom() const {
	return _nom;
}

string DTOAerolinia::obteCorreuElectronic() const {
	return _correuElectronic;
}

void DTOAerolinia::setNom(const string& nom) {
	_nom = nom;
}

void DTOAerolinia::setCorreuElectronic(const string& correuElectronic) {
	_correuElectronic = correuElectronic;
}
