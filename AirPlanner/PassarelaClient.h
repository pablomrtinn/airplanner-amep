#ifndef PASSARELACLIENT_HPP
#define PASSARELACLIENT_HPP
#pragma once
#include "ConnexioBD.h"
#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;

class PassarelaClient
{
private:
    //static PassarelaClient* ins;

    string _correuElectronic;
    string _subscripcio;
    string _dataNaixement;

public:
    PassarelaClient();
    PassarelaClient(string correuElectronicU, string subscripcioU, string dataNaixementU);

    ~PassarelaClient();

    string obteCorreuElectronic() const;
    string obteSubscripcio() const;
    string obteDataNaixement() const;

    PassarelaClient& operator=(const PassarelaClient& obj);

    void setCorreuElectronic(string correuElectornic);
    void setSubscripcio(string subscripcio);
    void setDataNaixement(string dataNaixement);

    void insereix();
    void modifica();
    void esborra();
};
#endif