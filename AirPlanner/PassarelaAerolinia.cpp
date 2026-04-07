#include "pch.h"
#include "PassarelaAerolinia.h"
/*
    PassarelaAerolinia();
    PassarelaAerolinia(string correuElectronic);

    PassarelaAerolinia operator= (const PassarelaAerolinia &obj);

    ~PassarelaAerolinia();

    string obteCorreuElectronic();
    string obteNom();

    void setCorreuElectronic(string correuElectornic);
*/
PassarelaAerolinia::PassarelaAerolinia() {
	_correuElectronic = "";
}

PassarelaAerolinia::PassarelaAerolinia(string correuElectronic) {
	_correuElectronic = correuElectronic;
}

PassarelaAerolinia::~PassarelaAerolinia() {
}

string PassarelaAerolinia::obteCorreuElectronic() {
    return _correuElectronic;
}

void PassarelaAerolinia::setCorreuElectronic(string correuElectornic) {
    _correuElectronic = correuElectornic;
}

void PassarelaAerolinia::insereix() {

    string temp = "INSERT INTO Aerolinia (correu_electronic) VALUES ('" + _correuElectronic + "')";
    String^ sql = gcnew String(temp.c_str());

    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection();

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    try {
        conn->Open();

        //cmd->ExecuteNonQuery(); // Usamos ExecuteNonQuery ya que no esperamos un Reader
        cmd->ExecuteReader(); // Usamos ExecuteNonQuery ya que no esperamos un Reader
    }
    finally {
        // Cerrar la conexión si no hubo excepciones
        conn->Close();
    }
}

void PassarelaAerolinia::modifica() {
    string temp = "UPDATE Aerolinia SET "
        "correu_electronic = '" + _correuElectronic + "', "
        "WHERE correu_electronic = '" + _correuElectronic + "'";
    String^ sql = gcnew String(temp.c_str());

    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection(); // Necessites un getter per accedir a la connexió

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;

    try {
        // obrim la connexió
        conn->Open();
        // executem la comanda creada abans del try
        dataReader = cmd->ExecuteReader();
    }
    catch (Exception^ ex) {
        // codi per mostrar l’error en una finestra
        MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        // si tot va bé es tanca la connexió
        conn->Close();
    }
}

void PassarelaAerolinia::esborra() {
    string temp = "DELETE FROM Aerolinia WHERE correu_electronic = '" + _correuElectronic + "'";
    String^ sql = gcnew String(temp.c_str());

    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection(); // Necessites un getter per accedir a la connexió

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;

    try {
        // obrim la connexió
        conn->Open();
        // executem la comanda creada abans del try
        dataReader = cmd->ExecuteReader();
    }
    catch (Exception^ ex) {
        // codi per mostrar l’error en una finestra
        MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        // si tot va bé es tanca la connexió
        conn->Close();
    }
}