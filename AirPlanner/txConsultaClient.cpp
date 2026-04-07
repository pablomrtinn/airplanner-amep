#include "pch.h"
#include "txConsultaClient.h"

TxConsultaClient::TxConsultaClient() {
}

TxConsultaClient::~TxConsultaClient() {
}

void TxConsultaClient::executar() {
    AirPlannerSingleton& airPlanner = AirPlannerSingleton::getInstance();
    PassarelaUsuari* _usuari = airPlanner.obteUsuari();

    string correuElectronicU = _usuari->obteCorreuElectronic();
    string nomU, dataNaixementU, subscripcioU;

    CercadoraClient& cercadoraClient = CercadoraClient::getInstance();
    _passarelaClient = cercadoraClient.cercaClient(gcnew System::String(correuElectronicU.c_str()));

    nomU = _usuari->obteNom();
    dataNaixementU = _passarelaClient.obteDataNaixement(); 
    subscripcioU = _passarelaClient.obteSubscripcio();

    DTOClient client(nomU, correuElectronicU, subscripcioU, dataNaixementU);
    _client = client;
}

DTOClient TxConsultaClient::obteClient() {
    return _client;
}
PassarelaUsuari TxConsultaClient::passarelaUsuari() {
    return _passarelaUsuari;
}
PassarelaClient TxConsultaClient::passarelaClient() {
    return _passarelaClient;
}