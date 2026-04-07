#ifndef CERCADORAEROPORT_HPP
#define CERCADORAEROPORT_HPP
#pragma once
#include "PassarelaAeroport.h"
#include <vector>
#include <stdexcept>
#include <msclr/marshal_cppstd.h>
#include <string>

class CercadoraAeroport
{
private:
    vector<string> _siglesAeroports;

public:

    //static CercadoraAeroportPerSigles& getInstance();
    CercadoraAeroport();

    ~CercadoraAeroport();

    PassarelaAeroport cercaAeroportPerSigles(string sigles);

    string cercaSiglesAeroport(string correu);

    vector<string> cercaTotesSiglesAeroport();

    vector<string> obteSiglesAeroports();

    PassarelaAeroport cercaAeroportPerID(string CorreuElectronic);

    std::vector<PassarelaAeroport> cercaAeroportfull();

};
#endif
