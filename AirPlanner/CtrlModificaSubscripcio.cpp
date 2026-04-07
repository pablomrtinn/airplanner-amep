#include "pch.h"
#include "CtrlModificaSubscripcio.h"

/*
	public:
		ModificaSubscripcio();
		~ModificaSubscripcio();
		void Modifica_Subscripcio(std::string CategoriaSubscripcion);
		void execute();
	private:
		std::string _CategoriaSubscripion;
*/

ModificaSubscripcio::ModificaSubscripcio()
{

}

ModificaSubscripcio::~ModificaSubscripcio()
{

}


void ModificaSubscripcio::Modifica_Subscripcio(std::string CategoriaSubscripion)
{
	_CategoriaSubscripion = CategoriaSubscripion;
}

void ModificaSubscripcio::execute()
{
	AirPlannerSingleton& airPlanner = AirPlannerSingleton::getInstance();
	PassarelaUsuari usuario = *(airPlanner.obteUsuari());
	std::string CorreuElectronic = usuario.obteCorreuElectronic();

	//Cercadora Client
	CercadoraClient& cerca1 = CercadoraClient::getInstance();
	System::String^ correu = msclr::interop::marshal_as<System::String^>(CorreuElectronic);

	//Obtenermos su pasarela
	PassarelaClient client = cerca1.cercaClient(correu);

	string neixC = client.obteDataNaixement();

	string year = neixC.substr(6, 4);
	string month = neixC.substr(3, 2);
	string day = neixC.substr(0, 2);

	neixC = year + "-" + month + "-" + day;
	client.setDataNaixement(neixC);

	client.setSubscripcio(_CategoriaSubscripion);

	client.modifica();
}


