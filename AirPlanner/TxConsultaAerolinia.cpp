#include "pch.h"
#include "TxConsultaAerolinia.h"


ConsultarAerolinia::ConsultarAerolinia() {}
ConsultarAerolinia::~ConsultarAerolinia() {}


std::vector<DTOAerolinia> ConsultarAerolinia::ConsultaAerolinia()
{
    CercadoraAerolinia cerca = CercadoraAerolinia();
    std::vector<DTOAerolinia> resultado;
    std::vector<PassarelaAerolinia> Info_tabla = cerca.cercaAeroliniafull();


    CercadoraUsuari& cerca2 = CercadoraUsuari::getInstance();
    // Recorremos Info_tabla
    for (PassarelaAerolinia& aerolinia : Info_tabla) {
        // Crear un DTOAerolinia
        DTOAerolinia dto;
        std::string correu = aerolinia.obteCorreuElectronic();
        String^ correuNet = gcnew String(correu.c_str());
        PassarelaUsuari UsuariAerolinia = cerca2.cercaUsuari(correuNet);

        dto.setCorreuElectronic(UsuariAerolinia.obteCorreuElectronic());
        dto.setNom(UsuariAerolinia.obteNom());

        // Insertamos el DTO en el resultado
        resultado.push_back(dto);
    }
    return resultado;
}
