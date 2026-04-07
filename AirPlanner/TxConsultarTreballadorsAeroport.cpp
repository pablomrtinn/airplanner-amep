#include "pch.h"
#include "TxConsultarTreballadorsAeroport.h"

TxConsultarTreballadorsAeroport::TxConsultarTreballadorsAeroport() {

}

TxConsultarTreballadorsAeroport::~TxConsultarTreballadorsAeroport() {

}

void TxConsultarTreballadorsAeroport::executar() {
	AirPlannerSingleton& airPlanner = AirPlannerSingleton::getInstance();
	PassarelaUsuari* _usuari = airPlanner.obteUsuari();
	std::string correuElectronicU = _usuari->obteCorreuElectronic();

	CercadoraTreballador cercadoraTreballador;
	treballadors = cercadoraTreballador.cercaTreballadorPerAeroport(correuElectronicU);
	//FALTA CREAR LA CERCADORA I QUE AQUESTA TORNI TOTS ELS TREBALLADORS D'AEROPORT 

}

std::vector <PassarelaTreballador> TxConsultarTreballadorsAeroport::obteTreballadors() {
	return treballadors;
}