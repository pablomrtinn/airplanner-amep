#include "pch.h"
#include "DTOAeroport.h"

DTOAeroport::DTOAeroport()
{

}
DTOAeroport::DTOAeroport(string nomA, string correuA, string Pais, string Sigles) 
{
    _nom = nomA;
    _correuElectronic = correuA;
    _Pais = Pais;
    _Sigles = Sigles;
}

DTOAeroport::~DTOAeroport() 
{

}


string DTOAeroport::obteNom() const 
{
    return _nom;
}
string DTOAeroport::obteCorreuElectronic() const 
{
    return _correuElectronic;
}
string DTOAeroport::obtePais() const 
{
    return _Pais;
}
string DTOAeroport::obteSigles() const 
{
    return _Sigles;
}


void DTOAeroport::setNom(const string& nom) 
{
    _nom = nom;
}
void DTOAeroport::setCorreuElectronic(const string& correuElectronic) 
{
    _correuElectronic = correuElectronic;
}
void DTOAeroport::setPais(const string& pais) 
{
    _Pais = pais;
}
void DTOAeroport::setSigles(const string& sigles) 
{
    _Sigles = sigles;
}