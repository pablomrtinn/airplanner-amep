#include "pch.h"
#include "CercadoraModelsAvio.h"

CercadoraModelsAvio::CercadoraModelsAvio() { }

CercadoraModelsAvio::~CercadoraModelsAvio() { }

PassarelaModelsAvio CercadoraModelsAvio::cercaModelAvio(string model) {
	
	
	String^ sql = "SELECT * FROM ModelsAvio WHERE model = '" + gcnew System::String(model.c_str()) + "'";
	ConnexioBD^ connexio = ConnexioBD::getInstance();
	MySqlConnection^ conn = connexio->getConnection();
	try {
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
		conn->Open();
		MySqlDataReader^ dataReader = cmd->ExecuteReader();
        PassarelaModelsAvio modelAvio;

		if (dataReader->Read()) {
			modelAvio.setModel(msclr::interop::marshal_as<std::string>(dataReader->GetString("model")));
			modelAvio.setFiles(dataReader->GetInt32("files"));
			modelAvio.setColumnes(dataReader->GetInt32("columnes"));
		}
		else {
			throw gcnew Exception("No s'ha trobat cap model d'avió amb aquest nom.");
		}
		dataReader->Close();
		conn->Close();
		return modelAvio;
	}/*
	catch (Exception^ ex) {
		throw gcnew Exception("Error en cercar el model d'avió: " + ex->Message);
	}*/
	finally {
		conn->Close();
	}
}

