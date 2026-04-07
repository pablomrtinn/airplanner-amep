#include "pch.h"
#include "CtrlModificaReservaVol.h"

CtrlModificaReservaVol::CtrlModificaReservaVol() {}

CtrlModificaReservaVol::~CtrlModificaReservaVol() {}

void CtrlModificaReservaVol::modificarReserva(string correu, int seientFilaAnt, char seientColAnt, int seientFila, char seientColumna, string idVol, string tipusEquipatge, string nom, string genere, string dataNeix, float preuReserva) {

	try {
		CercadoraReserva cerca;
		PassarelaReserva reserva;

		reserva = cerca.cercaReserva(correu, idVol, seientFilaAnt, seientColAnt);

		if (reserva.obteIdVol() == "") {

			throw gcnew Exception("No hi ha reserves per aquest vol.");
		}  

		reserva.setSeientFilaAnt(reserva.obteSeientFila());
		reserva.setSeientColumnaAnt(reserva.obteSeientColumna());
		reserva.setSeientFila(seientFila);
		reserva.setSeientColumna(seientColumna);
		reserva.setIdVol(idVol);
		reserva.setCorreuElectronic(correu);
		reserva.setTipusEquipatge(tipusEquipatge);
		reserva.setNomPassatger(nom);
		reserva.setGenere(genere);
		reserva.setDataNaixement(dataNeix);
		reserva.setPreuReserva(preuReserva);

		reserva.modifica();
	}
	catch (const std::exception& e) {
		// Re-lanzamos la excepción con contexto adicional
		throw std::runtime_error(std::string("Error al modificar la reserva: ") + e.what());
	}
}