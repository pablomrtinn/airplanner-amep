#include "pch.h"
#include "CtrlModificaClient.h"



CtrlModificaClient::CtrlModificaClient() {
}

CtrlModificaClient::~CtrlModificaClient() {
}

//DTOClient CtrlModificaClient::consultaClient() {}

void CtrlModificaClient::modificaClient(string nomC, string contraC, string neixC, string modalitatC) {
    AirPlannerSingleton& AirPlannerSingleton = AirPlannerSingleton::getInstance();
	_usuari = *AirPlannerSingleton.obteUsuari();
    CercadoraClient& cercadoraClient = CercadoraClient::getInstance();
    string correuE = _usuari.obteCorreuElectronic();

    _client = cercadoraClient.cercaClient(marshal_as<System::String^>(correuE));
    


    if (nomC != "") _usuari.setNom(nomC);
    if (contraC != "") _usuari.setContrasenya(contraC);
    if (neixC == "") {
        //dd/mm/aaaa --> aaaa-mm-dd
        neixC = _client.obteDataNaixement();

        string year = neixC.substr(6, 4);
        string month = neixC.substr(3, 2);
        string day = neixC.substr(0, 2);

        neixC = year + "-" + month + "-" + day;
        _client.setDataNaixement(neixC);
    } else {
        _client.setDataNaixement(neixC);
    }

    if (nomC != "" || contraC != "" || neixC != "" || modalitatC != "") {
        _client.modifica();
        _usuari.modifica();
        AirPlannerSingleton.modificaUsuari(_usuari.obteNom(), _usuari.obteContrasenya());
    }
}
