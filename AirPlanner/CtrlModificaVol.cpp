#include "pch.h"
#include "CtrlModificaVol.h"

CtrlModificaVol::CtrlModificaVol() {
}

CtrlModificaVol::~CtrlModificaVol() {

}

void CtrlModificaVol::modificaVol(string idVol, string origen, string desti, string sortidaP, string arribadaP, string sortidaA, string arribadaA, double preu, string modelAvio) {
	CercadoraVol cercadoraV;
	_passarelaVol = cercadoraV.cercaVolPerId(idVol);

	if (origen != "") _passarelaVol.setOrigen(origen);
	if (desti != "") _passarelaVol.setDesti(desti);
	if (sortidaP != "") _passarelaVol.setSortidaPrevista(sortidaP);
	if (arribadaP != "") _passarelaVol.setArribadaPrevista(arribadaP);
	if (sortidaA != "") _passarelaVol.setSortidaActualitzada(sortidaA);
	if (arribadaA != "") _passarelaVol.setArribadaActualitzada(arribadaA);
	if (preu != -1.0) _passarelaVol.setPreu(preu);
	if (modelAvio != "") _passarelaVol.setModelAvio(modelAvio);

	if (origen != "" || desti != "" || sortidaP != "" || arribadaP != "" || sortidaA != "" || arribadaA != "" || preu != -1.0 || modelAvio != "") {
		_passarelaVol.modifica();
	}
}