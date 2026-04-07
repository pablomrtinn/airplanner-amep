#ifndef TXCONSULTARESTATPETICIONS_HPP  
#define TXCONSULTARESTATPETICIONS_HPP  
#pragma once  
#include "PassarelaPeticions.h"  
#include "CercadoraPeticions.h"  
#include "AirPlannerSingleton.h"  
#include "DTOEstatPeticions.h"  
#include "PassarelaUsuari.h"  
using namespace std;
#include <vector>  
#include <iostream>  
#include <string>  
#include <stdexcept>    

class TxConsultarEstatPeticions {
private:
	vector<DTOEstatPeticions> _peticions;
	vector<PassarelaPeticions> _passarelaPeticions;

public:
	TxConsultarEstatPeticions();

	~TxConsultarEstatPeticions();

	void executar();

	vector<PassarelaPeticions> obtePassarelaPeticions();

	vector<DTOEstatPeticions> obtePeticions();
};

#endif