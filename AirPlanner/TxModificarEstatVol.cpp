#include "pch.h"
#include "TxModificarEstatVol.h"

TxModificarEstatVol::TxModificarEstatVol(std::string dataHoraSortida, std::string dataHoraArribada, std::string idVol) {
	_dataHoraSortida = dataHoraSortida;
	_dataHoraArribada = dataHoraArribada;
	_idVol = idVol;
}
TxModificarEstatVol::~TxModificarEstatVol() {

}
void TxModificarEstatVol::executar() {
	CercadoraVol cercador;
	PassarelaVol vol = cercador.cercaVolPerIdDatesSenceres(_idVol);
	if (_dataHoraSortida != "") {
		vol.setSortidaActualitzada(_dataHoraSortida);
	}
	if (_dataHoraArribada != "") {
		vol.setArribadaActualitzada(_dataHoraArribada);
	}
	vol.modifica();
}