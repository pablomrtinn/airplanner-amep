#pragma once
#ifndef TXOBLITCONTRASENYA_HPP
#define TXOBLITCONTRASENYA_HPP
#pragma once
#include <string>
#include "CercadoraUsuari.h"
#include "PassarelaUsuari.h"
#include "AirPlannerSingleton.h"
#include <stdexcept>
#include <iostream>
using namespace std;

class TxOblitContrasenya {
private:
    string _correu;
    string _contrasenya;
public:
    //Constructors
    TxOblitContrasenya(string correuElectronic, string contrasenya);

    //Destructors
    ~TxOblitContrasenya();

    //Modificadors
    void executar();
};

#endif
