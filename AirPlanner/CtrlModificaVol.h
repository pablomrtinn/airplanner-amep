#pragma once
#include "CercadoraVol.h"
#include "PassarelaVol.h"

class CtrlModificaVol
{
private:
	PassarelaVol _passarelaVol;

public:
	CtrlModificaVol();
	~CtrlModificaVol();

	void modificaVol(string idVol, string origen, string desti, string sortidaP, string arribadaP, string sortidaA, string arribadaA, double preu, string modelAvio);
};

