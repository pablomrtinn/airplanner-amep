#ifndef TXCONSULTARPETICIONS_HPP  
#define TXCONSULTARPETICIONS_HPP  
#pragma once  
#include "PassarelaPeticions.h"  
#include "CercadoraPeticions.h"  
#include "AirPlannerSingleton.h"  
#include "DTOPeticions.h"  
#include "PassarelaUsuari.h"  
using namespace std;  
#include <vector>  
#include <iostream>  
#include <string>  
#include <stdexcept>    

class TxConsultarPeticions {  
private:  
   vector<DTOPeticions> _peticions;  
   vector<PassarelaPeticions> _passarelaPeticions;  

public:  
   TxConsultarPeticions();  

   ~TxConsultarPeticions();  

   void executar();  

   vector<PassarelaPeticions> obtePassarelaPeticions();  

   vector<DTOPeticions> obtePeticions();  
};  

#endif