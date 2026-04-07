#ifndef CERCADORAMODELSAVIO_HPP
#define CERCADORAMODELSAVIO_HPP
#pragma once
#include "PassarelaModelsAvio.h"
#include <stdexcept>
#include <msclr/marshal_cppstd.h>

class CercadoraModelsAvio {
private:


public:

    CercadoraModelsAvio();

    //static CercadoraVol& getInstance();

    ~CercadoraModelsAvio();

    PassarelaModelsAvio cercaModelAvio(string model);
};
#endif