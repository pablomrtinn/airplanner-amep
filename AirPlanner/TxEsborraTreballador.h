#pragma once
#include "AirPlannerSingleton.h"
#include "CercadoraUsuari.h"
#include "CercadoraTreballador.h"

class TxEsborraTreballador
{
private:
    string _correuElectronic;

public:
	TxEsborraTreballador(string correuE);
    void executar();
};

