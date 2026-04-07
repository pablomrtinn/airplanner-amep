#ifndef CERCADORAUSUARI_HPP
#define CERCADORAUSUARI_HPP
#pragma once
#include "PassarelaUsuari.h"
#include <vector>
#include <stdexcept>
#include <msclr/marshal_cppstd.h>

class CercadoraUsuari {
private:

public:
  
    CercadoraUsuari();

    static CercadoraUsuari& getInstance();
    
    
    ~CercadoraUsuari();

    PassarelaUsuari cercaUsuari(String^ correuElectronicU);

	vector<string> cercaTotsNomsAerolines();

	string cercaNomAerolinia(string correuAerolinia);
  
    PassarelaUsuari cercaUsuari(string correuElectronicU);
};
#endif
