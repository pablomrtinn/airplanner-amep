#pragma once
#include "PassarelaReserva.h"
#include "AirPlannerSingleton.h"
#include "CercadoraReserva.h"
#include <iostream>
using namespace std;

class CtrlModificaReservaVol
{
private:

public:

	CtrlModificaReservaVol();
	~CtrlModificaReservaVol();
	void modificarReserva(string correu, int seientFilaAnt, char seientColAnt, int seientFila, char seientColumna, string idVol, string tipusEquipatge, string nom, string genere, string dataNeix, float preuReserva);
};
