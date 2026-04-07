#include "pch.h"
#include "PassarelaAeroport.h"

PassarelaAeroport::PassarelaAeroport() {}

PassarelaAeroport::PassarelaAeroport(std::string correu) {

    _correuElectronic = correu;
}

PassarelaAeroport::PassarelaAeroport(std::string correu, std::string pais, std::string sigles) {
    _correuElectronic = correu;
    _pais = pais;
    _sigles = sigles;
}

std::string PassarelaAeroport::obteCorreu() {
    return _correuElectronic;
}

std::string PassarelaAeroport::obtePais() {
    return _pais;
}

std::string PassarelaAeroport::obteSigles() {
    return _sigles;
}

void PassarelaAeroport::posaCorreu(std::string correu) {
    _correuElectronic = correu;
}
void PassarelaAeroport::posaPais(std::string pais) {
    _pais = pais;
}
void PassarelaAeroport::posaSigles(std::string sigles) {
    _sigles = sigles;
}

//Modificado para que inserte todos los componentes en la base de datos.
void PassarelaAeroport::insereix() {

    string temp = "INSERT INTO Aeroport (correu_electronic,pais,sigles) VALUES ('" + _correuElectronic + "','" + _pais + "','" + _sigles + "')";
    String^ sql = gcnew String(temp.c_str());

    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection();

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    try {
        // Obrir la connexió
        conn->Open();

        // Executar la consulta d'inserció
        cmd->ExecuteNonQuery(); // No esperem un Reader
    }
    finally {
        // Tancar la connexió
        conn->Close();
    }
}

void PassarelaAeroport::modifica() 
{
    string temp = "UPDATE Aeroport SET correu_electronic = '" + _correuElectronic +
        "', pais = '" + _pais +
        "', sigles = '" + _sigles +

        "' WHERE correu_electronic = '" + _correuElectronic + "'";

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

void PassarelaAeroport::esborra() 
{
    string temp = "DELETE FROM Aeroport WHERE correu_electronic = '" + _correuElectronic + "'";
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