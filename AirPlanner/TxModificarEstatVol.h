#pragma once
#include "PassarelaVol.h"
#include "CercadoraVol.h"
class TxModificarEstatVol
{
private:
	std::string _dataHoraSortida;
	std::string _dataHoraArribada;
	std::string _idVol;
public:
	TxModificarEstatVol(std::string dataHoraSortida, std::string dataHoraArribada, std::string idVol);
	~TxModificarEstatVol();
	void executar();
};

