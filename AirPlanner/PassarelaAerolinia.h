#ifndef PASSARELAAEROLINIA_HPP
#define PASSARELAAEROLINIA_HPP
#pragma once
#include "ConnexioBD.h"
#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;

class PassarelaAerolinia
{
private:

	string _correuElectronic;

public:
	PassarelaAerolinia();
	PassarelaAerolinia(string correuElectronic);

	~PassarelaAerolinia();

	string obteCorreuElectronic();

	void setCorreuElectronic(string correuElectornic);

	void insereix();
	void modifica();
	void esborra();
};
#endif

