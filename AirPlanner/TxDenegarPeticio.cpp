#include "pch.h"
#include "TxDenegarPeticio.h"

TxDenegarPeticio::TxDenegarPeticio(string idPeticio, string motiuResolucio, string dataSolicitud) {
	_idPeticio = idPeticio;
	_motiuResolucio = motiuResolucio;
	_dataSolicitud = dataSolicitud;
}

TxDenegarPeticio::~TxDenegarPeticio() {

}

void TxDenegarPeticio::executar() {
	CercadoraPeticions& cercadoraPeticions = CercadoraPeticions::getInstance();
	String^ idPeticioManaged = gcnew String(_idPeticio.c_str());
	String^ dataSolicitudManaged = gcnew String(_dataSolicitud.c_str());
	PassarelaPeticions peticio = cercadoraPeticions.cercaPeticio(idPeticioManaged, dataSolicitudManaged);

	peticio.setEstat("Denegada");
	peticio.setMotiuResolucio(_motiuResolucio);

	time_t now = time(0);
	tm* ltm = localtime(&now);
	char buffer[20];
	snprintf(buffer, sizeof(buffer), "%04d-%02d-%02d %02d:%02d:%02d",
		1900 + ltm->tm_year,
		1 + ltm->tm_mon,
		ltm->tm_mday,
		ltm->tm_hour,
		ltm->tm_min,
		ltm->tm_sec);
	peticio.setDataResolucio(buffer);

	peticio.modifica();
}