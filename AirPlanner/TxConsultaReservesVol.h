#ifndef TXCONSULTARESERVESVOL_HPP
#define  TXCONSULTARESERVESVOL_HPP
#pragma once
#include "PassarelaReserva.h"
#include "CercadoraReserva.h"
#include "DTOReservesClient.h"
#include "AirPlannerSingleton.h"
#include "CercadoraVol.h"
#include <vector>
using namespace std;

class TxConsultaReservesVol
{
	private:

		vector<DTOReservesClient> reservesVol;
		string _idVol;

	public:

		TxConsultaReservesVol(string idVol);
		void executa();
		vector<DTOReservesClient> obteReserves();
};
#endif