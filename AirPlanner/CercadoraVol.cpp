#include "pch.h"
#include "CercadoraVol.h"
#include "ConnexioBD.h"
#include <msclr/marshal_cppstd.h>
#include <vector>
#include <stdexcept>
#include <string>
#include <iostream>
using namespace std;

CercadoraVol::CercadoraVol() {
}

CercadoraVol& CercadoraVol::getInstance() {
    static CercadoraVol instance;
    return instance;
}

CercadoraVol::~CercadoraVol() {

}

vector<PassarelaVol> CercadoraVol::cercaVolsAerolinia(String^ correuElectronicAerolinia) {
    vector<PassarelaVol> vols;

    String^ sql = "SELECT * FROM Vol WHERE correuAerolinia = '" + correuElectronicAerolinia + "'";

    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection();

    try {
        MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

        conn->Open();
        MySqlDataReader^ dataReader = cmd->ExecuteReader();

        while (dataReader->Read()) {
            PassarelaVol vol;

            vol.setIdVol(msclr::interop::marshal_as<std::string>(dataReader->GetString("idVol")));
            vol.setOrigen(msclr::interop::marshal_as<std::string>(dataReader->GetString("origen")));
            vol.setDesti(msclr::interop::marshal_as<std::string>(dataReader->GetString("desti")));

            System::DateTime temp;
            temp = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaPrevista"));
            vol.setSortidaPrevista(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaPrevista"));
            vol.setArribadaPrevista(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaActualitzada"));
            vol.setSortidaActualitzada(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaActualitzada"));
            vol.setArribadaActualitzada(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            //vol.setPreu(msclr::interop::marshal_as<std::string>(dataReader->GetString("preu")));
            vol.setPreu(static_cast<float>(dataReader->GetDouble("preu")));

            vol.setModelAvio(msclr::interop::marshal_as<std::string>(dataReader->GetString("modelAvio")));
            vol.setCorreuAerolinia(msclr::interop::marshal_as<std::string>(dataReader->GetString("correuAerolinia")));

            vols.push_back(vol);
        }

        dataReader->Close();
        conn->Close();

        return vols;
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Error en cercar vols de l'aerolínia: " + ex->Message);
    }
    finally {
        conn->Close();
    }
}

vector<PassarelaVol> CercadoraVol::cercaVolsAerolinia(string correuElectronicAerolinia) {
    vector<PassarelaVol> vols;

    // Convertir std::string a String^ para usar en la consulta SQL
    String^ sql = "SELECT * FROM Vol WHERE correuAerolinia = '" + gcnew System::String(correuElectronicAerolinia.c_str()) + "' ORDER BY sortidaPrevista ASC";


    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection();

    try {
        MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

        conn->Open();
        MySqlDataReader^ dataReader = cmd->ExecuteReader();

        while (dataReader->Read()) {
            PassarelaVol vol;

            vol.setIdVol(msclr::interop::marshal_as<std::string>(dataReader->GetString("idVol")));
            vol.setOrigen(msclr::interop::marshal_as<std::string>(dataReader->GetString("origen")));
            vol.setDesti(msclr::interop::marshal_as<std::string>(dataReader->GetString("desti")));

            System::DateTime temp;
            temp = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaPrevista"));
            vol.setSortidaPrevista(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaPrevista"));
            vol.setArribadaPrevista(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaActualitzada"));
            vol.setSortidaActualitzada(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaActualitzada"));
            vol.setArribadaActualitzada(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            vol.setPreu(dataReader->GetFloat("preu"));

            vol.setModelAvio(msclr::interop::marshal_as<std::string>(dataReader->GetString("modelAvio")));
            vol.setCorreuAerolinia(msclr::interop::marshal_as<std::string>(dataReader->GetString("correuAerolinia")));

            vols.push_back(vol);
        }

        dataReader->Close();
        conn->Close();

        return vols;
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Error en cercar vols de l'aerolínia: " + ex->Message);
    }
    finally {
        // Asegurarse de cerrar la conexión incluso si ocurre una excepción
        conn->Close();
    }
}

vector<PassarelaVol> CercadoraVol::cercaVolsAeroport(string siglesAeroport) {
    vector<PassarelaVol> vols;

    // Convertir std::string a String^ para usar en la consulta SQL
    string temp = "SELECT * FROM Vol WHERE origen = '" + siglesAeroport + "' ORDER BY sortidaPrevista ASC";
    String^ sql = gcnew System::String(temp.c_str());


    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection();

    try {
        MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

        conn->Open();
        MySqlDataReader^ dataReader = cmd->ExecuteReader();

        while (dataReader->Read()) {
            PassarelaVol vol;

            vol.setIdVol(msclr::interop::marshal_as<std::string>(dataReader->GetString("idVol")));
            vol.setOrigen(msclr::interop::marshal_as<std::string>(dataReader->GetString("origen")));
            vol.setDesti(msclr::interop::marshal_as<std::string>(dataReader->GetString("desti")));

            System::DateTime temp;
            temp = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaPrevista"));
            vol.setSortidaPrevista(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaPrevista"));
            vol.setArribadaPrevista(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaActualitzada"));
            vol.setSortidaActualitzada(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaActualitzada"));
            vol.setArribadaActualitzada(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            vol.setPreu(dataReader->GetFloat("preu"));

            vol.setModelAvio(msclr::interop::marshal_as<std::string>(dataReader->GetString("modelAvio")));
            vol.setCorreuAerolinia(msclr::interop::marshal_as<std::string>(dataReader->GetString("correuAerolinia")));

            vols.push_back(vol);
        }

        dataReader->Close();
        conn->Close();

        return vols;
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Error al cercar vols de l'aeroport: " + ex->Message);
    }
    finally {
        // Asegurarse de cerrar la conexión incluso si ocurre una excepción
        conn->Close();
    }
}

PassarelaVol CercadoraVol::cercaVolPerId(string _idVol) {

    System::String^ sql = "SELECT * FROM Vol WHERE idVol = '" + gcnew System::String(_idVol.c_str()) + "'";
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
        PassarelaVol vol;

        // Verificar si se encontró algún cliente
        if (dataReader->Read()) {

            vol.setIdVol(msclr::interop::marshal_as<std::string>(dataReader->GetString("idVol")));
            vol.setOrigen(msclr::interop::marshal_as<std::string>(dataReader->GetString("origen")));
            vol.setDesti(msclr::interop::marshal_as<std::string>(dataReader->GetString("desti")));

            System::DateTime temp;
            temp = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaPrevista"));
            vol.setSortidaPrevista(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaPrevista"));
            vol.setArribadaPrevista(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaActualitzada"));
            vol.setSortidaActualitzada(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaActualitzada"));
            vol.setArribadaActualitzada(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy")));
            
            vol.setPreu(static_cast<float>(dataReader->GetDouble("preu")));

            vol.setModelAvio(msclr::interop::marshal_as<std::string>(dataReader->GetString("modelAvio")));
            vol.setCorreuAerolinia(msclr::interop::marshal_as<std::string>(dataReader->GetString("correuAerolinia")));

        }
        else {

            throw gcnew Exception("No s'ha trobat cap vol amb aquest ID.");
        }
        // Cerrar el lector y la conexión
        dataReader->Close();
        conn->Close();

        return vol;
    }
    catch (Exception^ ex) {
        // Manejar errores y lanzar una excepci�n descriptiva
        throw gcnew Exception("Error al buscar el vol: " + ex->Message);
    }
    finally {
        conn->Close();
    }
}

PassarelaVol CercadoraVol::cercaVolPerIdDatesSenceres(string _idVol) {

    System::String^ sql = "SELECT * FROM Vol WHERE idVol = '" + gcnew System::String(_idVol.c_str()) + "'";
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
        PassarelaVol vol;

        // Verificar si se encontr� alg�n cliente
        if (dataReader->Read()) {

            vol.setIdVol(msclr::interop::marshal_as<std::string>(dataReader->GetString("idVol")));
            vol.setOrigen(msclr::interop::marshal_as<std::string>(dataReader->GetString("origen")));
            vol.setDesti(msclr::interop::marshal_as<std::string>(dataReader->GetString("desti")));

            System::DateTime temp;
            temp = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaPrevista"));
            vol.setSortidaPrevista(msclr::interop::marshal_as<std::string>(temp.ToString("yyyy-MM-dd HH:mm:ss")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaPrevista"));
            vol.setArribadaPrevista(msclr::interop::marshal_as<std::string>(temp.ToString("yyyy-MM-dd HH:mm:ss")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaActualitzada"));
            vol.setSortidaActualitzada(msclr::interop::marshal_as<std::string>(temp.ToString("yyyy-MM-dd HH:mm:ss")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaActualitzada"));
            vol.setArribadaActualitzada(msclr::interop::marshal_as<std::string>(temp.ToString("yyyy-MM-dd HH:mm:ss")));

            vol.setPreu(static_cast<float>(dataReader->GetDouble("preu")));

            vol.setModelAvio(msclr::interop::marshal_as<std::string>(dataReader->GetString("modelAvio")));
            vol.setCorreuAerolinia(msclr::interop::marshal_as<std::string>(dataReader->GetString("correuAerolinia")));
        }
        else {

            throw gcnew Exception("No s'ha trobat cap vol amb aquest ID.");
        }
        // Cerrar el lector y la conexion
        dataReader->Close();
        conn->Close();

        return vol;
    }
    catch (Exception^ ex) {
        // Manejar errores y lanzar una excepcion descriptiva
        throw gcnew Exception("Error al buscar el vol: " + ex->Message);
    }
    finally {
        conn->Close();
    }
}

vector<PassarelaVol> CercadoraVol::cercaVolsClient(string origen, string desti, string aerolinia, string dataSortida, float preu) {
    vector<PassarelaVol> vols;

    // Comenzar base de la consulta
    String^ sql = "SELECT * FROM Vol WHERE sortidaPrevista > NOW()";

    // Añadir condiciones si los campos no están vacíos
    if (!origen.empty() && origen != "") {
        sql += " AND origen = '" + gcnew String(origen.c_str()) + "'";
    }
    if (!desti.empty() && desti != "") {
        sql += " AND desti = '" + gcnew String(desti.c_str()) + "'";
    }
    if (!aerolinia.empty() && aerolinia != "") {
        sql += " AND correuAerolinia = '" + gcnew String(aerolinia.c_str()) + "'";
    }
    if (!dataSortida.empty()) {
        sql += " AND DATE(sortidaPrevista) = '" + gcnew String(dataSortida.c_str()) + "'";
    }
    if (preu > 0) {
		// F2 arrodoneix a dos decimals i fa que dona igual si hi ha decimals o no i la menaera en el que està escrit (amb coma o punt)
        sql += " AND preu <= " + preu.ToString("F2", System::Globalization::CultureInfo::InvariantCulture);
    }

    sql += " ORDER BY sortidaPrevista ASC";

    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection();

    try {
        MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

        conn->Open();
        MySqlDataReader^ dataReader = cmd->ExecuteReader();

        while (dataReader->Read()) {
            PassarelaVol vol;

            vol.setIdVol(msclr::interop::marshal_as<std::string>(dataReader->GetString("idVol")));
            vol.setOrigen(msclr::interop::marshal_as<std::string>(dataReader->GetString("origen")));
            vol.setDesti(msclr::interop::marshal_as<std::string>(dataReader->GetString("desti")));

            System::DateTime temp;
            temp = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaPrevista"));
            vol.setSortidaPrevista(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaPrevista"));
            vol.setArribadaPrevista(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaActualitzada"));
            vol.setSortidaActualitzada(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            temp = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaActualitzada"));
            vol.setArribadaActualitzada(msclr::interop::marshal_as<std::string>(temp.ToString("dd-MM-yyyy HH:mm")));

            vol.setPreu(dataReader->GetFloat("preu"));
            vol.setModelAvio(msclr::interop::marshal_as<std::string>(dataReader->GetString("modelAvio")));
            vol.setCorreuAerolinia(msclr::interop::marshal_as<std::string>(dataReader->GetString("correuAerolinia")));

            vols.push_back(vol);
        }

        dataReader->Close();
        conn->Close();

        if (vols.empty()) {
            // Mostrar el mensaje si no hay vuelos
            System::Windows::Forms::MessageBox::Show("Atenció! No hi ha cap vol disponible amb els criteris actuals.",
                "Informació",
                System::Windows::Forms::MessageBoxButtons::OK,
                System::Windows::Forms::MessageBoxIcon::Information);
        }
        return vols;
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Error en cercar vols de l'aerolínia: " + ex->Message);
    }
    finally {
        conn->Close();
    }
}