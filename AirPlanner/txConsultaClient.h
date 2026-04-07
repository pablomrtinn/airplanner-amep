#ifndef TXCONSULTACLIENT_HPP
#define TXCONSULTACLIENT_HPP
#pragma once
#include "PassarelaUsuari.h"
#include "PassarelaClient.h"
#include "CercadoraClient.h"
#include "CercadoraUsuari.h"
#include "AirPlannerSingleton.h"
#include "PassarelaUsuari.h"
#include "DTOClient.h"
using namespace std;
#include <iostream>
#include <string>
#include <stdexcept>  

class TxConsultaClient {
private:
    DTOClient _client;
    PassarelaUsuari _passarelaUsuari;
    PassarelaClient _passarelaClient;
public:
    TxConsultaClient();

    ~TxConsultaClient();

    void executar();

    DTOClient obteClient();
    PassarelaUsuari passarelaUsuari();
    PassarelaClient passarelaClient();
};

#endif