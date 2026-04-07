#ifndef DTOESTATPETICIONS_HPP
#define DTOESTATPETICIONS_HPP
#pragma once
#include <string>
using namespace std;

class DTOEstatPeticions
{
public:
    DTOEstatPeticions();
	DTOEstatPeticions(string idVol, string origen, string desti, string sortidaPrevista, string arribadaPrevista, float preu, string modelAvio, string correuAeroport, string dataSolicitud, string estat, string motiuResolucio, string dataResolucio);
    ~DTOEstatPeticions();

    DTOEstatPeticions& operator=(const DTOEstatPeticions& obj);

    string obteIdVol() const;
    string obteOrigen() const;
    string obteDesti() const;
    string obteSortidaPrevista() const;
    string obteArribadaPrevista() const;
    float obtePreu() const;
    string obteModelAvio() const;
	string obteCorreuAeroport() const;
    string obteDataSolicitud() const;
	string obteEstat() const;
	string obteMotiuResolucio() const;
	string obteDataResolucio() const;


    void setIdVol(const string& nom);
    void setOrigen(const string& correuElectronic);
    void setDesti(const string& nom);
    void setSortidaPrevista(const string& correuElectronic);
    void setArribadaPrevista(const string& nom);
    void setPreu(const float& correuElectronic);
    void setModelAvio(const string& nom);
	void setCorreuAeroport(const string& correuElectronic);
    void setDataSolicitud(const string& dataSolicitud);
	void setEstat(const string& estat);
	void setMotiuResolucio(const string& motiuResolucio);
	void setDataResolucio(const string& dataResolucio);


private:
    string _idVol;
    string _origen;
    string _desti;
    string _sortidaPrevista;
    string _arribadaPrevista;
    float _preu;
    string _modelAvio;
    string _correuAeroport;
    string _dataSolicitud;
	string _estat;
	string _motiuResolucio;
	string _dataResolucio;

};
#endif
