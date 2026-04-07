#include "pch.h"
#include "CercadoraAeroport.h"

CercadoraAeroport::CercadoraAeroport() {}

CercadoraAeroport::~CercadoraAeroport() {}

PassarelaAeroport CercadoraAeroport::cercaAeroportPerSigles(string _sigles) {


    System::String^ sql = "SELECT * FROM Aeroport WHERE sigles = '" + gcnew System::String(_sigles.c_str()) + "'";
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
        PassarelaAeroport aeroport;

        // Verificar si se encontró algún cliente
        if (dataReader->Read()) {

            string correu = msclr::interop::marshal_as<std::string>(dataReader->GetString("correu_electronic"));


            string pais = msclr::interop::marshal_as<std::string>(dataReader->GetString("pais"));

            aeroport.posaCorreu(correu);
            aeroport.posaPais(pais);
            aeroport.posaSigles(_sigles);
        }
        else {
            // Si no se encuentra ningún cliente, lanzar una excepción
            throw gcnew Exception("Aeroport no trobat");
        }

        // Cerrar el lector y la conexión
        dataReader->Close();
        conn->Close();

        return aeroport;
    }
    catch (Exception^ ex) {

        // Manejar errores y lanzar una excepción descriptiva

        throw gcnew Exception("Error al buscar l'aeroport: " + ex->Message);
    }
    finally {
        conn->Close();
    }
}

string CercadoraAeroport::cercaSiglesAeroport(string correu) {

    string sigles = "";

    string temp = "SELECT sigles FROM Aeroport WHERE correu_electronic = '" + correu + "'";
    String^ sql = gcnew System::String(temp.c_str());

    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection();

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;

    try {
        conn->Open();
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            sigles = msclr::interop::marshal_as<std::string>(dataReader->GetString("sigles"));
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        conn->Close();
    }

    return sigles;
}

vector<string> CercadoraAeroport::cercaTotesSiglesAeroport() {
	vector<string> siglesAeroports;
	System::String^ sql = "SELECT DISTINCT sigles FROM Aeroport";
	ConnexioBD^ connexio = ConnexioBD::getInstance();
	MySqlConnection^ conn = connexio->getConnection();
	try {
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
		conn->Open();
		MySqlDataReader^ dataReader = cmd->ExecuteReader();
		while (dataReader->Read()) {
			string sigles = msclr::interop::marshal_as<std::string>(dataReader->GetString("sigles"));
			siglesAeroports.push_back(sigles);
		}
		dataReader->Close();
		return siglesAeroports;
	}
	catch (Exception^ ex) {
		throw gcnew Exception("Error en cercar les sigles dels aeroports: " + ex->Message);
	}
    finally {
        conn->Close();
    }
}

vector<string> CercadoraAeroport::obteSiglesAeroports() {
    return _siglesAeroports;
}

PassarelaAeroport CercadoraAeroport::cercaAeroportPerID(string CorreuElectronic) 
{
    System::String^ sql = "SELECT * FROM Aeroport WHERE correu_electronic = '" + gcnew System::String(CorreuElectronic.c_str()) + "'";
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
        PassarelaAeroport aeroport;

        // Verificar si se encontró algún cliente
        if (dataReader->Read()) {

            string correu = msclr::interop::marshal_as<std::string>(dataReader->GetString("correu_electronic"));


            string pais = msclr::interop::marshal_as<std::string>(dataReader->GetString("pais"));

            string sigles = msclr::interop::marshal_as<std::string>(dataReader->GetString("sigles"));

            aeroport.posaCorreu(correu);
            aeroport.posaPais(pais);
            aeroport.posaSigles(sigles);
        }
        else {
            // Si no se encuentra ningún cliente, lanzar una excepción
            throw gcnew Exception("Aeroport no trobat");
        }

        // Cerrar el lector y la conexión
        dataReader->Close();
        conn->Close();

        return aeroport;
    }
    catch (Exception^ ex) {

        // Manejar errores y lanzar una excepción descriptiva
        throw gcnew Exception("Error al buscar l'aeroport: " + ex->Message);
    }
    finally {
        conn->Close();
    }



}



std::vector<PassarelaAeroport> CercadoraAeroport::cercaAeroportfull()
{
    std::vector<PassarelaAeroport> aeroports;

    System::String^ sql = "SELECT * FROM Aeroport";
    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection();

    try {
        MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
        conn->Open();

        MySqlDataReader^ dataReader = cmd->ExecuteReader();

        while (dataReader->Read()) {
            PassarelaAeroport aeroport;

            std::string sigles = msclr::interop::marshal_as<std::string>(dataReader->GetString("sigles"));
            std::string correu = msclr::interop::marshal_as<std::string>(dataReader->GetString("correu_electronic"));
            std::string pais = msclr::interop::marshal_as<std::string>(dataReader->GetString("pais"));

            aeroport.posaSigles(sigles);
            aeroport.posaCorreu(correu);
            aeroport.posaPais(pais);

            aeroports.push_back(aeroport);
        }

        dataReader->Close();
        conn->Close();
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Error al recuperar aeroports: " + ex->Message);
    }
    finally {
        conn->Close();
    }

    return aeroports;
}
