#include "pch.h"
#include "TxCancelarReserva.h"

TxCancelarReserva::TxCancelarReserva(string idVol, string correuClient, int seientFila, string seientColumna) {
	_idVol = idVol;
	_correuClient = correuClient;
	_seientFila = seientFila;
	_seientColumna = seientColumna;
}

void TxCancelarReserva::executar() {
	CercadoraReserva cercadora;
	PassarelaReserva reserva = cercadora.cercaReserva(_correuClient, _idVol, _seientFila, _seientColumna[0]);

	try {
		reserva.esborra();
	}
	catch (Exception^ ex) {
		throw ex;
	}
}