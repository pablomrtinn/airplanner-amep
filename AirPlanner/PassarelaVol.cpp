#include "pch.h"
#include "PassarelaVol.h"


PassarelaVol::PassarelaVol(){
    _idVol = "";
    _origen = "";
    _desti = "";
    _sortidaPrevista = "";
    _arribadaPrevista = "";
    _sortidaActualitzada = "";
    _arribadaActualitzada = "";
    _preu = 0.0;
    _modelAvio = "";
    _correuAerolinia = "";
}

PassarelaVol::PassarelaVol(string idVol, string origen, string desti, string datahoraSortida, string datahoraArribada, string sortidaActualitzada, string arribadaActualitzada, float preu, string modelAvio, string correuAerolinia){
    _idVol = idVol;
    _origen = origen;
    _desti = desti;
    _sortidaPrevista = datahoraSortida;
    _arribadaPrevista = datahoraArribada;
    _sortidaActualitzada = sortidaActualitzada;
    _arribadaActualitzada = arribadaActualitzada;
    _preu = preu;
    _modelAvio = modelAvio;
    _correuAerolinia = correuAerolinia;
}

PassarelaVol::~PassarelaVol(){

}

string PassarelaVol::obteIdVol() const{
    return _idVol;
}
string PassarelaVol::obteOrigen() const{
    return _origen;
}
string PassarelaVol::obteDesti() const{
    return _desti;
}
string PassarelaVol::obteSortidaPrevista() const{
    return _sortidaPrevista;
}
string PassarelaVol::obteArribadaPrevista() const{
    return _arribadaPrevista;
}
string PassarelaVol::obteSortidaActualitzada() const{
    return _sortidaActualitzada;
}
string PassarelaVol::obteArribadaActualitzada() const{
    return _arribadaActualitzada;
}
float PassarelaVol::obtePreu() const{
    return _preu;
}
string PassarelaVol::obteModelAvio() const{
    return _modelAvio;
}
string PassarelaVol::obteCorreuAerolinia() const{
    return _correuAerolinia;
}

void PassarelaVol::setIdVol(string id){
    _idVol = id;
}
void PassarelaVol::setOrigen(string origen){
    _origen = origen;
}
void PassarelaVol::setDesti(string desti){
    _desti = desti;
}
void PassarelaVol::setSortidaPrevista(string datahora){
    _sortidaPrevista = datahora;
}
void PassarelaVol::setArribadaPrevista(string datahora){
    _arribadaPrevista = datahora;
}
void PassarelaVol::setSortidaActualitzada(string datahora){
    _sortidaActualitzada = datahora;
}
void PassarelaVol::setArribadaActualitzada(string datahora){
    _arribadaActualitzada = datahora;
}
void PassarelaVol::setPreu(float preu){
    _preu = preu;
}
void PassarelaVol::setModelAvio(string model){
    _modelAvio = model;
}
void PassarelaVol::setCorreuAerolinia(string correu){
    _correuAerolinia = correu;
}

void PassarelaVol::insereix()
{
    string temp = "INSERT INTO Vol (idVol, origen, desti, sortidaPrevista, arribadaPrevista, sortidaActualitzada, arribadaActualitzada, preu, modelAvio, correuAerolinia) VALUES ('" + _idVol + "', '" + _origen + "', '" + _desti + "', '" + _sortidaPrevista + "', '" + _arribadaPrevista + "', '" + _sortidaActualitzada + "', '" + _arribadaActualitzada + "', '" + std::to_string(_preu) + "', '" + _modelAvio + "', '" + _correuAerolinia + "')";
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
    finally {
        // si tot va bé es tanca la connexió
        conn->Close();
    }
}

void PassarelaVol::modifica()
{
    string temp = "UPDATE Vol SET origen = '" + _origen +
        "', desti = '" + _desti +
        "', sortidaPrevista = '" + _sortidaPrevista +
        "', arribadaPrevista = '" + _arribadaPrevista +
        "', sortidaActualitzada = '" + _sortidaActualitzada +
        "', arribadaActualitzada = '" + _arribadaActualitzada +
        "', preu = '" + std::to_string(_preu) +
        "', modelAvio = '" + _modelAvio +
        "', correuAerolinia = '" + _correuAerolinia +
        "' WHERE idVol = '" + _idVol + "'";

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

void PassarelaVol::esborra()
{
    string temp = "DELETE FROM Vol WHERE idVol = '" + _idVol + "'";
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