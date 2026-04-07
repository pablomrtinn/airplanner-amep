#pragma once
#include "DTOInfoVol.h"
#include "CercadoraVol.h"
#include "CercadoraUsuari.h"
class TxConsultarInfoVol
{
private:
	std::string _idVol;
	DTOInfoVol _infoVol;
public:
	TxConsultarInfoVol(std::string idVol);
	~TxConsultarInfoVol();
	void executar();
	DTOInfoVol obteInfoVol();
};

