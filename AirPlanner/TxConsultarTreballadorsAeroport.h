#ifndef TXCONSULTARTREBALLADORSAEROPORT_HPP
#define TXCONSULTARTREBALLADORSAEROPORT_HPP
#pragma once
#include <iostream>
#include <vector>
#include "PassarelaTreballador.h"
#include "CercadoraTreballador.h"
#include "AirPlannerSingleton.h"
class TxConsultarTreballadorsAeroport
{
    private:

        std::vector <PassarelaTreballador> treballadors;

    public:

        TxConsultarTreballadorsAeroport();

        ~TxConsultarTreballadorsAeroport();

        void executar();

        std::vector <PassarelaTreballador> obteTreballadors();
};

#endif
