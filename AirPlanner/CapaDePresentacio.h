#ifndef CAPADEPRESENTACIO_HPP
#define CAPADEPRESENTACIO_HPP
#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
using namespace std;

#include "AirPlannerSingleton.h" 
#include "ConnexioBD.h"
#include "PassarelaUsuari.h"
#include "PassarelaClient.h" 
#include "TxIniciSessio.h"
#include "TxRegistrarClient.h"     
#include "TxRegistrarAeroport.h"
#include "TxTancarSessio.h"
#include "TxEsborraUsuari.h"
#include "TxEsborraTreballador.h"
#include "TxEsborraUsuari.h"
#include "TxCrearPeticioVol.h"
#include "TxRegistrarTreballador.h"
#include "txConsultaClient.h"
#include "TxConsultaVolsReservatsClient.h"
#include "CtrlModificaClient.h"
#include "CtrlModificaReserva.h"
#include "CtrlReservarVol.h"
#include "DTOClient.h"
#include "DTOReservesClient.h"
#include "TxRegistrarAerolinia.h"
#include "CtrlModificaTreballador.h"
#include "CtrlModificaVol.h"
#include "PassarelaTreballador.h"
#include "TxConsultarTreballadorsAeroport.h"
#include "TxEsborraVol.h"
#include "TxConsultarPeticions.h"
#include "TxDenegarPeticio.h"
#include "TxAprovarPeticio.h"
#include "TxConsultarEstatPeticions.h"
#include <msclr/marshal.h>
#include "TxConsultaVolsAerolinia.h"
#include "TxConsultaVolsAeroport.h"
#include "TxBuscarVols.h"
#include "TxObteFiltresBuscaVols.h"
#include "CtrlModificaAerolinia.h"
#include "TxConsultarInfoVol.h"
#include "TxModificarEstatVol.h"
#include "DTOInfoVol.h"
#include "TxOblitContrasenya.h"
#include "TxConsultaReservesVol.h"
#include "TxEsborraAeroport.h"
#include "CtrlModificaReservaVol.h"
#include "CtrlModificaAeroport.h"
#include "TxEsborraAerolinia.h"
#include <msclr/marshal_cppstd.h>
#include "TxConsultaAeroport.h"
#include "DTOAeroport.h"
#include "TxConsultaAerolinia.h"
#include "TxCancelarReserva.h"
#include "CtrlModificaSubscripcio.h"

using namespace msclr::interop;
using namespace std;

class CapaDePresentacio {
private:
    static CapaDePresentacio* ins;

    CapaDePresentacio();

public:
    static CapaDePresentacio& getInstance();

    string processarIniciarSessio(string Correo, string contra); // inicia sessió per tot els usuaris
    void processarTancarSessio();

    DTOClient processarConsultaClient();

    void processarRegistrarClient(string nom, string correu, string contrasenya, string dataNaixement, string modalitatSub);

    void processarModificaClient(string valor1, string valor2,string valor3, string valor4);
    
    void processarEsborraClient(string contrasenya, string correu);

	  void processarRegistrarAerolinia (string correu, string contrasenya, string nom);

	  void processarRegistrarAeroport(string correu, string nom, string contrasenya, string pais, string sigles);

    void processarModificarAerolinia(string NouCorreu_Electronic, string Correu_Electronic, string Contrasenya, string nom, string ContraAdmin);

    vector<DTOVol> processarConsultaVolsAerolinia();

	  void processarEsborraTreballador(string contrasenya);

	//void processarRegistrarAeroport(string correu, string nom, string contrasenya);
  
    //Obtenim la informació de vols (first) i per cada vol el nom de l'aerolínia (second)
    pair<vector<DTOVol>, vector<string> > processarBuscarVols(string origen, string desti, string aerolinia, string dataSortida, float preu); 

    vector<DTOPeticions> processarConsultarPeticions();

	void processarDenegarPeticio(string idPeticio, string motiuResolucio, string dataSortida);

    void processarEsborraVol(string idVol);

    void processarModificaVol(string idVol, string origen, string desti, string sortidaP, string arribadaP, string sortidaA, string arribadaA, double preu, string modelAvio);

    void processarModificaTreballador(string correuElectronic, string contrasenya, string nom, string id, string correuAeroport);

	std::vector <PassarelaTreballador> processarConsultarTreballadorsAeroport();

    void processarReservarVol( vector<PassarelaReserva> reserves, vector<std::pair<int, char>>& seients );

    void processarAprovarPeticio(string idPeticio, string motiuResolucio, string dataSortida);

    vector<DTOEstatPeticions> processarConsultarEstatPeticions();

    //Per obtenir orígen, destí (first) i aerolínia (second)
	pair<vector<string>, vector<string>> processarObteFiltresBuscarVols(); 

    void processarModificarAeroport(string CorreuElectronicNOU, string CorreuElectronicVELL, string Contrasenya, string Nom, string Pais, string Siglas, string ContraAdmin);


    void processarRegistrarTreballador(string correu, string nom, string contrasenya, string id);

	DTOInfoVol processarConsultarEstatVol(std::string idVol);

	void processarModificaEstatVol(std::string dataHoraSortida, std::string dataHoraArribada, std::string idVol);

    std::vector<DTOAeroport> processarConsultaAeroport();

    void processarEsborraAeroport(string contrasenya, string sigles);

    vector<DTOReservesClient> processarConsultarVolsReservatsClient();

    vector<DTOVol> processarConsultaVolsAeroport();

    void processarCrearPeticioVol(string idVol, string origen, string desti, string sortidaPrevista, string arribadaPrevista, float preu, string modelAvio, string dataSolicitud);

    //Pre: --
    //Post: Retorna si hi ha una sessió iniciada.
    bool hiHaUsuari();

    std::vector<DTOAerolinia> processarConsultaAerolinia();

    void processarEsborraAerolinea(string contrasenya,string correu);


	  void processarOblitContrasenya(string correu, string contrasenya);

    void processarModificaReservaVol(string correuClient, int seientFilaAnt, char seientColAnt, vector<std::pair<int, char>>& seients, string idVol, string tipusEquipatge, string nom, string genere, string dataNeix, float preuReserva);

    vector<DTOReservesClient> processarConsultarReservesVols(string idVol);
  
    void processarModificaReserva(int seientFilaAnt, char seientColAnt, vector<std::pair<int, char>>& seients, string idVol, string tipusEquipatge, string nom, string genere, string dataNeix, float preuReserva);

    void processarCancelarReserva(string idVol, int seientFila, string seientColumna);

    void processatCtrlModificarSubscripcion(string CategoriaSubscripcion);

};
#endif
