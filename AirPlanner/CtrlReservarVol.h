#pragma once
#include <vector>
#include <iostream>
using namespace std;
using namespace System::Net;
using namespace System::Net::Mail;
using namespace System::Threading;

#include "PassarelaReserva.h"
#include "CercadoraReserva.h"
#include "PassarelaVol.h"
#include "CercadoraVol.h"
#include "PassarelaModelsAvio.h"
#include "CercadoraModelsAvio.h"
#include "DTOReservesClient.h"	
#include "CercadoraVol.h"
#include "CercadoraUsuari.h"
#include "DTOVol.h"
#include "DTOAerolinia.h"

class CtrlReservarVol
{
private:

	vector<vector<bool>> matriu;
	vector<DTOReservesClient> bitllets;

public:
	CtrlReservarVol();
	~CtrlReservarVol();
	int ocupacioVol(string idVol);
	void reservarVol(int seientFila, char seientColumna, string idVol, string correuClient, string tipusEquipatge, string nomPassatger, string genere, string dataNaixement, float preuReserva);
	vector<vector<bool>>  matriuSeients(string idVol);

	vector<DTOReservesClient> obteBitllets() const;
	void enviarBitllets();
};

