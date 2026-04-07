#pragma once
#ifndef CTRLMODIFICAAEROLINIAT_HPP
#define CTRLMODIFICAAEROLINIA_HPP
#include <msclr/marshal_cppstd.h>
#include "CercadoraClient.h"
#include "CercadoraUsuari.h"
#include "AirPlannerSingleton.h"
#include "CercadoraAerolinia.h"
#include <iostream>
#include <string>
using namespace std;

class CtrlModificaAerolinia
{
private:
	string _nouCorreuElectronic;
	string _correuElectronic;
	string _contrasenya;
	string _nom;
	string _contraAdmin;
public:
	CtrlModificaAerolinia();
	~CtrlModificaAerolinia();
	void ModificaAerolinea(string nouCorreuElectronic, string correuElectronic,string contrasenya, string nom, string contraAdmin);
	void executar();

};
#endif


