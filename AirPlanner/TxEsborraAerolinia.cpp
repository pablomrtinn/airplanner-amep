#include "pch.h"
#include "TxEsborraAerolinia.h"
#include <iostream>
#include <windows.h>
TxEsborraAerolinia::TxEsborraAerolinia() {}

TxEsborraAerolinia::TxEsborraAerolinia(std::string contraU, std::string correu_electronicAe)
{
	_ContraU = contraU;
	_Correu = correu_electronicAe;
}

TxEsborraAerolinia::~TxEsborraAerolinia() 
{

}

void TxEsborraAerolinia::executa() 
{
    AirPlannerSingleton& airPlanner = AirPlannerSingleton::getInstance();
    PassarelaUsuari client = *(airPlanner.obteUsuari());
    std::string contrasenya = client.obteContrasenya();

    if (contrasenya != _ContraU) {
        throw gcnew Exception("Error: La contrasenya no coincideix amb la de l'administrador.");
    }
    
    CercadoraUsuari cerca2 = CercadoraUsuari::getInstance();
    System::String^ correu = msclr::interop::marshal_as<System::String^>(_Correu);

    PassarelaUsuari Usuari = cerca2.cercaUsuari(correu);

    Usuari.esborra();


}