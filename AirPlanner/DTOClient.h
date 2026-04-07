#ifndef DTOCLIENT_HPP
#define DTOCLIENT_HPP
#pragma once
#include <string>
#include "PassarelaClient.h"
using namespace std;

class DTOClient
{
public:
    DTOClient();
    DTOClient(string nomC, string correuC, string subscripcioC, string dataNaixementC);
    ~DTOClient();

    DTOClient& operator=(const DTOClient& obj);

    string obteCorreuElectronic() const;
    string obteSubscripcio() const; 
    string obteDataNaixment() const;
    string obteNom() const;

    void setNom(const string& nom);
    void setCorreuElectronic(const string& correuElectronic);
    void setSubscripcio(const string& subscripico);
    void setDataNaixment(const string& dataNaixement);

private:
    string _nom;
    string _correuElectronic;
    string _subscripcio;
    string _dataNaixement;
};
#endif