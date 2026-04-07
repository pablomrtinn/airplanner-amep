#ifndef DTOPETICIONS_HPP
#define DTOPETICIONS_HPP
#pragma once
#include <string>
using namespace std;

class DTOPeticions
{
public:
    DTOPeticions();
    DTOPeticions(string idVol, string origen, string desti, string sortidaPrevista, string arribadaPrevista, float preu, string modelAvio, string correuAerolinia, string dataSolicitud);
    ~DTOPeticions();

    DTOPeticions& operator=(const DTOPeticions& obj);

    string obteIdVol() const;
    string obteOrigen() const;
    string obteDesti() const;
    string obteSortidaPrevista() const;
    string obteArribadaPrevista() const;
    float obtePreu() const;
    string obteModelAvio() const;
    string obteCorreuAerolinia() const;
    string obteDataSolicitud() const;

    void setIdVol(const string& nom);
    void setOrigen(const string& correuElectronic);
    void setDesti(const string& nom);
    void setSortidaPrevista(const string& correuElectronic);
    void setArribadaPrevista(const string& nom);
    void setPreu(const float& correuElectronic);
    void setModelAvio(const string& nom);
    void setCorreuAerolinia(const string& correuElectronic);
	void setDataSolicitud(const string& dataSolicitud);

private:
    string _idVol;
    string _origen;
    string _desti;
    string _sortidaPrevista;
    string _arribadaPrevista;
    float _preu;
    string _modelAvio;
	string _correuAerolinia;
	string _dataSolicitud;

};
#endif
