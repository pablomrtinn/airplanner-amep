#ifndef TXBUSCARVOLS_HPP
#define TXBUSCARVOLS_HPP
#pragma once
#include "PassarelaVol.h"
#include "DTOVol.h"
#include <vector>
#include "CercadoraVol.h"
#include "CercadoraUsuari.h"
using namespace std;


class TxBuscarVols
{
private:
	vector<PassarelaVol> _vols;
	vector<DTOVol> _volsDTO;
	vector<string> _nomsAeroliniesVols;

	string _origen;
	string _desti;
	string _aerolinia;
	string _dataSortida;
	float _preu;

public:
	//Constructors
	TxBuscarVols(string origen, string desti, string aerolinia, string dataSortida, float preu);

	//Destructors
	~TxBuscarVols();

	//Modificadors
	void executar();

	vector<DTOVol> obteVolsDTO() const;
	vector<string> obteNomsAeroliniesVols() const;
};
#endif