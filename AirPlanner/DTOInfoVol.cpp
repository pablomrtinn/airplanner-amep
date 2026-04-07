#include "pch.h"
#include "DTOInfoVol.h"

DTOInfoVol::DTOInfoVol() {
	_idVol = "";
	_origen = "";
	_desti = "";
	_horaArribada = "";
	_horaSortida = "";
	_horaArribadaActualitzada = "";
	_horaSortidaActualitzada = "";
	_preu = 0.0;
	_modelAvio = "";
	_nomAerolinia = "";
}
DTOInfoVol::DTOInfoVol(std::string idVol, std::string origen, std::string desti, std::string horaArribada, std::string horaSortida,
	std::string horaArribadaActualitzada, std::string horaSortidaActualitzada, float preu, std::string modelAvio,
	std::string nomAerolinia) {
	_idVol = idVol;
	_origen = origen;
	_desti = desti;
	_horaArribada = horaArribada;
	_horaSortida = horaSortida;
	_horaArribadaActualitzada = horaArribadaActualitzada;
	_horaSortidaActualitzada = horaSortidaActualitzada;
	_preu = preu;
	_modelAvio = modelAvio;
	_nomAerolinia = nomAerolinia;
}
DTOInfoVol::~DTOInfoVol() {
}
std::string DTOInfoVol::obteIdVol() const {
	return _idVol;
}
std::string DTOInfoVol::obteOrigen() const {
	return _origen;
}
std::string DTOInfoVol::obteDesti() const {
	return _desti;
}
std::string DTOInfoVol::obteDataHoraArribada() const {
	return _horaArribada;
}
std::string DTOInfoVol::obteDataHoraSortida() const {
	return _horaSortida;
}
std::string DTOInfoVol::obteDataHoraArribadaActualitzada() const {
	return _horaArribadaActualitzada;
}
std::string DTOInfoVol::obteDataHoraSortidaActualitzada() const {
	return _horaSortidaActualitzada;
}
float DTOInfoVol::obtePreu() const {
	return _preu;
}
std::string DTOInfoVol::obteModelAvio() const {
	return _modelAvio;
}
std::string DTOInfoVol::obteNomAerolinia() const {
	return _nomAerolinia;
}
void DTOInfoVol::setIdVol(const std::string& idVol) {
	_idVol = idVol;
}
void DTOInfoVol::setOrigen(const std::string& origen) {
	_origen = origen;
}
void DTOInfoVol::setDesti(const std::string& desti) {
	_desti = desti;
}
void DTOInfoVol::setDataHoraArribada(const std::string& datahoraArribada) {
	_horaArribada = datahoraArribada;
}
void DTOInfoVol::setDataHoraSortida(const std::string& datahoraSortida) {
	_horaSortida = datahoraSortida;
}
void DTOInfoVol::setDataHoraArribadaActualitzada(const std::string& datahoraArribadaActualitzada) {
	_horaArribadaActualitzada = datahoraArribadaActualitzada;
}
void DTOInfoVol::setDataHoraSortidaActualitzada(const std::string& datahoraSortidaActualitzada) {
	_horaSortidaActualitzada = datahoraSortidaActualitzada;
}
void DTOInfoVol::setPreu(float preu) {
	_preu = preu;
}
void DTOInfoVol::setModelAvio(const std::string& modelAvio) {
	_modelAvio = modelAvio;
}
void DTOInfoVol::setNomAerolinia(const std::string& Aerolinia) {
	_nomAerolinia = Aerolinia;
}