#include "pch.h"
#include "DTOClient.h"

DTOClient::DTOClient() {
    _correuElectronic = "";
    _dataNaixement = "";
    _subscripcio = "";
    _nom = "";
}

DTOClient::DTOClient(string nomC, string correuC, string subscripcioC, string dataNaixementC) {
    _correuElectronic = correuC;
    _dataNaixement = dataNaixementC;
    _subscripcio = subscripcioC;
    _nom = nomC;
}

DTOClient::~DTOClient() {

}

DTOClient& DTOClient::operator=(const DTOClient& obj) {
    if (this != &obj) {
        _nom = obj._nom;
        _correuElectronic = obj._correuElectronic;
        _dataNaixement = obj._dataNaixement;
        _subscripcio = obj._subscripcio;
    }
    return *this;
}

string DTOClient::obteSubscripcio() const {
    return _subscripcio;
}

string DTOClient::obteCorreuElectronic() const {
    return _correuElectronic;
}

string DTOClient::obteDataNaixment() const {
    return _dataNaixement;
}

string DTOClient::obteNom() const {
    return _nom;
}


void DTOClient::setNom(const string& nom) {
	_nom = nom;
}

void DTOClient::setCorreuElectronic(const string& correuElectronic) {
	_correuElectronic = correuElectronic;
}

void DTOClient::setSubscripcio(const string& subscripico) {
	_subscripcio = subscripico;
}

void DTOClient::setDataNaixment(const string& dataNaixement) {
	_dataNaixement = dataNaixement;
}