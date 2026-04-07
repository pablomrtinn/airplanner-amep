#ifndef DTOAEROPORT_HPP
#define DTOAEROPORT_HPP
#pragma once
#include <string>
using namespace std;

class DTOAeroport
{
public:
    DTOAeroport();
    DTOAeroport(string nomA, string correuA, string _Pais, string _Sigles);
    ~DTOAeroport();


    string obteNom() const;
    string obteCorreuElectronic() const;
    string obtePais() const;
    string obteSigles() const;


    void setNom(const string& nom);
    void setCorreuElectronic(const string& correuElectronic);
    void setPais(const string& pais);
    void setSigles(const string& sigles);


private:
    string _nom;
    string _correuElectronic;
    string _Pais; 
    string _Sigles;
};
#endif

