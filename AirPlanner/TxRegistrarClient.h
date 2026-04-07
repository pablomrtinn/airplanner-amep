#ifndef TXREGISTRARCLIENT_HPP
#define TXREGISTRARCLIENT_HPP
#pragma once
#include "PassarelaClient.h"
#include "PassarelaUsuari.h"
using namespace std;

class TxRegistrarClient
{
private:

    string _nom;
    string _contrasenya;
    string _correuElectronic;
    string _dataNaixement;
    string _modalitatSubscripcio;
    string _tipus = "Client";

public:

    TxRegistrarClient(string _nom, string _coreuElectronic, string _contrasenya, string _dataNaixement, string _modalitatSubscripcio);
    void executa();

};
#endif

