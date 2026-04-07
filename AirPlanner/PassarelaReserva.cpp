#include "pch.h"
#include "PassarelaReserva.h"

PassarelaReserva::PassarelaReserva() {}

PassarelaReserva::PassarelaReserva(int seientFila, char seientColumna, string idVol, string correuClient, string tipusEquipatge, string nomPassatger, string genere, string dataNaixement, float preuReserva) {

    _seientFila = seientFila;
    _seientColumna = seientColumna;
    _idVol = idVol;
    _correuClient = correuClient;
    _tipusEquipatge = tipusEquipatge;
    _nomPassatger = nomPassatger;
    _genere = genere;
    _dataNaixement = dataNaixement;
    _preuReserva = preuReserva;
}

PassarelaReserva::~PassarelaReserva() {

}

int PassarelaReserva::obteSeientFila() const {
    return _seientFila;
}
char PassarelaReserva::obteSeientColumna() const {
    return _seientColumna;
}
string PassarelaReserva::obteIdVol() const {
    return _idVol;
}
string PassarelaReserva::obteCorreuClient() const {
    return _correuClient;
}
string PassarelaReserva::obteTipusEquipatge() const {
    return _tipusEquipatge;
}
string PassarelaReserva::obteNomPassatger() const {
    return _nomPassatger;
}
string PassarelaReserva::obteGenere() const {
    return _genere;
}
string PassarelaReserva::obteDataNaixement() const {
    return _dataNaixement;
}
float PassarelaReserva::obtePreuReserva() const {
    return _preuReserva;
}
int PassarelaReserva::obteSeientFilaAnt() const {
    return _seientFilaAnt;
}
char PassarelaReserva::obteSeientColumnaAnt() const {
    return _seientColumnaAnt;
}


void PassarelaReserva::setSeientFila(int seientFila) {
    _seientFila = seientFila;
}
void PassarelaReserva::setSeientColumna(char seientColumna) {
    _seientColumna = seientColumna;
}
void PassarelaReserva::setIdVol(string idVol) {
    _idVol = idVol;
}
void PassarelaReserva::setCorreuElectronic(string correuClient) {
    _correuClient = correuClient;
}
void PassarelaReserva::setTipusEquipatge(string tipusEquipatge) {
    _tipusEquipatge = tipusEquipatge;
}
void PassarelaReserva::setNomPassatger(string nomPassatger) {
    _nomPassatger = nomPassatger;
}
void PassarelaReserva::setGenere(string genere) {
    _genere = genere;
}
void PassarelaReserva::setDataNaixement(string dataNaixement) {
    _dataNaixement = dataNaixement;
}
void PassarelaReserva::setPreuReserva(float preuReserva) {
    _preuReserva = preuReserva;
}
void PassarelaReserva::setSeientFilaAnt(int seientFilaAnt) {
    _seientFilaAnt = seientFilaAnt;
}
void PassarelaReserva::setSeientColumnaAnt(char seientColumnaAnt) {
    _seientColumnaAnt = seientColumnaAnt;
}

void PassarelaReserva::insereix() {

    string temp = "INSERT INTO Reserva (seientFila, seientColumna, idVol, correuClient, tipusEquipatge, nomPassatger, genere, dataNaixement, preuReserva) VALUES ('" + to_string(_seientFila) + "', '" + _seientColumna + "', '" + _idVol + "', '" + _correuClient + "', '" + _tipusEquipatge + "', '" + _nomPassatger + "', '" + _genere + "', '" + _dataNaixement + "', '" + to_string(_preuReserva) + "')";
    String^ sql = gcnew String(temp.c_str());

    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection();

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    try {
        // Abrir la conexión
        conn->Open();
        // Ejecutar la consulta de inserción
        cmd->ExecuteNonQuery(); // Usamos ExecuteNonQuery ya que no esperamos un Reader
    }
    catch (Exception^ ex) {
        if (ex->Message->Contains("duplicate-entry") || ex->Message->Contains("clave duplicada") || ex->Message->Contains("Duplicate entry")) {
            throw gcnew System::Exception("Aquest seient ja ha estat reservat per un altre usuari. Si us plau, prova a tornar a reservar seleccionant un altre seient.");
        }
        else {
            throw gcnew System::Exception(ex->Message);
        }
    }
    finally {
        // Cerrar la conexión si no hubo excepciones
        conn->Close();
    }
}

void PassarelaReserva::modifica() {

    string temp = "UPDATE Reserva SET tipusEquipatge = '" + _tipusEquipatge +
        "', nomPassatger = '" + _nomPassatger +
        "', genere = '" + _genere +
        "', dataNaixement = '" + _dataNaixement +
        "', preuReserva = " + to_string(_preuReserva) + // Sin comillas para float
        ", seientFila = " + to_string(_seientFila) + // Sin comillas para int
        ", seientColumna = '" + _seientColumna + "'" +
        ", correuClient = '" + _correuClient + "'" +
        " WHERE idVol = '" + _idVol +
        "' AND seientFila = " + to_string(_seientFilaAnt) + // Sin comillas para int
        " AND seientColumna = '" + _seientColumnaAnt + "'";

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
        if (ex->Message->Contains("duplicate-entry") || ex->Message->Contains("clave duplicada") || ex->Message->Contains("Duplicate entry")) {
            throw gcnew System::Exception("Aquest seient ja ha estat reservat per un altre usuari. Si us plau, prova a tornar a reservar seleccionant un altre seient.");
        }
        else {
            throw gcnew System::Exception(ex->Message);
        }
    }
    finally {
        // si tot va bé es tanca la connexió
        conn->Close();
    }
}
void PassarelaReserva::esborra() {

    string temp = "DELETE FROM Reserva WHERE idVol = '" + _idVol +
        //"' AND correuClient = '" + _correuClient +
        "' AND seientFila = '" + to_string(_seientFila) +
        "' AND seientColumna = '" + _seientColumna + "'";
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