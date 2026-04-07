#include "pch.h"
#include "PassarelaUsuari.h"

PassarelaUsuari::PassarelaUsuari() {
    _nom = "";
    _contrasenya = "";
    _correuElectronic = "";
    _tipus = "";
}

PassarelaUsuari::PassarelaUsuari(string nomU, string correuElectronicU, string contrasenyaU, string tipusU) {
    _nom = nomU;
    _correuElectronic = correuElectronicU;
    _contrasenya = contrasenyaU;
    _tipus = tipusU;
}

PassarelaUsuari::~PassarelaUsuari() {

}

string PassarelaUsuari::obteNom() const {
    return _nom;
}
string PassarelaUsuari::obteContrasenya() const {
    return _contrasenya;
}
string PassarelaUsuari::obteCorreuElectronic() const {
    return _correuElectronic;
}
string PassarelaUsuari::obtetipus() const {
    return _tipus;
}

PassarelaUsuari& PassarelaUsuari::operator=(const PassarelaUsuari& obj) {

    if (this != &obj) {
        _nom = obj._nom;
        _contrasenya = obj._contrasenya;
        _correuElectronic = obj._correuElectronic;
        _tipus = obj._tipus;
    }
    return *this;
}

void PassarelaUsuari::setContrasenya(string contrasenya) {
    _contrasenya = contrasenya;
}
void PassarelaUsuari::setCorreuElectronic(string correuElectornic) {
    _correuElectronic = correuElectornic;
}
void PassarelaUsuari::setTipus(string tipus) {
    _tipus = tipus;
}
void PassarelaUsuari::setNom(string nom) {
    _nom = nom;
}

void PassarelaUsuari::insereix()
{
    string temp = "INSERT INTO Usuari (correu_electronic, contrasenya, nom, tipus) VALUES ('" + _correuElectronic + "', '" + _contrasenya + "', '" + _nom + "', '" + _tipus + "')";
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
        throw ex;
	}
    finally {
        // si tot va bé es tanca la connexió
        conn->Close();
    }
}

void PassarelaUsuari::modifica()
{
    string temp = "UPDATE Usuari SET "
        "contrasenya = '" + _contrasenya + 
        "', nom = '" + _nom + 
        "' WHERE correu_electronic = '" + _correuElectronic + "'";

    String^ sql = gcnew String(temp.c_str());


    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection(); // Necessites un getter per accedir a la connexió

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    try {
        // obrim la connexió
        conn->Open();
        // executem la comanda creada abans del try
        cmd->ExecuteNonQuery();
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

void PassarelaUsuari::modifica(string NouCorreuElectronicU)
{

    string temp = "UPDATE Usuari SET correu_electronic = '" + NouCorreuElectronicU +
        "', contrasenya = '" + _contrasenya +
        "', nom = '" + _nom +

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
        int rowsAffected = cmd->ExecuteNonQuery();

        if (rowsAffected > 0) {
            setCorreuElectronic(NouCorreuElectronicU); // solo si se actualizó correctamente
        }
        else {
            MessageBox::Show("No se ha encontrado el usuario.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
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

void PassarelaUsuari::esborra()
{
    string temp = "DELETE FROM Usuari WHERE correu_electronic = '" + _correuElectronic + "'";
    String^ sql = gcnew String(temp.c_str());

    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection(); // Necessites un getter per accedir a la connexió

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    try {
        // obrim la connexió
        conn->Open();
        // executem la comanda creada abans del try
        cmd->ExecuteNonQuery();
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
