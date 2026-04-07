#ifndef TXCONSULTAVOLSRESERVATSCLIENT_HPP
#define  TXCONSULTAVOLSRESERVATSCLIENT_HPP
#pragma once
#include "PassarelaReserva.h"
#include "CercadoraReserva.h"
#include "DTOReservesClient.h"
#include "AirPlannerSingleton.h"
#include "CercadoraVol.h"
#include <vector>
using namespace std;

class TxConsultaVolsReservatsClient
{
private:

	vector<DTOReservesClient> reservesClient;

public:

	TxConsultaVolsReservatsClient();
    void executa();
    vector<DTOReservesClient> obteReserves();
};
#endif

