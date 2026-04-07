#pragma once
#include <msclr/marshal.h>
#include "PassarelaAerolinia.h"
#include "DTOAerolinia.h"
#include <string>
#include <vector>
using namespace System;

class CercadoraAerolinia
{
public:
	CercadoraAerolinia();
	~CercadoraAerolinia();
	PassarelaAerolinia cercaAerolinia(string correu);

	std::vector<PassarelaAerolinia> cercaAeroliniafull();
};

