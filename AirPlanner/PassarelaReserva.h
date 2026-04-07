#ifndef PASSARELARESERVA_HPP
#define PASSARELARESERVA_HPP
#pragma once
#include "ConnexioBD.h"
#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;

class PassarelaReserva
{
private:

    //static PassarelaPeticions* ins; que no es necessari no  s un singleton

    int _seientFila;
    char _seientColumna;
    string _idVol;
    string _correuClient;
    string _tipusEquipatge;
    string _nomPassatger;
    string _genere;
    string _dataNaixement;
    float _preuReserva;
    int _seientFilaAnt;
    char _seientColumnaAnt;


public:
    PassarelaReserva();

    PassarelaReserva(int seientFila, char seientColumna, string idVol, string correuClient, string tipusEquipatge, string nomPassatger, string genere, string dataNaixement, float preuReserva);

    ~PassarelaReserva();

    int obteSeientFila() const;
    char obteSeientColumna() const;
    string obteIdVol() const;
    string obteCorreuClient() const;
    string obteTipusEquipatge() const;
    string obteNomPassatger() const;
    string obteGenere() const;
    string obteDataNaixement() const;
    float obtePreuReserva() const;
    int obteSeientFilaAnt() const;
    char obteSeientColumnaAnt() const;

    void setSeientFila(int seientFila);
    void setSeientColumna(char seientColumna);
    void setIdVol(string idVol);
    void setCorreuElectronic(string correuClient);
    void setTipusEquipatge(string tipusEquipatge);
    void setNomPassatger(string nomPassatger);
    void setGenere(string genere);
    void setDataNaixement(string dataNaixement);
    void setPreuReserva(float preuReserva);
    void setSeientFilaAnt(int seientFilaAnt);
    void setSeientColumnaAnt(char seientColumnaAnt);

    void insereix();
    void modifica();
    void esborra();

};
#endif