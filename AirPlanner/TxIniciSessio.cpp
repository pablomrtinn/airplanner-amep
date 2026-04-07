#include "pch.h"
#include "TxIniciSessio.h"
#include <msclr/marshal_cppstd.h>
using namespace msclr::interop;
TxIniciSessio::TxIniciSessio(std::string ceU, std::string cU)
{
    _correuElectronicU = ceU;
    _contrasenyaU = cU;
}

//Destructor
TxIniciSessio::~TxIniciSessio() {
}

void TxIniciSessio::executar()
{
    CercadoraUsuari& cercadora = CercadoraUsuari::getInstance();
    PassarelaUsuari u = cercadora.cercaUsuari(marshal_as<System::String^>(_correuElectronicU));
    std::string contrasenya = u.obteContrasenya();

    if (contrasenya != _contrasenyaU) {
        throw gcnew System::Exception(gcnew System::String("Error: El correu no existeix o la contrasenya és errònia"));
    }

    AirPlannerSingleton& Airplanner = AirPlannerSingleton::getInstance();
    Airplanner.iniciaSessio(u);

}
