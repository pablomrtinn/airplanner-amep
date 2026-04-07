#ifndef TXESBORRAAEROPORT
#define TXESBORRAAEROPORT
#pragma once

#include "AirPlannerSingleton.h"
#include "CercadoraAeroport.h"
#include "CercadoraUsuari.h"
#include <msclr/marshal_cppstd.h>
#include <string>

class TxEsborraAeroport
{
private:
    std::string _contraU;
    std::string _SiglasAe;

public:
    TxEsborraAeroport();
    TxEsborraAeroport(std::string contraU, std::string siglasAe);
    void executa();
    ~TxEsborraAeroport();
};

#endif // TXESBORRAAEROPORT


