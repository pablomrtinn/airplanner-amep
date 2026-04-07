#pragma once
#include "PassarelaTreballador.h"
#include "PassarelaUsuari.h"
#include "AirPlannerSingleton.h"
using namespace std;

class TxRegistrarTreballador
{
	private:
		string _correuElectronic;

		string _nom;
		string _contrasenya;

		string _correuAeroport;
		string _id;
	public:
		TxRegistrarTreballador(string correuElectronic, string nom, string contrasenya, string idTreballador);
		void executa();
};

