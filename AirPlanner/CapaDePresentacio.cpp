#include "pch.h"
#include "CapaDePresentacio.h"

/*
*****************************************************
                   CONSTRUCTORS
*****************************************************
*/

CapaDePresentacio& CapaDePresentacio::getInstance() {

    if (ins == nullptr) {
        ins = new CapaDePresentacio();
    }
	return *ins;
}

CapaDePresentacio* CapaDePresentacio::ins = nullptr;
CapaDePresentacio::CapaDePresentacio() {
}

/*
*****************************************************
                   DESTRUCTORS
*****************************************************
*/


/*
*****************************************************
                   MODIFICADORS
*****************************************************
*/


string CapaDePresentacio::processarIniciarSessio(std::string correu, std::string contra)
{
    TxIniciSessio a (correu, contra);
    a.executar();
    AirPlannerSingleton& Airplanner = AirPlannerSingleton::getInstance();
	PassarelaUsuari* usuari = Airplanner.obteUsuari();
    string tipus = usuari->obtetipus();
    return tipus;
}

void CapaDePresentacio::processarTancarSessio(){
    TxTancarSessio txTancarSessio;
    txTancarSessio.executar();
}

void CapaDePresentacio::processarRegistrarClient(string nom, string correu, string contrasenya, string dataNaixement, string modalitatSub)
{
    try {

        TxRegistrarClient tx(nom, correu, contrasenya, dataNaixement, modalitatSub);
        tx.executa();
    }
    catch (const sql::SQLException& e) {

        std::string errorMsg = e.what();
        if (errorMsg.find("Duplicate entry") != std::string::npos) {

            if (errorMsg.find("PRIMARY") != std::string::npos) {

                std::cout << "Error: El sobrenom ja esta agafat. Si us plau, tria un altre." << std::endl;
            }
            else if (errorMsg.find("UNIQUE") != std::string::npos) {

                std::cout << "Error: El correu electronic ja esta registrat. Si us plau, prova amb un altre." << std::endl;
            }
            else {

                std::cout << "Error: " << errorMsg << std::endl;
            }
        }
        else {

            // Mostrar el error original si no es pot personalitzar
            std::cout << "Error: " << errorMsg << std::endl;
        }
        std::cout << std::endl;
    }
}

DTOClient CapaDePresentacio::processarConsultaClient()
{
    TxConsultaClient txConsultaClient;
    txConsultaClient.executar();
    DTOClient resultat = txConsultaClient.obteClient();
	return resultat;
}

void CapaDePresentacio::processarModificaClient(string valor1, string valor2, string valor3, string valor4)
{
    CtrlModificaClient ctrlModificaClient;
    ctrlModificaClient.modificaClient(valor1, valor2, valor3, valor4);
}

void CapaDePresentacio::processarEsborraClient(string contrasenya, string correu)
{
    TxEsborraUsuari txEsborraUsuari(contrasenya, correu);
    txEsborraUsuari.executar();
}

void CapaDePresentacio::processarRegistrarAeroport(std::string correu, std::string nom, std::string contrasenya,std::string pais, std::string sigles)
{
    TxRegistrarAeroport tx(correu, nom, contrasenya, pais, sigles);
    tx.executa();
}

void CapaDePresentacio::processarRegistrarAerolinia(string correu, string contrasenya, string nom)
{
    TxRegistrarAerolinia registraAerolinia(correu, contrasenya, nom);
    registraAerolinia.executar();
}

void CapaDePresentacio::processarModificaTreballador(string correuElectronic, string contrasenya, string nom, string id, string correuAeroport) {
    try {
        CtrlModificaTreballador modTreb;
        modTreb.modificaTreballador(correuElectronic, contrasenya, nom, id, correuAeroport);
    } 
    catch (Exception^ ex) {
        throw ex;
	}
}

void CapaDePresentacio::processarModificaVol(string idVol, string origen, string desti, string sortidaP, string arribadaP, string sortidaA, string arribadaA, double preu, string modelAvio) {
	CtrlModificaVol modVol;
	modVol.modificaVol(idVol, origen, desti, sortidaP, arribadaP, sortidaA, arribadaA, preu, modelAvio);
}

void CapaDePresentacio::processarEsborraVol(string idVol)
{
        TxEsborraVol tx(idVol);
        tx.executar();
}

void CapaDePresentacio::processarEsborraTreballador(string correu) 
{
    try {
        TxEsborraTreballador tx(correu);
        tx.executar();
    }
    catch (Exception^ ex) {
        throw ex;
    }
}

void CapaDePresentacio::processarReservarVol(vector<PassarelaReserva> reserves, vector<std::pair<int, char>>& seients)
{
    CtrlReservarVol reserva;

	for (int i = 0; i < reserves.size(); ++i) {
		reserva.reservarVol(seients[i].first, seients[i].second, reserves[i].obteIdVol(), reserves[i].obteCorreuClient(), reserves[i].obteTipusEquipatge(), reserves[i].obteNomPassatger(), reserves[i].obteGenere(), reserves[i].obteDataNaixement(), reserves[i].obtePreuReserva());
	}
	reserva.enviarBitllets();
}

vector<DTOPeticions> CapaDePresentacio::processarConsultarPeticions() {
    TxConsultarPeticions txConsultarPeticions;
    txConsultarPeticions.executar();
	vector<DTOPeticions> peticions = txConsultarPeticions.obtePeticions();
	return peticions;
}

void CapaDePresentacio::processarDenegarPeticio(string idPeticio, string motiuResolucio, string dataSolicitud) {
	TxDenegarPeticio txDenegarPeticio(idPeticio, motiuResolucio, dataSolicitud);
	txDenegarPeticio.executar();
}

void CapaDePresentacio::processarAprovarPeticio(string idPeticio, string motiuResolucio, string dataSolicitud) {
    TxAprovarPeticio txAprovarPeticio(idPeticio, motiuResolucio, dataSolicitud);
    txAprovarPeticio.executar();
}

vector<DTOEstatPeticions> CapaDePresentacio::processarConsultarEstatPeticions() {
    TxConsultarEstatPeticions txConsultarEstatPeticions;
    txConsultarEstatPeticions.executar();
	vector<DTOEstatPeticions> peticions = txConsultarEstatPeticions.obtePeticions();
	return peticions;
}

void CapaDePresentacio::processarCrearPeticioVol(string idVol, string origen, string desti, string sortidaPrevista, string arribadaPrevista, float preu, string modelAvio, string dataSolicitud)
{
	// crear la cercadora per treure el correu de l'aeroport
	PassarelaUsuari *Aerolinia = AirPlannerSingleton::getInstance().obteUsuari();
    string correuAerolinia = Aerolinia->obteCorreuElectronic();
	CercadoraAeroport cercadoraAeroport;
    PassarelaAeroport aeroport;
    string correuAeroport = aeroport.obteCorreu();


	TxCrearPeticioVol tx(idVol, origen, desti, sortidaPrevista, arribadaPrevista, preu, modelAvio, correuAerolinia, correuAeroport, dataSolicitud, "Pendent", "", "");
    tx.executa();
}

void CapaDePresentacio::processarModificarAeroport(string CorreuElectronicNOU, string CorreuElectronicVELL, string Contrasenya, string Nom, string Pais, string Siglas, string ContraAdmin)
{
    ModificaAeroport mod = ModificaAeroport();
    mod.Modifica_Aeroport(CorreuElectronicNOU, CorreuElectronicVELL, Contrasenya, Nom, Pais, Siglas,ContraAdmin);
    mod.execute();
}

void CapaDePresentacio::processarEsborraAeroport(string contrasenya, string sigles) 
{
    TxEsborraAeroport::TxEsborraAeroport(contrasenya, sigles).executa();
}

DTOInfoVol CapaDePresentacio::processarConsultarEstatVol(std::string idVol) {
	TxConsultarInfoVol tx (idVol);
	tx.executar();
    DTOInfoVol vol = tx.obteInfoVol();
    return vol;
}

vector<DTOVol> CapaDePresentacio::processarConsultaVolsAeroport() {

    TxConsultaVolsAeroport tx;
    tx.executar();
    vector<DTOVol> vols = tx.obteVolsDTO();
    return vols;
}

void CapaDePresentacio::processarModificaEstatVol(std::string dataHoraSortida, std::string dataHoraArribada, std::string idVol) {
	TxModificarEstatVol tx(dataHoraSortida, dataHoraArribada, idVol);
	tx.executar();
}

bool CapaDePresentacio::hiHaUsuari(){
    PassarelaUsuari *usuari = AirPlannerSingleton::getInstance().obteUsuari();
    return (usuari != nullptr);
}

std::vector <PassarelaTreballador> CapaDePresentacio::processarConsultarTreballadorsAeroport() {
	TxConsultarTreballadorsAeroport tx;
	tx.executar();
	std::vector <PassarelaTreballador> treballadors = tx.obteTreballadors();
	return treballadors;
}

vector<DTOVol> CapaDePresentacio::processarConsultaVolsAerolinia() {
    AirPlannerSingleton& Airplanner = AirPlannerSingleton::getInstance();
    PassarelaUsuari* usuari = Airplanner.obteUsuari();
    string correuAerolinia = usuari->obteCorreuElectronic();

    TxConsultaVolsAerolinia txConsultaVolsAerolinia(correuAerolinia);
    txConsultaVolsAerolinia.executar();
    vector<DTOVol> volsDTO = txConsultaVolsAerolinia.obteVolsDTO();
	return volsDTO;
}

pair<vector<DTOVol>, vector<string> > CapaDePresentacio::processarBuscarVols(string origen, string desti, string aerolinia, string dataSortida, float preu) {
	pair<vector<DTOVol>, vector<string> > resultat;
    TxBuscarVols txBuscarVols(origen, desti, aerolinia, dataSortida, preu);
    txBuscarVols.executar();
    vector<DTOVol> volsDTO = txBuscarVols.obteVolsDTO();
	vector<string> nomsAeroliniesVols = txBuscarVols.obteNomsAeroliniesVols();
	resultat.first = volsDTO;
	resultat.second = nomsAeroliniesVols;
    return resultat;
}

pair<vector<string>, vector<string>> CapaDePresentacio::processarObteFiltresBuscarVols() {
	pair<vector<string>, vector<string>> resultat;
    TxObteFiltresBuscaVols txObteFiltresBuscaVols;
    txObteFiltresBuscaVols.executar();

    //Primer vector son les sigles, el segon s�n els noms de les Aerol�nies
	resultat.first = txObteFiltresBuscaVols.obteTotesSiglesAeroports();
	resultat.second = txObteFiltresBuscaVols.obteTotsNomsAerolinies();
    return resultat;
}

void CapaDePresentacio::processarRegistrarTreballador(string correu, string nom, string contrasenya, string id)
{
    TxRegistrarTreballador tx(correu, nom, contrasenya, id);
    tx.executa();
}
void CapaDePresentacio::processarModificarAerolinia(std::string NouCorreu_Electronic, std::string Correu_Electronic, std::string Contrasenya, std::string nom, std::string ContraAdmin)
{   
    CtrlModificaAerolinia ModificarAerolinia = CtrlModificaAerolinia();
    ModificarAerolinia.ModificaAerolinea(NouCorreu_Electronic,Correu_Electronic,Contrasenya,nom,ContraAdmin);
    ModificarAerolinia.executar();

}
std::vector<DTOAeroport> CapaDePresentacio::processarConsultaAeroport()
{
    std::vector<DTOAeroport> rest;
    ConsultaAeroport consult = ConsultaAeroport::ConsultaAeroport();
    rest = consult.ConsultarAeroport();
    return rest;
}

std::vector<DTOAerolinia> CapaDePresentacio::processarConsultaAerolinia() 
{
    std::vector<DTOAerolinia> rest;
    ConsultarAerolinia consult = ConsultarAerolinia::ConsultarAerolinia();
    rest = consult.ConsultaAerolinia();

    return rest;
}
void CapaDePresentacio::processarEsborraAerolinea(std::string contrasenya,std::string correu) 
{
    TxEsborraAerolinia tx (contrasenya,correu);
    tx.executa();
}

vector<DTOReservesClient> CapaDePresentacio::processarConsultarVolsReservatsClient() {

	TxConsultaVolsReservatsClient volsReservats;
    volsReservats.executa();
    vector<DTOReservesClient> reservesClient;
    reservesClient = volsReservats.obteReserves();
	return reservesClient;
}


void CapaDePresentacio::processarOblitContrasenya(string correu, string contrasenya) {
	TxOblitContrasenya tx(correu, contrasenya);
	tx.executar();
}

void CapaDePresentacio::processarModificaReservaVol(string correuClient, int seientFilaAnt, char seientColAnt, vector<std::pair<int, char>>& seients, string idVol, string tipusEquipatge, string nom, string genere, string dataNeix, float preuReserva) {

    CtrlModificaReservaVol ctrl;

    ctrl.modificarReserva(correuClient, seientFilaAnt, seientColAnt, seients[0].first, seients[0].second, idVol, tipusEquipatge, nom, genere, dataNeix, preuReserva);
}

vector<DTOReservesClient> CapaDePresentacio::processarConsultarReservesVols(string idVol) {
	
    TxConsultaReservesVol txConsultaReservesVol(idVol);
	txConsultaReservesVol.executa();
	vector<DTOReservesClient> reservesVol;
	reservesVol = txConsultaReservesVol.obteReserves();
	return reservesVol;
}

void CapaDePresentacio::processarModificaReserva(int seientFilaAnt, char seientColAnt, vector<std::pair<int, char>>& seients, string idVol, string tipusEquipatge, string nom, string genere, string dataNeix, float preuReserva){
    
    CtrlModificaReserva ctrl;

    ctrl.modificarReserva(seientFilaAnt, seientColAnt, seients[0].first, seients[0].second, idVol, tipusEquipatge, nom, genere, dataNeix, preuReserva);
}

void CapaDePresentacio::processarCancelarReserva(string idVol, int seientFila, string seientColumna) {
    string correuClient = AirPlannerSingleton::getInstance().obteUsuari()->obteCorreuElectronic();
    TxCancelarReserva txCancelarReserva(idVol, correuClient, seientFila, seientColumna);
    txCancelarReserva.executar();
}

void CapaDePresentacio::processatCtrlModificarSubscripcion(string CategoriaSubscripcion)
{
    ModificaSubscripcio Modsubs;
    Modsubs.Modifica_Subscripcio(CategoriaSubscripcion);
    Modsubs.execute();
}