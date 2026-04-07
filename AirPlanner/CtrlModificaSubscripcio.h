#pragma once
#ifndef CTRLMODIFICASUBSCRIPCIO_HPP
#define CTRLMODIFICASUBSCRIPCIO_HPP

#include <string>
#include <msclr/marshal_cppstd.h>
#include "CercadoraClient.h"
#include "CercadoraUsuari.h"
#include "AirPlannerSingleton.h"
#include <iostream>


class ModificaSubscripcio
{
public:
	ModificaSubscripcio();
	~ModificaSubscripcio();
	void Modifica_Subscripcio(std::string CategoriaSubscripcion);
	void execute();
private:
	std::string _CategoriaSubscripion;
};







#endif