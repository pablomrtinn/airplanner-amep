#pragma once
#include "pch.h"
#include "CercadoraVol.h"
#include "CercadoraAeroport.h"
#include "CercadoraTreballador.h"
#include "AirPlannerSingleton.h"
#include "PassarelaUsuari.h"
#include "PassarelaTreballador.h"
#include "DTOVol.h"
using namespace std;

class TxConsultaVolsAeroport
{
private:
	string _correuAeroport;
	vector<DTOVol> _volsDTO;

public:

	TxConsultaVolsAeroport();

	~TxConsultaVolsAeroport();

	void executar();

	vector<DTOVol> obteVolsDTO();
};