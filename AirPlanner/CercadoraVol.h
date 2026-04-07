#ifndef CERCADORAVOL_HPP
#define CERCADORAVOL_HPP
#pragma once
#include "PassarelaVol.h"
#include <vector>
#include <stdexcept>
using namespace std;

class CercadoraVol {
private:

public:

    CercadoraVol();

    static CercadoraVol& getInstance();

    ~CercadoraVol();

    vector<PassarelaVol> cercaVolsAerolinia(String^ correuElectronicAerolinia);

    vector<PassarelaVol> cercaVolsClient(string origen, string desti, string aerolinia, string dataSortida, float preu);
  
    vector<PassarelaVol> cercaVolsAerolinia(string correuElectronicAerolinia);

    vector<PassarelaVol> cercaVolsAeroport(string siglesAeroport);
  
    PassarelaVol cercaVolPerIdDatesSenceres(string _idVol);

    PassarelaVol cercaVolPerId(string idVol);
};
#endif