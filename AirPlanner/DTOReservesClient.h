#pragma once
#include <iostream>
using namespace std;
 class DTOReservesClient
{
	private:

		int _seientFila;
		char _seientColumna;
		string _idVol;
		string _correuClient;
		string _tipusEquipatge;
		string _nomPassatger;
		string _siglesOrigen;
		string _siglesDesti;
		string _dataVol;
		float _preuReserva;
		

	public:

		DTOReservesClient();
		DTOReservesClient(int seientFila, char seientColumna, string idVol, string correuClient, string tipusEquipatge, string nomPassatger, string siglesOrigen, string siglesDesti, string _dataVol, float preuReserva);

		int obteSeientFila() const;
		char obteSeientColumna() const;
		string obteIdVol() const;
		string obteCorreuClient() const;
		string obteTipusEquipatge() const;
		string obteNomPassatger() const;
		string obteSiglesOrigen() const;
		string obteSiglesDesti() const;
		string obteDataVol () const;
		float obtePreuReserva() const;

};

