#pragma once
#include "CercadoraReserva.h"

class TxCancelarReserva
{
private:
	string _idVol;
	string _correuClient;
	int _seientFila;
	string _seientColumna;

public:
	TxCancelarReserva(string idVol, string correuClient, int seientFila, string seientColumna);
	void executar();

};