#include "pch.h"
#include "TxConsultarInfoVol.h"

TxConsultarInfoVol::TxConsultarInfoVol(std::string idVol) {
	_idVol = idVol;
}
TxConsultarInfoVol::~TxConsultarInfoVol() {

}
void TxConsultarInfoVol::executar() {
	CercadoraVol cercador;
	PassarelaVol passarela = cercador.cercaVolPerIdDatesSenceres(_idVol);
	string correu = passarela.obteCorreuAerolinia();
	CercadoraUsuari cercaUsu;
	PassarelaUsuari aero = cercaUsu.cercaUsuari(correu);
    string nom = aero.obteNom();
    DTOInfoVol info(
        passarela.obteIdVol(),
        passarela.obteOrigen(),
        passarela.obteDesti(),
        passarela.obteArribadaPrevista(),
        passarela.obteSortidaPrevista(),
        passarela.obteArribadaActualitzada(),
        passarela.obteSortidaActualitzada(),
        passarela.obtePreu(),
        passarela.obteModelAvio(),
        nom
        );
	_infoVol = info;
}
DTOInfoVol TxConsultarInfoVol::obteInfoVol() {
	return _infoVol;

}