#include "pch.h"
#include "CtrlModificaAerolinia.h"

CtrlModificaAerolinia::CtrlModificaAerolinia(){
}

CtrlModificaAerolinia::~CtrlModificaAerolinia(){
}

void CtrlModificaAerolinia::ModificaAerolinea(string nouCorreuElectronic, string correuElectronic,string contrasenya, string nom, string contraAdmin)
{
	_nouCorreuElectronic = nouCorreuElectronic;
	_correuElectronic = correuElectronic;
	_contrasenya = contrasenya;
	_nom = nom;
	_contraAdmin = contraAdmin;
}

void CtrlModificaAerolinia::executar()
{
	AirPlannerSingleton& airPlanner = AirPlannerSingleton::getInstance();
	PassarelaUsuari client = *(airPlanner.obteUsuari());
	string contrasenya = client.obteContrasenya();

	if (contrasenya != _contraAdmin) throw gcnew Exception("Error: La contrasenya no coincideix amb la de l'administrador.");

	CercadoraUsuari& cercadoraUsuari = CercadoraUsuari::getInstance();
	System::String^ correu = msclr::interop::marshal_as<System::String^>(_correuElectronic);

	PassarelaUsuari usuari = cercadoraUsuari.cercaUsuari(correu);

	if(_nouCorreuElectronic == ""){
		_nouCorreuElectronic = _correuElectronic;
	}
	if (_contrasenya != ""){
		usuari.setContrasenya(_contrasenya);
	}
	if (_nom != "") {
		usuari.setNom(_nom);
	}
	usuari.modifica(_nouCorreuElectronic);
}