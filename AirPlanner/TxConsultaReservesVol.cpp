#include "pch.h"
#include "TxConsultaReservesVol.h"

TxConsultaReservesVol::TxConsultaReservesVol(string idVol) {

	_idVol = idVol;
}

void TxConsultaReservesVol::executa() {

	// haig d'obtenir el id	VOLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL

	vector<PassarelaReserva> reserves;
	CercadoraReserva cercaReserves;
	reserves = cercaReserves.cercaReservaPerVol(_idVol);
	if (reserves.size() == 0) {
		// Si no hi ha reserves, llença una excepció
		throw gcnew Exception("No hi ha reserves per aquest vol.\nDisculpa les molèsties.");
	}
	else {

		int _seientFila;
		char _seientColumna;
		string _idVol;
		string _correuClient;
		string _tipusEquipatge;
		string _nomPassatger;
		string _dataVol;
		string _siglesOrigen;
		string _siglesDesti;
		float _preuReserva;

		CercadoraVol cercaVol;
		PassarelaVol vol;

		for (int i = 0; i < reserves.size(); i++) {

			_seientFila = reserves[i].obteSeientFila();
			_seientColumna = reserves[i].obteSeientColumna();
			_idVol = reserves[i].obteIdVol();
			_correuClient = reserves[i].obteCorreuClient();
			_tipusEquipatge = reserves[i].obteTipusEquipatge();
			_nomPassatger = reserves[i].obteNomPassatger();
			_preuReserva = reserves[i].obtePreuReserva();


			vol = cercaVol.cercaVolPerId(_idVol);
			_dataVol = vol.obteSortidaPrevista();
			_siglesOrigen = vol.obteOrigen();
			_siglesDesti = vol.obteDesti();

			DTOReservesClient reserva(_seientFila, _seientColumna, _idVol, _correuClient, _tipusEquipatge, _nomPassatger, _siglesOrigen, _siglesDesti, _dataVol, _preuReserva);
			reservesVol.push_back(reserva);
		}
	}
}

vector<DTOReservesClient> TxConsultaReservesVol::obteReserves() {

	return reservesVol;
}
