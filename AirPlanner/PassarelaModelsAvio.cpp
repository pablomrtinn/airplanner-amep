#include "pch.h"
#include "PassarelaModelsAvio.h"


PassarelaModelsAvio::PassarelaModelsAvio() {
    
    _model = "";
	_files = 0;
	_columnes = 0;
}

PassarelaModelsAvio::PassarelaModelsAvio(string model, int files, int columnes ) {

	_model = model;
	_files = files;
	_columnes = columnes;
}

PassarelaModelsAvio::~PassarelaModelsAvio() { }

string PassarelaModelsAvio::obteModel() const {
    return _model;
}
int PassarelaModelsAvio::obteFiles() const {
	return _files;
}
int PassarelaModelsAvio::obteColumnes() const {
	return _columnes;
}

void PassarelaModelsAvio::setModel(string model) {
    _model = model;
}
void PassarelaModelsAvio::setFiles(int files) {
    _files = files;
}
void PassarelaModelsAvio::setColumnes(int columnes) {
    _columnes = columnes;
}

void PassarelaModelsAvio::insereix()
{
    string temp = "INSERT INTO ModelsAvio (model, files, columnes) VALUES ('" + _model + "', '" + to_string(_files) + "', '" + to_string(_columnes) + "')";
    String^ sql = gcnew String(temp.c_str());

    ConnexioBD^ connexio = ConnexioBD::getInstance();

    MySqlConnection^ conn = connexio->getConnection(); // Necessites un getter per accedir a la connexi�

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;

    try {
        // obrim la connexi�
        conn->Open();
        // executem la comanda creada abans del try
        dataReader = cmd->ExecuteReader();
    }
    finally {
        // si tot va b� es tanca la connexi�
        conn->Close();
    }
}

void PassarelaModelsAvio::modifica()
{
    string temp = "UPDATE ModelsAvio SET files = '" + to_string(_files) +
        "', columnes = '" + to_string(_columnes) +
        "' WHERE model = '" + _model + "'";

    String^ sql = gcnew String(temp.c_str());

    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection(); // Necessites un getter per accedir a la connexi�

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;

    try {
        // obrim la connexi�
        conn->Open();
        // executem la comanda creada abans del try
        dataReader = cmd->ExecuteReader();
    }
    catch (Exception^ ex) {
        // codi per mostrar l�error en una finestra
        MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        // si tot va b� es tanca la connexi�
        conn->Close();
    }
}

void PassarelaModelsAvio::esborra()
{
    string temp = "DELETE FROM ModelsAvio WHERE model = '" + _model + "'";
    String^ sql = gcnew String(temp.c_str());

    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection(); // Necessites un getter per accedir a la connexi�

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;

    try {
        // obrim la connexi�
        conn->Open();
        // executem la comanda creada abans del try
        dataReader = cmd->ExecuteReader();
    }
    catch (Exception^ ex) {
        // codi per mostrar l�error en una finestra
        MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        // si tot va b� es tanca la connexi�
        conn->Close();
    }
}