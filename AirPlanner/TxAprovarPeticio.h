#ifndef TXAPROVARPETICIO_HPP  
#define TXAPROVARPETICIO_HPP  
#pragma once  
#include "PassarelaPeticions.h"  
#include "CercadoraPeticions.h" 
#include "PassarelaVol.h"

using namespace std;
#include <vector>  
#include <iostream>  
#include <string>  
#include <stdexcept>    
#include <ctime>

class TxAprovarPeticio {
private:

	string _idPeticio;
	string _motiuResolucio;
	string _dataSolicitud;

public:
	TxAprovarPeticio(string idPeticio, string motiuResolucio, string dataSolicitud);

	~TxAprovarPeticio();

	void executar();

};

#endif