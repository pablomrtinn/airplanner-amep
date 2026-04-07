#include "pch.h"
#include "TxConsultaAeroport.h"

ConsultaAeroport::ConsultaAeroport()
{
	

}


ConsultaAeroport::~ConsultaAeroport()
{

}


std::vector<DTOAeroport> ConsultaAeroport::ConsultarAeroport()
{
	std::vector<DTOAeroport> Rest;
	CercadoraAeroport cerca = CercadoraAeroport();
	std::vector<PassarelaAeroport> Info_Tabla = cerca.cercaAeroportfull();

	CercadoraUsuari& cerca2 = CercadoraUsuari::getInstance();

	for (PassarelaAeroport& Aeroport : Info_Tabla) 
	{
		DTOAeroport dto;
		
		std::string correu = Aeroport.obteCorreu();
		String^ correuNet = gcnew String(correu.c_str());
		PassarelaUsuari UsuariAerolinia = cerca2.cercaUsuari(correuNet);

		dto.setCorreuElectronic(Aeroport.obteCorreu());
		dto.setNom(UsuariAerolinia.obteNom());
		dto.setPais(Aeroport.obtePais());
		dto.setSigles(Aeroport.obteSigles());

		Rest.push_back(dto);
	}
	return Rest;
}