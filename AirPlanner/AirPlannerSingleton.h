#pragma once
#ifndef AIRPLANNERSSINGLETON_HPP
#define AIRPLANNERSSINGLETON_HPP

#include "PassarelaUsuari.h"


class AirPlannerSingleton {
private:
    static AirPlannerSingleton* _ins;

    AirPlannerSingleton();

    static PassarelaUsuari* _usuari;

public:
    //Constructors
    static AirPlannerSingleton& getInstance();

    //Consultors
    PassarelaUsuari* obteUsuari();

    //Modificadors
    static void iniciaSessio(PassarelaUsuari u);

    void tancarSessio();

    void modificaUsuari(string nom, string contrasenya);

};

#endif // AIRPLANNER_H
