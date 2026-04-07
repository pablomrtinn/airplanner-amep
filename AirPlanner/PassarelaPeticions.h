#ifndef PASSARELAPETICIONS_HPP
#define PASSARELAPETICIONS_HPP
#pragma once
#include "ConnexioBD.h"
#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;

class PassarelaPeticions
{
private:

    static PassarelaPeticions* ins;

    string _idVol;
    string _origen;
    string _desti;
    string _sortidaPrevista;
    string _arribadaPrevista;
    float _preu;
    string _modelAvio;
    string _correuAerolinia;
	string _correuAeroport;
	string _dataSolicitud;
	string _estat;
    string _motiuResolucio;
	string _dataResolucio;


public:
    PassarelaPeticions();

    PassarelaPeticions(string idVol, string origen, string desti, string datahoraSortida, string datahoraArribada, float preu, string modelAvio, string correuAerolinia, string correuAeroport, string dataSolicitud, string estat, string motiuResolucio, string dataResolucio);

    ~PassarelaPeticions();

    string obteIdVol() const;
    string obteOrigen() const;
    string obteDesti() const;
    string obteSortidaPrevista() const;
    string obteArribadaPrevista() const;
    float obtePreu() const;
    string obteModelAvio() const;
    string obteCorreuAerolinia() const;
    string obteCorreuAeroport() const;
    string obteDataSolicitud() const;
    string obteEstat() const;
    string obteMotiuResolucio() const;
    string obteDataResolucio() const;

    void setIdVol(string id);
    void setOrigen(string origen);
    void setDesti(string desti);
    void setSortidaPrevista(string datahora);
    void setArribadaPrevista(string datahora);
    void setPreu(float preu);
    void setModelAvio(string model);
    void setCorreuAerolinia(string correu);
    void setCorreuAeroport(string correu);
    void setDataSolicitud(string data);
    void setEstat(string estat);
    void setMotiuResolucio(string motiu);
    void setDataResolucio(string data);

    void insereix();
    void modifica();
    void esborra();

};
#endif