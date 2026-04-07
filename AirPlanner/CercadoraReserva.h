#ifndef CERCADORARESERVA_HPP
#define CERCADORARESERVA_HPP
#pragma once
#include "PassarelaReserva.h"
#include <vector>
#include <stdexcept>
#include <msclr/marshal_cppstd.h>
class CercadoraReserva
{
private:


public:

    //static CercadoraAeroportPerSigles& getInstance();
    CercadoraReserva();

    ~CercadoraReserva();

    vector<PassarelaReserva> cercaReservaPerVol(string idVol);

	vector<PassarelaReserva> cercaReservaPerClient(string correuClient);

    PassarelaReserva cercaReserva(string correuClient, string idVol, int seientFila, char seientColumna);

};
#endif