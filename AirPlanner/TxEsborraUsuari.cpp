#include "pch.h"
#include "TxEsborraUsuari.h"

TxEsborraUsuari::TxEsborraUsuari(){

}

TxEsborraUsuari::TxEsborraUsuari(string contraU, string correuElectronic){
    _contraU = contraU;
	_correuElectronic = correuElectronic;
}

TxEsborraUsuari::~TxEsborraUsuari(){
}


void TxEsborraUsuari::executar(){
    AirPlannerSingleton& airPlanner = AirPlannerSingleton::getInstance();
    PassarelaUsuari client("", _correuElectronic, _contraU, "");
    if (airPlanner.obteUsuari() != nullptr) client = *(airPlanner.obteUsuari());
    string contrasenya = client.obteContrasenya();
    
    if (contrasenya != _contraU) {
        throw gcnew Exception("Error: La contrasenya no coincideix amb la de l'usuari." );
    } 
    client.esborra();
    airPlanner.tancarSessio();
}
    