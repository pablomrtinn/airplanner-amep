#ifndef CTRLMODIFICACLIENT_HPP
#define CTRLMODIFICACLIENT_HPP
#pragma once
#include "DTOClient.h"
#include "PassarelaClient.h"
#include "PassarelaUsuari.h"
#include "AirPlannerSingleton.h"
#include "CercadoraClient.h"
using namespace std;
#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include <ctime>            
#include <cctype>            
using namespace msclr::interop;


class CtrlModificaClient {
private:
    PassarelaClient _client;
    PassarelaUsuari _usuari;

public:
    CtrlModificaClient();
    ~CtrlModificaClient();
    //DTOClient consultaClient();
    void modificaClient(string nomC, string contraC, string neixC, string modalitatC);
};

#endif
