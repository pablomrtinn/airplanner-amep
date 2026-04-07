#ifndef TXESBORRAUSUARI_HPP
#define TXESBORRAUSUARI_HPP
#pragma once
#include "AirPlannerSingleton.h"
#include "PassarelaUsuari.h"
#include <string>
using namespace std;


class TxEsborraUsuari {
private:
    string _contraU; 
    string _correuElectronic; 

public:
    TxEsborraUsuari();
    TxEsborraUsuari(string contraU, string correuElectronic);
    void executar();
    ~TxEsborraUsuari();
};

#endif
