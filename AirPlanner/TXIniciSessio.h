#ifndef TXINICISESSIO_HPP
#define TXINICISESSIO_HPP
#pragma once
#include <string>
#include "CercadoraUsuari.h"
#include "PassarelaUsuari.h"
#include "AirPlannerSingleton.h"
#include <stdexcept>
#include <iostream>
using namespace std;

class TxIniciSessio {
private:
    std::string _correuElectronicU;
    std::string _contrasenyaU;

public:
    //Constructors
    TxIniciSessio(std::string ceU, std::string cU);

    //Destructors
    ~TxIniciSessio();

    //Modificadors
    void executar();
};

#endif