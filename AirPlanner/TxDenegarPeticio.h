#ifndef TXDENEGARPETICIO_HPP  
#define TXDENEGARPETICIO_HPP  
#pragma once  
#include "PassarelaPeticions.h"  
#include "CercadoraPeticions.h" 

using namespace std;
#include <vector>  
#include <iostream>  
#include <string>  
#include <stdexcept>    
#include <ctime>

class TxDenegarPeticio {
private:

	string _idPeticio;
	string _motiuResolucio;
	string _dataSolicitud;

public:
	TxDenegarPeticio(string idPeticio, string motiuResolucio, string dataSolicitud);

	~TxDenegarPeticio();

	void executar();

};

#endif