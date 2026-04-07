#include "pch.h"
#include "CercadoraReserva.h"

CercadoraReserva::CercadoraReserva() {}

CercadoraReserva::~CercadoraReserva() {}

vector<PassarelaReserva> CercadoraReserva::cercaReservaPerVol(string idVol) {

    vector<PassarelaReserva> reserves;
    System::String^ sql = "SELECT * FROM Reserva WHERE idVol = '" + gcnew System::String(idVol.c_str()) + "'";
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
        PassarelaReserva reserva;

        // Verificar si se encontr� alg�n cliente
        while (dataReader->Read()) {

            int seientFila = dataReader->GetInt32(dataReader->GetOrdinal("seientFila"));
            System::String^ columna = dataReader->GetString(dataReader->GetOrdinal("seientColumna"));
            char seientColumna = static_cast<char>(columna[0]);
            string correuClient = msclr::interop::marshal_as<std::string>(dataReader->GetString("correuClient"));
            string tipusEquipatge = msclr::interop::marshal_as<std::string>(dataReader->GetString("tipusEquipatge"));
            string nomPassatger = msclr::interop::marshal_as<std::string>(dataReader->GetString("nomPassatger"));
            string genere = msclr::interop::marshal_as<std::string>(dataReader->GetString("genere"));
            System::DateTime data = dataReader->GetDateTime(dataReader->GetOrdinal("dataNaixement"));
            string dataNaixement = msclr::interop::marshal_as<std::string>(data.ToString("yyyy-MM-dd"));
            float preuReserva = dataReader->GetFloat(dataReader->GetOrdinal("preuReserva"));

            reserva.setSeientFila(seientFila);
            reserva.setSeientColumna(seientColumna);
            reserva.setIdVol(idVol);
            reserva.setCorreuElectronic(correuClient);
            reserva.setTipusEquipatge(tipusEquipatge);
            reserva.setNomPassatger(nomPassatger);
            reserva.setGenere(genere);
            reserva.setDataNaixement(dataNaixement);
			reserva.setPreuReserva(preuReserva);

            reserves.push_back(reserva);
        }

        // Cerrar el lector y la conexi�n
        dataReader->Close();
        conn->Close();

        return reserves;
    }
    catch (Exception^ ex) {
        // Manejar errores y lanzar una excepci�n descriptiva
        throw gcnew Exception("Error al buscar reserves: " + ex->Message);
    }
    finally {
        conn->Close();
    }
}

vector<PassarelaReserva> CercadoraReserva::cercaReservaPerClient(string correuClient) {

    vector<PassarelaReserva> reserves;
    System::String^ sql = "SELECT * FROM Reserva WHERE correuClient = '" + gcnew System::String(correuClient.c_str()) + "'";
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
        PassarelaReserva reserva;

        // Verificar si se encontr� alg�n cliente
        while (dataReader->Read()) {

            int seientFila = dataReader->GetInt32(dataReader->GetOrdinal("seientFila"));
            System::String^ columna = dataReader->GetString(dataReader->GetOrdinal("seientColumna"));
            char seientColumna = static_cast<char>(columna[0]);
            string idVol = msclr::interop::marshal_as<std::string>(dataReader->GetString("idVol"));
            string tipusEquipatge = msclr::interop::marshal_as<std::string>(dataReader->GetString("tipusEquipatge"));
            string nomPassatger = msclr::interop::marshal_as<std::string>(dataReader->GetString("nomPassatger"));
            string genere = msclr::interop::marshal_as<std::string>(dataReader->GetString("genere"));
            System::DateTime data = dataReader->GetDateTime(dataReader->GetOrdinal("dataNaixement"));
            string dataNaixement = msclr::interop::marshal_as<std::string>(data.ToString("yyyy-MM-dd"));
            float preuReserva = dataReader->GetFloat(dataReader->GetOrdinal("preuReserva"));

            reserva.setSeientFila(seientFila);
            reserva.setSeientColumna(seientColumna);
			reserva.setIdVol(idVol);
            reserva.setCorreuElectronic(correuClient);
            reserva.setTipusEquipatge(tipusEquipatge);
            reserva.setNomPassatger(nomPassatger);
            reserva.setGenere(genere);
            reserva.setDataNaixement(dataNaixement);
			reserva.setPreuReserva(preuReserva);

            reserves.push_back(reserva);
        }
        if (reserves.size() == 0) {

            throw gcnew Exception("No hi ha reserves encara.");
        }

        // Cerrar el lector y la conexi�n
        dataReader->Close();
        conn->Close();

        return reserves;
    }
    catch (Exception^ ex) {
        // Manejar errores y lanzar una excepci�n descriptiva
        throw gcnew Exception("Error al buscar reserves: " + ex->Message);
    }
    finally {
        conn->Close();
    }
}

PassarelaReserva CercadoraReserva::cercaReserva(string correuClient, string idVol, int seientFila, char seientColumna) {

    System::String^ sql = "SELECT * FROM Reserva WHERE correuClient = '" + gcnew System::String(correuClient.c_str()) +
        "' AND idVol = '" + gcnew System::String(idVol.c_str()) +
        "' AND seientFila = " + seientFila +
        " AND seientColumna = '" + gcnew System::String(seientColumna, 1) + "'";
    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection();

    try {
        // Crear el comando con parametros
        MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

        // Abrir la conexion
        conn->Open();

        // Ejecutar la consulta y obtener los resultados
        MySqlDataReader^ dataReader = cmd->ExecuteReader();

        PassarelaReserva reserva;

        // Verificar si se encontro alguna reserva
        if (dataReader->Read()) {

            string tipusEquipatge = msclr::interop::marshal_as<std::string>(dataReader->GetString("tipusEquipatge"));
            string nomPassatger = msclr::interop::marshal_as<std::string>(dataReader->GetString("nomPassatger"));
            string genere = msclr::interop::marshal_as<std::string>(dataReader->GetString("genere"));
            System::DateTime data = dataReader->GetDateTime(dataReader->GetOrdinal("dataNaixement"));
            string dataNaixement = msclr::interop::marshal_as<std::string>(data.ToString("yyyy-MM-dd"));
            float preuReserva = dataReader->GetFloat(dataReader->GetOrdinal("preuReserva"));

            reserva.setSeientFila(seientFila);
            reserva.setSeientColumna(seientColumna);
            reserva.setIdVol(idVol);
            reserva.setCorreuElectronic(correuClient);
            reserva.setTipusEquipatge(tipusEquipatge);
            reserva.setNomPassatger(nomPassatger);
            reserva.setGenere(genere);
            reserva.setDataNaixement(dataNaixement);
            reserva.setPreuReserva(preuReserva);

        }
        else {

            throw gcnew Exception("No s'ha trobat cap reserva amb aquestes especificacions.");
        }

        // Cerrar el lector y la conexion
        dataReader->Close();
        conn->Close();

        return reserva;
    }
    catch (Exception^ ex) {
        // Manejar errores y lanzar una excepcion
        throw gcnew Exception("Error al buscar la reserva: " + ex->Message);
    }
    finally {
        conn->Close();
    }
}