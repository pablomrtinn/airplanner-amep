#ifndef PASSARELAUSUARI_HPP
#define PASSARELAUSUARI_HPP
#pragma once
#include "ConnexioBD.h"
#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;

class PassarelaUsuari {
private:

    string _nom;
    string _contrasenya;
    string _correuElectronic;
    string _tipus;


public:
    PassarelaUsuari();

    PassarelaUsuari(string nomU, string correuElectronicU, string contrasenyaU, string tipusU);

    ~PassarelaUsuari();

    string obteNom() const;
    string obteContrasenya() const;
    string obteCorreuElectronic() const;
    string obtetipus() const;

    PassarelaUsuari& operator=(const PassarelaUsuari& obj);

    void setNom(string nom);
    void setContrasenya(string contrasenya);
    void setCorreuElectronic(string correuElectornic);
    void setTipus(string tipus);

    void insereix();
    void modifica();

    //Si quieres editar el campo del correo necesitas tener el correo antiguo para detectar y el nuevo para substituir
    void modifica(string NouCorreuElectronicU);
    void esborra();

};
#endif