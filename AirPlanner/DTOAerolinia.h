#ifndef DTOAEROLINIA_HPP
#define DTOAEROLINIA_HPP
#pragma once
#include <string>
using namespace std;

class DTOAerolinia
{
public:
    DTOAerolinia();
    DTOAerolinia(string nomA, string correuA);
    ~DTOAerolinia();

    DTOAerolinia& operator=(const DTOAerolinia& obj);

    string obteNom() const;
    string obteCorreuElectronic() const;

    void setNom(const string& nom);
    void setCorreuElectronic(const string& correuElectronic);

private:
    string _nom;
    string _correuElectronic;
};
#endif
