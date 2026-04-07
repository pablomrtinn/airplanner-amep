#ifndef TXOBTEFILTRESBUSCAVOLS_HPP
#define TXOBTEFILTRESBUSCAVOLS_HPP
#pragma once
using namespace std;
#include <iostream>
#include <string>
#include <stdexcept> 
#include <vector>
#include "CercadoraAeroport.h"
#include "CercadoraUsuari.h"


class TxObteFiltresBuscaVols {
private:
	vector<string> _totesSiglesAeroports;
	vector<string> _totsNomsAerolinies;
public:
    TxObteFiltresBuscaVols();

    ~TxObteFiltresBuscaVols();

    void executar();

    vector<string> obteTotesSiglesAeroports();
    vector<string> obteTotsNomsAerolinies();
};

#endif
