#include "pch.h"
#include "TxTancarSessio.h"


TxTancarSessio::TxTancarSessio(){
}

TxTancarSessio::~TxTancarSessio(){
}

void TxTancarSessio::executar(){
   AirPlannerSingleton& airPlanner = AirPlannerSingleton::getInstance();
   airPlanner.tancarSessio();
}