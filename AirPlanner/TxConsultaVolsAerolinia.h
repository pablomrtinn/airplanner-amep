#pragma once
#include "PassarelaVol.h"
#include "DTOVol.h"
#include <vector>
#include "CercadoraVol.h"
using namespace std;


class TxConsultaVolsAerolinia
{
	private:
		vector<PassarelaVol> _vols;
		vector<DTOVol> _volsDTO;
		string _correuAerolinia;

	public:
        //Constructors
        TxConsultaVolsAerolinia(string correu);

        //Destructors
        ~TxConsultaVolsAerolinia();

        //Modificadors
        void executar();

		vector<DTOVol> obteVolsDTO() const;

};

