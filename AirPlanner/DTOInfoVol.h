#ifndef DTOINFOVOL_HPP
#define DTOINFOVOL_HPP
#pragma once
#include <string>
class DTOInfoVol
{
private:
	std::string _idVol;
	std::string _origen;
	std::string _desti;
	std::string _horaArribada;
	std::string _horaSortida;
	std::string _horaArribadaActualitzada;
	std::string _horaSortidaActualitzada;
	float _preu;
	std::string _modelAvio;
	std::string _nomAerolinia;
public:
	DTOInfoVol();
	DTOInfoVol(std::string idVol, std::string origen, std::string desti, std::string horaArribada, std::string horaSortida,
		std::string horaArribadaActualitzada, std::string horaSortidaActualitzada, float preu, std::string modelAvio,
		std::string correuAerolinia);
	~DTOInfoVol();
	std::string obteIdVol() const;
	std::string obteOrigen() const;
	std::string obteDesti() const;
	std::string obteDataHoraArribada() const;
	std::string obteDataHoraSortida() const;
	std::string obteDataHoraArribadaActualitzada() const;
	std::string obteDataHoraSortidaActualitzada() const;
	float obtePreu() const;
	std::string obteModelAvio() const;
	std::string obteNomAerolinia() const;
	void setIdVol(const std::string& idVol);
	void setOrigen(const std::string& origen);
	void setDesti(const std::string& desti);
	void setDataHoraArribada(const std::string& datahoraArribada);
	void setDataHoraSortida(const std::string& datahoraSortida);
	void setDataHoraArribadaActualitzada(const std::string& datahoraArribadaActualitzada);
	void setDataHoraSortidaActualitzada(const std::string& datahoraSortidaActualitzada);
	void setPreu(float preu);
	void setModelAvio(const std::string& modelAvio);
	void setNomAerolinia(const std::string& Aerolinia);
};

#endif