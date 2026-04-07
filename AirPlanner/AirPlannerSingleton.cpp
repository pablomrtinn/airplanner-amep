#include "pch.h"
#include "AirPlannerSingleton.h"


AirPlannerSingleton* AirPlannerSingleton::_ins = nullptr;
PassarelaUsuari* AirPlannerSingleton::_usuari = nullptr;

AirPlannerSingleton::AirPlannerSingleton() {

}

AirPlannerSingleton& AirPlannerSingleton::getInstance() {
    if (_ins == nullptr) {
        _ins = new AirPlannerSingleton();
    }
    return *_ins;
}

PassarelaUsuari* AirPlannerSingleton::obteUsuari() {
    return _usuari;
}


void AirPlannerSingleton::iniciaSessio(PassarelaUsuari u) {
    if (_usuari == nullptr) {
        _usuari = new PassarelaUsuari(u);
    }
    else {
        *_usuari = u;
    }
}



void AirPlannerSingleton::tancarSessio() {
    delete _usuari;
    _usuari = nullptr;
}


void AirPlannerSingleton::modificaUsuari(string nom, string contrasenya) {
    _usuari->setNom(nom);
    _usuari->setContrasenya(contrasenya);

}

/*void AirPlannerSingleton::modificaContrasenya(string contrasenya) {
    _usuari->setContrasenya(contrasenya);

}*/
