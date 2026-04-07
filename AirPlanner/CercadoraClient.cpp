#include "pch.h"
#include "CercadoraClient.h"
#include <msclr/marshal_cppstd.h>

CercadoraClient::CercadoraClient() {
}

CercadoraClient::~CercadoraClient() {
}

CercadoraClient& CercadoraClient::getInstance() {
    static CercadoraClient instance;
    return instance;
}

PassarelaClient CercadoraClient::cercaClient(String^ correuElectronicU) {
    // Crear la consulta SQL parametrizada para evitar inyecciones SQL

    String^ sql = "SELECT * FROM Client WHERE correu_electronic = '" + correuElectronicU + "'";

     // Obtener la instancia de la conexión a la base de datos
     ConnexioBD^ connexio = ConnexioBD::getInstance();
     MySqlConnection^ conn = connexio->getConnection();

    try {
       

        // Crear el comando con parámetros
        MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

        // Abrir la conexión
        conn->Open();

        // Ejecutar la consulta y obtener los resultados
        MySqlDataReader^ dataReader = cmd->ExecuteReader();

        // Dentro del método cercaClient
        PassarelaClient resultat;

        // Verificar si se encontró algún cliente
        if (dataReader->Read()) {
            std::string correuElectronic = msclr::interop::marshal_as<std::string>(dataReader->GetString("correu_electronic"));

            System::DateTime dataNaixement = dataReader->GetDateTime(dataReader->GetOrdinal("data_naixement"));
            std::string dataStr = msclr::interop::marshal_as<std::string>(dataNaixement.ToString("dd-MM-yyyy"));


            std::string subscripcio = msclr::interop::marshal_as<std::string>(dataReader->GetString("subscripcio"));

            resultat.setCorreuElectronic(correuElectronic);
            resultat.setDataNaixement(dataStr);

            resultat.setSubscripcio(subscripcio);
        }
        else {
            // Si no se encuentra ningún cliente, lanzar una excepción
            throw gcnew Exception("Usuario no encontrado");
        }

        // Cerrar el lector y la conexión
        dataReader->Close();
        conn->Close();

        return resultat;
    }
    catch (Exception^ ex) {
        // Manejar errores y lanzar una excepción descriptiva
        throw gcnew Exception("Error al buscar el cliente: " + ex->Message);
    }
    finally{
        conn->Close();
    }
}