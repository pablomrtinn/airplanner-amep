#ifndef DTOVOL_HPP
#define DTOVOL_HPP
#pragma once
#include <string>
#include "PassarelaVol.h"
using namespace std;

class DTOVol
{
public:
    DTOVol();
    DTOVol(string idVol, string origen, string desti, string sortidaP, string arribadaP, string sortidaA, string arribadaA, float preu, string modelAvio, string correuAerolinia);
    ~DTOVol();

    DTOVol& operator=(const DTOVol& obj);

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


	void setIdVol(const string& idVol);
	void setOrigen(const string& origen);
	void setDesti(const string& desti);
	void setSortidaPrevista(const string& sortidaP);
	void setArribadaPrevista(const string& arribadaP);
	void setSortidaActualitzada(const string& sortidaA);
	void setArribadaActualitzada(const string& arribadaA);
	void setPreu(const float& preu);
	void setModelAvio(const string& modelAvio);
	void setCorreuAerolinia(const string& correuAerolinia);

private:
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
};
#endif

