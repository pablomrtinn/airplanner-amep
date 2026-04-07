#include "pch.h"
#include "CtrlModificaAeroport.h"


ModificaAeroport::ModificaAeroport() 
{

}

ModificaAeroport::~ModificaAeroport() 
{

}


void ModificaAeroport::Modifica_Aeroport(std::string CorreuElectronicNOU, std::string CorreuElectronicVELL, std::string Contrasenya, std::string Nom, std::string Pais, std::string Siglas, std::string ContraAdmin)
{
	 _ContrasenyaADMIN = ContraAdmin;
	 _Nom = Nom;
	 _Contrasenya = Contrasenya;
	 _CorreuElectronicVELL = CorreuElectronicVELL;
	 _CorreuElectronicNOU = CorreuElectronicNOU;
	 _Pais = Pais;
	_Siglas = Siglas;
}


void ModificaAeroport::execute() 
{
	//Comprobacion de Contraseña Admin
	AirPlannerSingleton& airPlanner = AirPlannerSingleton::getInstance();
	PassarelaUsuari client = *(airPlanner.obteUsuari());
	std::string contrasenya = client.obteContrasenya();

	if (contrasenya != _ContrasenyaADMIN) {
		throw gcnew Exception("Error: La contrasenya no coincideix amb la de l'administrador.");
	}

	CercadoraUsuari& cerca2 = CercadoraUsuari::getInstance();
	System::String^ correu = msclr::interop::marshal_as<System::String^>(_CorreuElectronicVELL);

	PassarelaUsuari Usuari = cerca2.cercaUsuari(correu);

	if (_CorreuElectronicNOU == "") 
	{
		//Si no han canviado el correo antiguo mantenemos el viejo en el canvio
		_CorreuElectronicNOU = _CorreuElectronicVELL;
	}

	if (_Contrasenya != "") 
	{
		Usuari.setContrasenya(_Contrasenya);
	}

	if (_Nom != "") 
	{
		Usuari.setNom(_Nom);
	}

	Usuari.modifica(_CorreuElectronicNOU);

	CercadoraAeroport Aeroport_Cerca = CercadoraAeroport::CercadoraAeroport();
	
	PassarelaAeroport Aeroport = Aeroport_Cerca.cercaAeroportPerID(_CorreuElectronicNOU);

	if (_Pais != "")
	{
		Aeroport.posaPais(_Pais);
	}

	if (_Siglas != "")
	{
		Aeroport.posaSigles(_Siglas);
	}

	Aeroport.modifica();
}
