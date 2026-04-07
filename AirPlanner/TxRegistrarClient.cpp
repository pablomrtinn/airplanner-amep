#include "pch.h"
#include "TxRegistrarClient.h"


TxRegistrarClient::TxRegistrarClient(std::string nom, std::string correuElectronic, std::string contrasenya, std::string dataNaixement, std::string modalitatSubscripcio) {

    _nom = nom;
    _correuElectronic = correuElectronic;
    _contrasenya = contrasenya;
    _dataNaixement = dataNaixement;
    _modalitatSubscripcio = modalitatSubscripcio;
}


void TxRegistrarClient::executa() {

    PassarelaUsuari usuari(_nom, _correuElectronic, _contrasenya, _tipus);
    usuari.insereix();

    PassarelaClient client(_correuElectronic, _modalitatSubscripcio, _dataNaixement);
    client.insereix();
}
