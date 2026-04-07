#ifndef TXCREARPETICIOVOL_HPP
#define TXCREARPETICIOVOL_HPP
#pragma once
#include "PassarelaPeticions.h"
#include "CercadoraAeroport.h"
#include "PassarelaAeroport.h"
#include "CercadoraVol.h"
#include "PassarelaVol.h"
using namespace std;
class TxCrearPeticioVol
{
private:

    string _idVol;
    string _origen;
    string _desti;
    string _sortidaPrevista;
    string _arribadaPrevista;
    float _preu;
    string _modelAvio;
    string _correuAerolinia;
    string _correuAeroport;
	string _dataSolicitud;
	string _estat;
	string _motiuResolucio;
	string _dataResolucio;

public:

	TxCrearPeticioVol(string idVol, string origen, string desti, string datahoraSortida, string datahoraArribada, float preu, string modelAvio, string correuAerolinia, string correuAeroport, string dataSolicitud, string estat, string motiuResolucio, string dataResolucio);
    void executa();
};
#endif