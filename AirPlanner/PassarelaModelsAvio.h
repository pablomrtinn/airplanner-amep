#ifndef PASSARELAMODELSAVIO_HPP
#define PASSARELAMODELSAVIO_HPP
#pragma once
#include "ConnexioBD.h"
#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;

class PassarelaModelsAvio
{
private:

    string _model;
    int _files;
    int _columnes;


public:
    PassarelaModelsAvio();

    PassarelaModelsAvio(string model, int files, int columnes);

    ~PassarelaModelsAvio();

    string obteModel() const;
	int obteFiles() const;
	int obteColumnes() const;

    void setModel(string model);
	void setFiles(int files);
	void setColumnes(int columnes);

    void insereix();
    void modifica();
    void esborra();

};
#endif