#include "pch.h"
#include "PassarelaPeticions.h"
#include <msclr/marshal_cppstd.h>

PassarelaPeticions::PassarelaPeticions() {
    _idVol = "";
    _origen = "";
    _desti = "";
    _sortidaPrevista = "";
    _arribadaPrevista = "";
    _preu = 0.0;
    _modelAvio = "";
    _correuAerolinia = "";
    _correuAeroport = "";
	_dataSolicitud = "";
	_estat = "";
	_motiuResolucio = "";
	_dataResolucio = "";
}

PassarelaPeticions::PassarelaPeticions(string idVol, string origen, string desti, string datahoraSortida, string datahoraArribada, float preu, string modelAvio, string correuAerolinia, string correuAeroport, string dataSolicitud, string estat, string motiuResolucio, string dataResolucio) {
    _idVol = idVol;
    _origen = origen;
    _desti = desti;
    _sortidaPrevista = datahoraSortida;
    _arribadaPrevista = datahoraArribada;
    _preu = preu;
    _modelAvio = modelAvio;
    _correuAerolinia = correuAerolinia;
    _correuAeroport = correuAeroport;
	_dataSolicitud = dataSolicitud;
	_estat = estat;
	_motiuResolucio = motiuResolucio;
	_dataResolucio = dataResolucio;
}

PassarelaPeticions::~PassarelaPeticions() {

}

string PassarelaPeticions::obteIdVol() const {
    return _idVol;
}
string PassarelaPeticions::obteOrigen() const {
    return _origen;
}
string PassarelaPeticions::obteDesti() const {
    return _desti;
}
string PassarelaPeticions::obteSortidaPrevista() const {
    return _sortidaPrevista;
}
string PassarelaPeticions::obteArribadaPrevista() const {
    return _arribadaPrevista;
}
float PassarelaPeticions::obtePreu() const {
    return _preu;
}
string PassarelaPeticions::obteModelAvio() const {
    return _modelAvio;
}
string PassarelaPeticions::obteCorreuAerolinia() const {
    return _correuAerolinia;
}
string PassarelaPeticions::obteCorreuAeroport() const {
    return _correuAeroport;
}
string PassarelaPeticions::obteDataSolicitud() const {
	return _dataSolicitud;
}
string PassarelaPeticions::obteEstat() const {
	return _estat;
}
string PassarelaPeticions::obteMotiuResolucio() const {
	return _motiuResolucio;
}
string PassarelaPeticions::obteDataResolucio() const {
	return _dataResolucio;
}

void PassarelaPeticions::setIdVol(string id) {
    _idVol = id;
}
void PassarelaPeticions::setOrigen(string origen) {
    _origen = origen;
}
void PassarelaPeticions::setDesti(string desti) {
    _desti = desti;
}
void PassarelaPeticions::setSortidaPrevista(string datahora) {
    _sortidaPrevista = datahora;
}
void PassarelaPeticions::setArribadaPrevista(string datahora) {
    _arribadaPrevista = datahora;
}
void PassarelaPeticions::setPreu(float preu) {
    _preu = preu;
}
void PassarelaPeticions::setModelAvio(string model) {
    _modelAvio = model;
}
void PassarelaPeticions::setCorreuAerolinia(string correuAerolinia) {
    _correuAerolinia = correuAerolinia;
}
void PassarelaPeticions::setCorreuAeroport(string correuAeroport) {
    _correuAeroport = correuAeroport;
}
void PassarelaPeticions::setDataSolicitud(string dataSolicitud) {
	_dataSolicitud = dataSolicitud;
}
void PassarelaPeticions::setEstat(string estat) {
	_estat = estat;
}
void PassarelaPeticions::setMotiuResolucio(string motiuResolucio) {
	_motiuResolucio = motiuResolucio;
}
void PassarelaPeticions::setDataResolucio(string dataResolucio) {
	_dataResolucio = dataResolucio;
}

void PassarelaPeticions::insereix()
{
	if (_dataResolucio == "") {
        _dataResolucio = "NULL";
	}
	else {
        _dataResolucio = "'" + _dataResolucio + "'";
	}
    string temp = "INSERT INTO Peticio (idVol, origen, desti, sortidaPrevista, arribadaPrevista, preu, modelAvio, correuAerolinia, correuAeroport, dataSolicitud, estat, motiuResolucio, dataResolucio) VALUES ('" + _idVol + "', '" + _origen + "', '" + _desti + "', '" + _sortidaPrevista + "', '" + _arribadaPrevista + "', '" + std::to_string(_preu) + "', '" + _modelAvio + "', '" + _correuAerolinia + "', '" + _correuAeroport + "', '" + _dataSolicitud + "', '" + _estat + "', '" + _motiuResolucio + "', " + _dataResolucio + ")";
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

void PassarelaPeticions::modifica()
{

    String^ sql = "UPDATE Peticio SET idVol = @idVol, origen = @origen, desti = @desti, "
        "sortidaPrevista = @sortidaPrevista, arribadaPrevista = @arribadaPrevista, "
        "preu = @preu, modelAvio = @modelAvio, correuAerolinia = @correuAerolinia, "
        "correuAeroport = @correuAeroport, dataSolicitud = @dataSolicitud, "
        "estat = @estat, motiuResolucio = @motiuResolucio, dataResolucio = @dataResolucio "
        "WHERE idVol = @idVol AND dataSolicitud = @dataSolicitud";

    // Crear la connexió
    ConnexioBD^ connexio = ConnexioBD::getInstance();
    MySqlConnection^ conn = connexio->getConnection(); // Necessites un getter per accedir a la connexió
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    // Afegir els paràmetres de manera segura
    cmd->Parameters->AddWithValue("@idVol", gcnew String(_idVol.c_str()));
    cmd->Parameters->AddWithValue("@origen", gcnew String(_origen.c_str()));
    cmd->Parameters->AddWithValue("@desti", gcnew String(_desti.c_str()));
    cmd->Parameters->AddWithValue("@sortidaPrevista", gcnew String(_sortidaPrevista.c_str()));
    cmd->Parameters->AddWithValue("@arribadaPrevista", gcnew String(_arribadaPrevista.c_str()));
    cmd->Parameters->AddWithValue("@preu", _preu);
    cmd->Parameters->AddWithValue("@modelAvio", gcnew String(_modelAvio.c_str()));
    cmd->Parameters->AddWithValue("@correuAerolinia", gcnew String(_correuAerolinia.c_str()));
    cmd->Parameters->AddWithValue("@correuAeroport", gcnew String(_correuAeroport.c_str()));
    cmd->Parameters->AddWithValue("@dataSolicitud", gcnew String(_dataSolicitud.c_str()));
    cmd->Parameters->AddWithValue("@estat", gcnew String(_estat.c_str()));
    cmd->Parameters->AddWithValue("@motiuResolucio", gcnew String(_motiuResolucio.c_str()));
    cmd->Parameters->AddWithValue("@dataResolucio", gcnew String(_dataResolucio.c_str()));

    MySqlDataReader^ dataReader;

    try {
        // Obrim la connexió
        conn->Open();
        // Executem la comanda
        dataReader = cmd->ExecuteReader();
    }
    catch (Exception^ ex) {
        // Mostrem l'error si hi ha algun problema
        MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        // Tancar la connexió
        conn->Close();
    }
}

void PassarelaPeticions::esborra()
{
    string temp = "DELETE FROM Peticio WHERE idVol = '" + _idVol + "' AND dataSolicitud = '" + _dataSolicitud + "'";
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
