#ifndef PASSARELAAEROPORT_HPP
#define PASSARELAAEROPORT_HPP
#pragma once
#include "ConnexioBD.h"
#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;
class PassarelaAeroport
{
private:

    std::string _correuElectronic;
    std::string _pais;
    std::string _sigles;

public:
    PassarelaAeroport();
    PassarelaAeroport(std::string correu);
    PassarelaAeroport(std::string correu, std::string pais, std::string sigles);

    std::string obteCorreu();
    std::string obtePais();
    std::string obteSigles();

    void posaCorreu(std::string correu);
    void posaPais(std::string pais);
    void posaSigles(std::string sigles);

    void insereix();
    void modifica();
    void esborra();
};

#endif