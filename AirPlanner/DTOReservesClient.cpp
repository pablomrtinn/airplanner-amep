#include "pch.h"
#include "DTOReservesClient.h"


DTOReservesClient::DTOReservesClient() {

	_seientFila = 0;
	_seientColumna = ' ';
	_idVol = "";
	_correuClient = "";
	_tipusEquipatge = "";
	_nomPassatger = "";
	_siglesOrigen = "";
	_siglesDesti = "";
	_dataVol = "";
	_preuReserva = 0.0f;	
	
}

DTOReservesClient::DTOReservesClient(int seientFila, char seientColumna, string idVol, string correuClient, string tipusEquipatge, string nomPassatger, string siglesOrigen, string siglesDesti, string dataVol, float preuReserva) {

	_seientFila = seientFila;
	_seientColumna = seientColumna;
	_idVol = idVol;
	_correuClient = correuClient;
	_tipusEquipatge = tipusEquipatge;
	_nomPassatger = nomPassatger;
	_siglesOrigen = siglesOrigen;
	_siglesDesti = siglesDesti;
	_dataVol = dataVol;
	_preuReserva = preuReserva;

}

int DTOReservesClient::obteSeientFila() const {
	return _seientFila;
}
char DTOReservesClient::obteSeientColumna() const {
	return _seientColumna;
}
string DTOReservesClient::obteIdVol() const {
	return _idVol;
}
string DTOReservesClient::obteCorreuClient() const {
	return _correuClient;
}
string DTOReservesClient::obteTipusEquipatge() const {
	return _tipusEquipatge;
}
string DTOReservesClient::obteNomPassatger() const {
	return _nomPassatger;
}
string DTOReservesClient::obteSiglesOrigen() const {
	return _siglesOrigen;
}
string DTOReservesClient::obteSiglesDesti() const {
	return _siglesDesti;
}
string DTOReservesClient::obteDataVol() const {
	return _dataVol;
}
float DTOReservesClient::obtePreuReserva() const {
	return _preuReserva;
}