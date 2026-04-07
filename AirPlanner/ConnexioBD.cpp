#include "pch.h"
#include "ConnexioBD.h"

ConnexioBD::ConnexioBD()
{


    String^ connectionString = "Server=ubiwan.epsevg.upc.edu;Port=3306;Database=amep08;Uid=amep08;Pwd=ahsohChoo2eYuj;";

    conn = gcnew MySqlConnection(connectionString); // Asigna la conexi�n a la variable miembro
}

ConnexioBD^ ConnexioBD::getInstance()
{
    if (instancia == nullptr) {
        instancia = gcnew ConnexioBD();
    }
    return instancia;
}

ConnexioBD::~ConnexioBD()
{
    if (conn != nullptr) {
        delete conn;
    }
}

MySqlConnection^ ConnexioBD::getConnection() {

    return conn;
}
/*
    void ConnexioBD::inicialitzar_atributs(String^ dbname, String^ user, String^ password, String^ hostaddr, String^ port)
    {
        _dbname = dbname;
        _user = user;
        _password = password;
        _hostaddr = hostaddr;
        _port = port;

        String^ connectionString = "Server=" + _hostaddr + ";Port=" + _port + ";Database=" + _dbname +
            ";Uid=" + _user + ";Pwd=" + _password + ";";

        conn = gcnew MySqlConnection(connectionString);
    }
*/
DataTable^ ConnexioBD::executarConsulta(String^ consultaSQL)
{
    DataTable^ dt = gcnew DataTable();
    try {
        MySqlCommand^ cmd = gcnew MySqlCommand(consultaSQL, conn);
        MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
        adapter->Fill(dt);
    }
    catch (Exception^ ex) {
        Console::WriteLine("Error: " + ex->Message);
    }
    return dt;
}

void ConnexioBD::executarComanda(String^ comandaSQL)
{
    try {
        MySqlCommand^ cmd = gcnew MySqlCommand(comandaSQL, conn);
        conn->Open();
        cmd->ExecuteNonQuery();
        conn->Close();

    }
    catch (Exception^ ex) {
        MessageBox::Show("ConnexioBD");
        Console::WriteLine("Error: " + ex->Message);
    }
}
