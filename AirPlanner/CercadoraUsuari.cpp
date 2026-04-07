#include "pch.h"
#include "CercadoraUsuari.h"

CercadoraUsuari::CercadoraUsuari() {
}

CercadoraUsuari::~CercadoraUsuari() {
}

CercadoraUsuari& CercadoraUsuari::getInstance() {
    static CercadoraUsuari instance;
    return instance;
}

PassarelaUsuari CercadoraUsuari::cercaUsuari(String^ correuElectronicU) {

    String^ sql = "SELECT * FROM Usuari WHERE correu_electronic = '" + correuElectronicU + "'";

    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection();
    try {
        // Obtener la instancia de la conexion a la base de datos


        // Crear el comando con parametros
        MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

        // Abrir la conexion

        conn->Open();

        // Ejecutar la consulta y obtener los resultados
        MySqlDataReader^ dataReader = cmd->ExecuteReader();


        // Dentro del método cercaClient
        PassarelaUsuari resultat;

        // Verificar si se encontró algún cliente
        if (dataReader->Read()) {
            std::string correuElectronic = msclr::interop::marshal_as<std::string>(dataReader->GetString("correu_electronic"));
            std::string contrasenya = msclr::interop::marshal_as<std::string>(dataReader->GetString("contrasenya"));
            std::string nom = msclr::interop::marshal_as<std::string>(dataReader->GetString("nom"));
            std::string tipus = msclr::interop::marshal_as<std::string>(dataReader->GetString("tipus"));

            resultat.setNom(nom);
            resultat.setContrasenya(contrasenya);
            resultat.setTipus(tipus);
            resultat.setCorreuElectronic(correuElectronic);
        }
        else {

            // Si no se encuentra ningún cliente, lanzar una excepción
            throw gcnew Exception("No existeix cap usuari amb aquest correu... Has intentat contactar amb l'altra vida?");
        }

        // Cerrar el lector y la conexión
        dataReader->Close();
        conn->Close();

        return resultat;
    }
    catch (Exception^ ex) {

        // Manejar errores y lanzar una excepción descriptiva

        throw gcnew Exception(ex->Message);
    }
    finally {
        conn->Close();
    }
}

vector<string> CercadoraUsuari::cercaTotsNomsAerolines() {
    vector<string> nomsAerolines;
    String^ sql = "SELECT DISTINCT nom FROM Usuari WHERE tipus = 'Aerolinia'";
    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection();
    try {
        MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
        conn->Open();
        MySqlDataReader^ dataReader = cmd->ExecuteReader();
        while (dataReader->Read()) {
            string nom = msclr::interop::marshal_as<std::string>(dataReader->GetString("nom"));
            nomsAerolines.push_back(nom);
        }
        dataReader->Close();
        return nomsAerolines;
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Error al cercar els noms d'aerolinies: " + ex->Message);
    }
    finally {
        conn->Close();
    }
}

PassarelaUsuari CercadoraUsuari::cercaUsuari(string correuElectronicStr) {
    // Crear la consulta SQL parametrizada para evitar inyecciones SQL
    String^ correuElectronicU = gcnew String(correuElectronicStr.c_str());
    String^ sql = "SELECT * FROM Usuari WHERE correu_electronic = '" + correuElectronicU + "'";
    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection();

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;

    try {
        conn->Open();

        dataReader = cmd->ExecuteReader();

        PassarelaUsuari resultat;

        if (dataReader->Read()) {
            std::string correuElectronic = msclr::interop::marshal_as<std::string>(dataReader->GetString("correu_electronic"));
            std::string contrasenya = msclr::interop::marshal_as<std::string>(dataReader->GetString("contrasenya"));
            std::string nom = msclr::interop::marshal_as<std::string>(dataReader->GetString("nom"));
            std::string tipus = msclr::interop::marshal_as<std::string>(dataReader->GetString("tipus"));

            resultat.setNom(nom);
            resultat.setContrasenya(contrasenya);
            resultat.setTipus(tipus);
            resultat.setCorreuElectronic(correuElectronic);
        }
        else {

            // Si no se encuentra ningún cliente, lanzar una excepción
            throw gcnew Exception("No existeix cap usuari amb aquest correu... Has intentat contactar amb l'altra vida?");
        }

        // Cerrar el lector y la conexión
        dataReader->Close();
        conn->Close();

        return resultat;
    }
    catch (Exception^ ex) {
         throw gcnew Exception("Error a l'iniciar sessio: " + ex->Message);
    }
    finally {
        conn->Close();
    }
}

string CercadoraUsuari::cercaNomAerolinia(string correuAerolinia) {
	string nomAerolinia;
	String^ sql = "SELECT nom FROM Usuari WHERE correu_electronic = '" + gcnew String(correuAerolinia.c_str()) + "'";
	ConnexioBD^ connexio = ConnexioBD::getInstance();
	MySqlConnection^ conn = connexio->getConnection();
	try {
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
		conn->Open();
		MySqlDataReader^ dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			nomAerolinia = msclr::interop::marshal_as<std::string>(dataReader->GetString("nom"));
		}
		dataReader->Close();
		return nomAerolinia;
	}
	catch (Exception^ ex) {
		throw gcnew Exception("Error al cercar el nom de l'aerolinia: " + ex->Message);
	}
	finally {
		conn->Close();
	}
}

