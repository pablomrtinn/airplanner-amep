#pragma once
using namespace std;
#include "PassarelaAeroport.h"
#include "PassarelaUsuari.h"

class TxRegistrarAeroport
{
private:

public:
	std::string _correu;
	std::string _nom;
	std::string _contrasenya;
	std::string _pais;
	std::string _sigles;
public:
	TxRegistrarAeroport(std::string correu, std::string nom, std::string contrasenya, std::string pais, std::string sigles);

	void executa();
};

