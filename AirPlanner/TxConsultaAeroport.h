#pragma once
#ifndef TXCONSULTAAEROPORT_HPP
#define TXCONSULTAAEROPORT_HPP


#include <vector>
#include <string>
#include "CercadoraAeroport.h"
#include "CercadoraUsuari.h"
#include "DTOAeroport.h"
#include <msclr/marshal_cppstd.h>
class ConsultaAeroport
{
public:
	ConsultaAeroport();
	~ConsultaAeroport();
	std::vector<DTOAeroport> ConsultarAeroport();
};





#endif