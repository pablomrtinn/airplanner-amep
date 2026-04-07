#ifndef PASSARELAVOL_HPP
#define PASSARELAVOL_HPP
#pragma once
#include "ConnexioBD.h"
#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;

class PassarelaVol {
private:

    static PassarelaVol* ins;

    string _idVol;
    string _origen;
    string _desti;
    string _sortidaPrevista;
    string _arribadaPrevista;
    string _sortidaActualitzada;
    string _arribadaActualitzada;
    float _preu;
    string _modelAvio;
    string _correuAerolinia;

public:
    PassarelaVol();

    PassarelaVol(string idVol, string origen, string desti, string datahoraSortida, string datahoraArribada, string sortidaActualitzada, string arribadaActualitzada, float preu, string modelAvio, string _correuAerolinia);

    //PassarelaVol(string idVol, string origen, string desti, string datahoraSortida, string datahoraArribada, float preu, string modelAvio, string correuAerolinia);

    ~PassarelaVol();

    string obteIdVol() const;
    string obteOrigen() const;
    string obteDesti() const;
    string obteSortidaPrevista() const;
    string obteArribadaPrevista() const;
    string obteSortidaActualitzada() const;
    string obteArribadaActualitzada() const;
    float obtePreu() const;
    string obteModelAvio() const;
    string obteCorreuAerolinia() const;

    void setIdVol(string id);
    void setOrigen(string origen);
    void setDesti(string desti);
    void setSortidaPrevista(string datahora);
    void setArribadaPrevista(string datahora);
    void setSortidaActualitzada(string datahora);
    void setArribadaActualitzada(string datahora);
    void setPreu(float preu);
    void setModelAvio(string model);
    void setCorreuAerolinia(string correu);
    
    void insereix();
    void modifica();
    void esborra();

};
#endif

