#ifndef CERCADORATREBALLADOR_HPP
#define CERCADORATREBALLADOR_HPP
#pragma once
#include "PassarelaTreballador.h"
#include <vector>
#include <stdexcept>
#include <msclr/marshal_cppstd.h>
#include "PassarelaUsuari.h"

class CercadoraTreballador
{
private:

public:

    //static CercadoraAeroportPerSigles& getInstance();
    CercadoraTreballador();

    ~CercadoraTreballador();

    std::vector<PassarelaTreballador> cercaTreballadorPerAeroport(string CorreuAeroport);

	  PassarelaTreballador cercaTreballador(string correuElectronic);
};
#endif