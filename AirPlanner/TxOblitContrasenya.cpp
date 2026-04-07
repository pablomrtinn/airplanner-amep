#include "pch.h"
#include "TxOblitContrasenya.h"
#include <msclr/marshal_cppstd.h>


//Constructors
TxOblitContrasenya::TxOblitContrasenya(string correuElectronic, string contrasenya){
	_correu = correuElectronic;
	_contrasenya = contrasenya;
}

//Destructors
TxOblitContrasenya::~TxOblitContrasenya(){
}

//Modificadors
void TxOblitContrasenya::executar(){
	CercadoraUsuari& cercadoraUsuari = CercadoraUsuari::getInstance();
	String^ correuAdministrat = msclr::interop::marshal_as<System::String^>(_correu);
	PassarelaUsuari passarelaUsuari = cercadoraUsuari.cercaUsuari(correuAdministrat);
	passarelaUsuari.setContrasenya(_contrasenya);
	passarelaUsuari.modifica();
}