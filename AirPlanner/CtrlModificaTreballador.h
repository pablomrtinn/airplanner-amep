#pragma once
#include "PassarelaUsuari.h"
#include "PassarelaTreballador.h"
#include "CercadoraUsuari.h"
#include "CercadoraTreballador.h"

class CtrlModificaTreballador
{
private:
	PassarelaTreballador _treballador;
	PassarelaUsuari _usuari;

public:
	CtrlModificaTreballador();
	~CtrlModificaTreballador();

	void modificaTreballador(string correuElectronic, string contrasenya, string nom, string id, string aeroport);
};

