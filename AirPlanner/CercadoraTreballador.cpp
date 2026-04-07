#include "pch.h"
#include "CercadoraTreballador.h"
CercadoraTreballador::CercadoraTreballador(){
}

CercadoraTreballador::~CercadoraTreballador() {

}

std::vector<PassarelaTreballador> CercadoraTreballador::cercaTreballadorPerAeroport(string CorreuAeroport) {
    System::String^ sql = "SELECT * FROM Treballador WHERE aeroport = '" + gcnew System::String(CorreuAeroport.c_str()) + "'";
    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection();

    try {
        // Crear el comando con par�metros
        MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

        // Abrir la conexi�n
        conn->Open();

        // Ejecutar la consulta y obtener los resultados
        MySqlDataReader^ dataReader = cmd->ExecuteReader();

        // Dentro del m�todo cercaClient
        
        std::vector<PassarelaTreballador> treballadors;

        // Verificar si se encontr� alg�n cliente
        while (dataReader->Read()) {
            PassarelaTreballador treballador;

            string correu = msclr::interop::marshal_as<std::string>(dataReader->GetString("correu_electronic"));

            string id = msclr::interop::marshal_as<std::string>(dataReader->GetString("id"));

            treballador.setCorreuElectronic(correu);
            treballador.setCorreuAeroport(CorreuAeroport);
            treballador.setId(id);

            treballadors.push_back(treballador); // MODIFICAT
        }
        if (treballadors.empty()) {
            // Si no se encuentra ning�n cliente, lanzar una excepci�n
            throw gcnew Exception("No s'ha trobat cap treballador");
        }

        // Cerrar el lector y la conexi�n
        dataReader->Close();
        conn->Close();

        return treballadors;
    }
    catch (Exception^ ex) {
        // Manejar errores y lanzar una excepci�n descriptiva
        throw gcnew Exception("Error al buscar un treballador: " + ex->Message);
    }
    finally {
        conn->Close();
    }
}

PassarelaTreballador CercadoraTreballador::cercaTreballador(string correuElectronic) {
	string temp = "SELECT * FROM Treballador WHERE correu_electronic = '" + correuElectronic + "'";
	String^ sql = gcnew String(temp.c_str());

	ConnexioBD^ connexio = ConnexioBD::getInstance();
	MySqlConnection^ conn = connexio->getConnection();

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    MySqlDataReader^ dataReader;
    PassarelaTreballador resultat;

    try {
        conn->Open();

        dataReader = cmd->ExecuteReader();

        if (dataReader->Read()) {
            string correuAeroport = msclr::interop::marshal_as<std::string>(dataReader->GetString("aeroport"));
            string id = msclr::interop::marshal_as<std::string>(dataReader->GetString("id"));

			      resultat.setCorreuElectronic(correuElectronic);

            resultat.setCorreuAeroport(correuAeroport);
            resultat.setId(id);
        }
        else {
            throw gcnew Exception("No existeix cap treballador amb aquest correu... Has intentat contactar amb l'altra vida?");
        }

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