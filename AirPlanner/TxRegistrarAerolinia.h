#pragma once
#include "PassarelaUsuari.h"
#include "PassarelaAerolinia.h"
#include "DTOAerolinia.h"

class TxRegistrarAerolinia
{
private:
	std::string _correu;
	std::string _contrasenya;
	std::string _nom;

public:
	TxRegistrarAerolinia(std::string correu, std::string contrasenya, std::string nom);
	
	void executar();
};

