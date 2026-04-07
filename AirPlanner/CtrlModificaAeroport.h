#pragma once
#ifndef CTRLMODIFICAAEROPORT_HPP
#define CTRLMODIFICAAEROPORT_HPP
#include <msclr/marshal_cppstd.h>
#include "CercadoraClient.h"
#include "CercadoraUsuari.h"
#include "AirPlannerSingleton.h"
#include "CercadoraAeroport.h"
#include <iostream>
#include <string>
class ModificaAeroport
{
public:
	ModificaAeroport();
	~ModificaAeroport();
	void Modifica_Aeroport(std::string CorreuElectronicNOU, std::string CorreuElectronicVELL, std::string Contrasenya, std::string Nom,std::string Pais, std::string Siglas, std::string ContraAdmin);
	void execute();
private:
	std::string _ContrasenyaADMIN;

	std::string _Nom;
	std::string _Contrasenya;
	std::string _CorreuElectronicVELL;
	std::string _CorreuElectronicNOU;
	std::string _Pais;
	std::string _Siglas;

};





#endif