#ifndef CONNEXIOBD_HPP
#define CONNEXIOBD_HPP
#pragma once

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
#include <mysql_connection.h>
#include <mysql_driver.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;
using namespace std;
using namespace System;
using namespace System::Windows::Forms;

ref class ConnexioBD
{
private:
    static ConnexioBD^ instancia = nullptr;
    sql::mysql::MySQL_Driver* driver;
    sql::Connection* con;
    MySqlConnection^ conn;

    String^ _dbname;
    String^ _user;
    String^ _password;
    String^ _hostaddr;
    String^ _port;

    // Constructor privado para Singleton
    ConnexioBD();

public:
    // Método para obtener la única instancia
    static ConnexioBD^ getInstance();

    // Destructor
    ~ConnexioBD();

    MySqlConnection^ getConnection();

    // Inicializar atributos de conexión
    //void inicialitzar_atributs(String^ dbname, String^ user, String^ password, String^ hostaddr, String^ port);

    // Método para ejecutar consultas (SELECT)
    DataTable^ executarConsulta(String^ consultaSQL);


    // Método para ejecutar comandos (INSERT, UPDATE, DELETE)
    void executarComanda(String^ comandaSQL);

};
#endif