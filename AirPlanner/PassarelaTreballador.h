#ifndef PASSARELATREBALLADOR_HPP
#define PASSARELATREBALLADOR_HPP
#pragma once
#include "ConnexioBD.h"
#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;

class PassarelaTreballador
{
private:
    string _correuElectronic;
    string _correuAeroport;
    string _id;

public:
    PassarelaTreballador();
    PassarelaTreballador(string correuElectronicT, string correuAeroportT, string idT);

    ~PassarelaTreballador();

    string obteCorreuElectronic() const;
    string obteCorreuAeroport() const;
    string obteId() const;


    PassarelaTreballador& operator=(const PassarelaTreballador& obj);

    void setCorreuElectronic(string correuElectronic);
    void setCorreuAeroport(string correuAeroport);
    void setId(string id);

    void insereix();
    void modifica();
    void esborra();
};
#endif