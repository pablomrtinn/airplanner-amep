#include "pch.h"
#include "TxEsborraAeroport.h"

TxEsborraAeroport::TxEsborraAeroport()
{
}

TxEsborraAeroport::TxEsborraAeroport(std::string contraU, std::string siglasAe)
{
    _contraU = contraU;
    _SiglasAe = siglasAe;
}

TxEsborraAeroport::~TxEsborraAeroport()
{
}

void TxEsborraAeroport::executa()
{
    AirPlannerSingleton& airPlanner = AirPlannerSingleton::getInstance();
    PassarelaUsuari client = *(airPlanner.obteUsuari());
    std::string contrasenya = client.obteContrasenya();

    if (contrasenya != _contraU) {
        throw gcnew Exception("Error: La contrasenya no coincideix amb la de l'administrador.");
    }

    //Obtenemos la Passarela para el id
    CercadoraAeroport cerca;
    PassarelaAeroport Aeroport = cerca.cercaAeroportPerSigles(_SiglasAe);

    CercadoraUsuari cerca2 = CercadoraUsuari::getInstance();
    std::string correuStd = Aeroport.obteCorreu();
    System::String^ correu = msclr::interop::marshal_as<System::String^>(correuStd);

    PassarelaUsuari Usuari = cerca2.cercaUsuari(correu);

    Usuari.esborra();


}
