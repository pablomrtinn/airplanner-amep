#include "pch.h"
#include "TxObteFiltresBuscaVols.h"

TxObteFiltresBuscaVols::TxObteFiltresBuscaVols(){
}

TxObteFiltresBuscaVols::~TxObteFiltresBuscaVols(){
}

void TxObteFiltresBuscaVols::executar(){
	//Obtenim totes les sigles d'aeroports
	CercadoraAeroport cercadorAeroport;
	_totesSiglesAeroports = cercadorAeroport.cercaTotesSiglesAeroport();
	//Obtenim tots els noms d'aerolinies
	CercadoraUsuari& cercadoraUsuari = CercadoraUsuari::getInstance();
	_totsNomsAerolinies = cercadoraUsuari.cercaTotsNomsAerolines();
}

vector<string> TxObteFiltresBuscaVols::obteTotesSiglesAeroports(){
	return _totesSiglesAeroports;
}
vector<string> TxObteFiltresBuscaVols::obteTotsNomsAerolinies(){
	return _totsNomsAerolinies;
}