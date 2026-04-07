#ifndef TXESBORRAAEROLINIA
#define TXESBORRAAEROLINIA
#pragma once

#include "AirPlannerSingleton.h"
#include "CercadoraAerolinia.h"
#include "CercadoraUsuari.h"
#include <msclr/marshal_cppstd.h>
#include <string>

class TxEsborraAerolinia 
{
	private:
		std::string _ContraU;
		std::string _Correu;

	public:

		TxEsborraAerolinia();
		TxEsborraAerolinia(std::string contraU, std::string correu_electronicAe);
		void executa();
		~TxEsborraAerolinia();

};

#endif 