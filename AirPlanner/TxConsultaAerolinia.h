#pragma once
#ifndef TXCONSULTAAEROLINIA_HPP
#define TXCONSULTAAEROLINIA_HPP

#include <msclr/marshal_cppstd.h>
#include "CercadoraAerolinia.h"
#include "CercadoraUsuari.h"
#include "DTOAerolinia.h"
#include <string>
#include <vector>
class ConsultarAerolinia
{
public:
	ConsultarAerolinia();
	~ConsultarAerolinia();
	std::vector<DTOAerolinia> ConsultaAerolinia();

};

#endif