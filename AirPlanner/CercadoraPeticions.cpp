#include "pch.h"
#include "CercadoraPeticions.h"
#include <msclr/marshal_cppstd.h>


CercadoraPeticions::CercadoraPeticions() {
}

CercadoraPeticions::~CercadoraPeticions() {
}

CercadoraPeticions& CercadoraPeticions::getInstance() {
    static CercadoraPeticions instance;
    return instance;
}

vector<PassarelaPeticions> CercadoraPeticions::cercaPeticions(String^ CorreuAeroport) {

    // Crear la consulta SQL parametrizada para evitar inyecciones SQL
    String^ sql = "SELECT * FROM Peticio WHERE correuAeroport = '" + CorreuAeroport + "' AND estat = 'Pendent' ORDER BY arribadaPrevista ASC";

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

        // Dentro del método cercaPeticions
        vector<PassarelaPeticions> resultat;

        // Verificar si se encontró algún cliente
        while (dataReader->Read()) {
            PassarelaPeticions peticio;

            peticio.setIdVol(msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("idVol"))));
            peticio.setOrigen(msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("origen"))));
            peticio.setDesti(msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("desti"))));

            System::DateTime SortidaPrevista = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaPrevista"));
            System::DateTime ArribadaPrevista = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaPrevista"));

            peticio.setSortidaPrevista(msclr::interop::marshal_as<std::string>(SortidaPrevista.ToString("dd-MM-yyyy HH:mm")));
            peticio.setArribadaPrevista(msclr::interop::marshal_as<std::string>(ArribadaPrevista.ToString("dd-MM-yyyy HH:mm")));

            peticio.setPreu((float)dataReader->GetDecimal(dataReader->GetOrdinal("preu")));
            peticio.setModelAvio(msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("modelAvio"))));
            peticio.setCorreuAerolinia(msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("correuAerolinia"))));
            //peticio.setCorreuAeroport(msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("correuAeroport"))));

            // Convertir 'dataSolicitud' de DateTime a string
            System::DateTime dataSolicitud = dataReader->GetDateTime(dataReader->GetOrdinal("dataSolicitud"));
            peticio.setDataSolicitud(msclr::interop::marshal_as<std::string>(dataSolicitud.ToString("dd-MM-yyyy HH:mm:ss")));

            //peticio.setEstat(msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("estat"))));

            resultat.push_back(peticio);

        }

        // Cerrar el lector y la conexión
        dataReader->Close();
        conn->Close();

        return resultat;
    }
    catch (Exception^ ex) {
        // Manejar errores y lanzar una excepción descriptiva
        throw gcnew Exception("Error en obtenir las peticiones: " + ex->Message);
    }
    finally {
        conn->Close();
    }
}

PassarelaPeticions CercadoraPeticions::cercaPeticio(String^ idVol, String^ DataSolicitud) {
    // Mostrar la fecha formateada en un MessageBox para verificar que es correcta

	// Crear la consulta SQL parametrizada para evitar inyecciones SQL

    String^ sql = "SELECT * FROM Peticio WHERE idVol = '" + idVol + "' AND dataSolicitud = '" + DataSolicitud + "'";

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

        // Dentro del método cercaPeticio
        PassarelaPeticions resultat;

        // Verificar si se encontró algún cliente
        if (dataReader->Read()) {
            string IdVol = msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("idVol")));
            string Origen = msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("origen")));
            string Desti = msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("desti")));

            System::DateTime sortida = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaPrevista"));
            string datahoraSortida = msclr::interop::marshal_as<std::string>(sortida.ToString("yyyy-MM-dd HH:mm"));

            System::DateTime arribada = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaPrevista"));
            string datahoraArribada = msclr::interop::marshal_as<std::string>(arribada.ToString("yyyy-MM-dd HH:mm"));

            float Preu = dataReader->GetFloat(dataReader->GetOrdinal("preu"));

            string ModelAvio = msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("modelAvio")));
            string CorreuAerolinia = msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("correuAerolinia")));
            std::string CorreuAeroport = msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("correuAeroport")));

            System::DateTime dataSolicitud = dataReader->GetDateTime(dataReader->GetOrdinal("dataSolicitud"));
            std::string strDataSolicitud = msclr::interop::marshal_as<std::string>(dataSolicitud.ToString("yyyy-MM-dd HH:mm:ss"));

            // Asignación a la clase PassarelaPeticions
            resultat.setIdVol(IdVol);
            resultat.setOrigen(Origen);
            resultat.setDesti(Desti);
            resultat.setSortidaPrevista(datahoraSortida);
            resultat.setArribadaPrevista(datahoraArribada);
            resultat.setPreu(Preu);
            resultat.setModelAvio(ModelAvio);
            resultat.setCorreuAerolinia(CorreuAerolinia);
            resultat.setCorreuAeroport(CorreuAeroport);
            resultat.setDataSolicitud(strDataSolicitud);
        }

        else {
            // Si no se encuentra ningún cliente, lanzar una excepción
            throw gcnew Exception("Petició no trobada");
        }

        // Cerrar el lector y la conexión
        dataReader->Close();
        conn->Close();

        return resultat;
    }
    catch (Exception^ ex) {
        // Manejar errores y lanzar una excepción descriptiva
        throw gcnew Exception("Error en buscar la petició: " + ex->Message);
    }
    finally {
        conn->Close();
    }
}

vector<PassarelaPeticions> CercadoraPeticions::cercaEstatPeticions(String^ CorreuAerolinia) {

    // Crear la consulta SQL parametrizada para evitar inyecciones SQL
	String^ sql = "SELECT * FROM Peticio WHERE correuAerolinia = '" + CorreuAerolinia + "' ORDER BY dataSolicitud ASC";

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

        // Dentro del método cercaPeticions
        vector<PassarelaPeticions> resultat;

        // Verificar si se encontró algún cliente
        while (dataReader->Read()) {
            PassarelaPeticions peticio;

            peticio.setIdVol(msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("idVol"))));
            peticio.setOrigen(msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("origen"))));
            peticio.setDesti(msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("desti"))));

            System::DateTime SortidaPrevista = dataReader->GetDateTime(dataReader->GetOrdinal("sortidaPrevista"));
            System::DateTime ArribadaPrevista = dataReader->GetDateTime(dataReader->GetOrdinal("arribadaPrevista"));

            peticio.setSortidaPrevista(msclr::interop::marshal_as<std::string>(SortidaPrevista.ToString("dd-MM-yyyy HH:mm")));
            peticio.setArribadaPrevista(msclr::interop::marshal_as<std::string>(ArribadaPrevista.ToString("dd-MM-yyyy HH:mm")));

            peticio.setPreu((float)dataReader->GetDecimal(dataReader->GetOrdinal("preu")));
            peticio.setModelAvio(msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("modelAvio"))));
			peticio.setCorreuAeroport(msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("correuAeroport"))));
            
            // Convertir 'dataSolicitud' de DateTime a string
            System::DateTime dataSolicitud = dataReader->GetDateTime(dataReader->GetOrdinal("dataSolicitud"));
            peticio.setDataSolicitud(msclr::interop::marshal_as<std::string>(dataSolicitud.ToString("dd-MM-yyyy HH:mm")));

            peticio.setEstat(msclr::interop::marshal_as<std::string>(dataReader->GetString(dataReader->GetOrdinal("estat"))));
            
            // Campos que pueden ser NULL
            int colMotiu = dataReader->GetOrdinal("motiuResolucio");
            if (!dataReader->IsDBNull(colMotiu)) {
                peticio.setMotiuResolucio(msclr::interop::marshal_as<std::string>(dataReader->GetString(colMotiu)));
			}

			int colDataResolucio = dataReader->GetOrdinal("dataResolucio");
			if (!dataReader->IsDBNull(colDataResolucio)) {
				System::DateTime dataResolucio = dataReader->GetDateTime(colDataResolucio);
				peticio.setDataResolucio(msclr::interop::marshal_as<std::string>(dataResolucio.ToString("dd-MM-yyyy HH:mm")));
			}

            resultat.push_back(peticio);

        }

        // Cerrar el lector y la conexión
        dataReader->Close();
        conn->Close();

        return resultat;
    }
    catch (Exception^ ex) {
        // Manejar errores y lanzar una excepción descriptiva
        throw gcnew Exception("Error en obtenir las peticions: " + ex->Message);
    }
    finally {
        conn->Close();
    }
}





    
