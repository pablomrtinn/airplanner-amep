#include "pch.h"
#include "CtrlReservarVol.h"

CtrlReservarVol::CtrlReservarVol() { }

CtrlReservarVol::~CtrlReservarVol() { }

int CtrlReservarVol::ocupacioVol(string idVol) {

	int num_seients_no_ocupats = 0;
	vector<PassarelaReserva> reserves;
	CercadoraReserva cercadoraReserva;
	reserves = cercadoraReserva.cercaReservaPerVol(idVol);

	// treure seients i columnes del vol 
	CercadoraVol cercaVol;
	PassarelaVol vol;
	vol = cercaVol.cercaVolPerId(idVol);
	string model = vol.obteModelAvio(); //tenim el model d'Avió
	CercadoraModelsAvio cercadoraModelAvio;
	PassarelaModelsAvio modelAvio;
	modelAvio = cercadoraModelAvio.cercaModelAvio(model); // cerquem la passarela 
	int files = modelAvio.obteFiles();
	int columnes = modelAvio.obteColumnes();
	
	vector<vector<bool>> matriuSeients(files, vector<bool>(columnes, false)); // Inicialitza la matriu amb false
	if (files != 0 && columnes != 0) {
		
		int mida = reserves.size();
		for (int i = 0; i < mida; ++i) {
			
			int fila = reserves[i].obteSeientFila();
			char columna = reserves[i].obteSeientColumna();
			columna = int(columna) - 65;
			matriuSeients[fila][columna] = true;
		}
		
		for (int i = 0; i < files; ++i) {
			for (int j = 0; j < columnes; ++j) {
				if (matriuSeients[i][j] == false) {
					num_seients_no_ocupats++;
				}
			}
		}
	}
	else {
		
		//num_seients_no_ocupats = 0;
	}
	matriu = matriuSeients;

	return num_seients_no_ocupats;
}

void CtrlReservarVol::reservarVol(int seientFila, char seientColumna, string idVol, string correuClient, string tipusEquipatge, string nomPassatger, string genere, string dataNaixement, float preuReserva) {
	//como saco yo idVol?
	/*PassarelaClient client;
	CercadoraClient cercaClient;
	client = cercaClient.cercaClient(correuClient);
	if (client.obteCorreuClient() == "") {

		throw gcnew Exception("Error: El correu electrònic no existeix.");
	}
	PassarelaVol vol;
	CercadoraVol cercadoraVol;
	vol = cercadoraVol.cercaVolPerId(idVol);
	if (vol.obteIdVol() != "") {

		throw gcnew Exception("Error: El número identificador de vol no existeix.");
	}*/

	PassarelaReserva reserva(seientFila, seientColumna, idVol, correuClient, tipusEquipatge, nomPassatger, genere, dataNaixement, preuReserva);
	reserva.insereix();
	bitllets.push_back(DTOReservesClient(seientFila, seientColumna, idVol, correuClient, tipusEquipatge, nomPassatger, "", "", "", preuReserva));
}
vector<vector<bool>> CtrlReservarVol::matriuSeients(string idVol) {

	/*
	vector<PassarelaReserva> reserves;
	CercadoraReserva cercadoraReserva;
	reserves = cercadoraReserva.cercaReservaPerVol(idVol);

	// treure seients i columnes del vol 
	CercadoraVol cercaVol;
	PassarelaVol vol;
	vol = cercaVol.cercaVolPerId(idVol);
	string model = vol.obteModelAvio(); //tenim el model d'Avió
	CercadoraModelsAvio cercadoraModelAvio; 
	PassarelaModelsAvio modelAvio;
	modelAvio = cercadoraModelAvio.cercaModelAvio(model); // cerquem la passarela 
	int files = modelAvio.obteFiles(); 
	int columnes = modelAvio.obteColumnes();

	vector<vector<bool>> matriuSeients(files, vector<bool>(columnes, false)); // Inicialitza la matriu amb false
	if (files != 0 && columnes != 0) {
		
		int mida = reserves.size();
		for (int i = 0; i < mida; ++i) {

			int fila = reserves[i].obteSeientFila();
			char columna = reserves[i].obteSeientColumna();
			columna = int(columna) - 65; 
			matriuSeients[fila][columna] = true;
		}
	}
	else {
		cout << "No hi ha seients disponibles." << endl;
	}*/
	return matriu;
}

vector<DTOReservesClient> CtrlReservarVol::obteBitllets() const {
	return bitllets;
}

void CtrlReservarVol::enviarBitllets() {
	CercadoraVol cercaVol;
	PassarelaVol Vol = cercaVol.cercaVolPerIdDatesSenceres(bitllets.back().obteIdVol());

	DTOVol vol("", Vol.obteOrigen(), Vol.obteDesti(), Vol.obteSortidaPrevista(), Vol.obteArribadaPrevista(), "", "", 0, Vol.obteModelAvio(), Vol.obteCorreuAerolinia());

	CercadoraUsuari cercaUsuari;
	PassarelaUsuari usuari = cercaUsuari.cercaUsuari(Vol.obteCorreuAerolinia().c_str());
	DTOAerolinia aerolinia(usuari.obteNom(), "");
	
	System::String^ nomAerolinia = gcnew System::String(aerolinia.obteNom().c_str());

	System::DateTime sortida = System::DateTime::Parse(gcnew System::String(Vol.obteSortidaPrevista().c_str()));
	System::DateTime arribada = System::DateTime::Parse(gcnew System::String(Vol.obteArribadaPrevista().c_str()));
	System::DateTime embarcament = sortida.AddMinutes(-20);

	System::String^ dataEmbarcament = embarcament.ToString("dd-MM-yyyy HH:mm");
	System::String^ dataSortida = sortida.ToString("dd-MM-yyyy HH:mm");
	System::String^ dataArribada = arribada.ToString("dd-MM-yyyy HH:mm");

	System::String^ blauFosc = "#1e40af";

	while (!bitllets.empty()) {
		DTOReservesClient bitllet = bitllets.back();

		System::String^ remitent = "infoairplanner@gmail.com";
		System::String^ contrasenya = "lijbvnvehpiglwky";

		int fila = bitllet.obteSeientFila();
		System::String^ seientFila = fila.ToString();

		char col = bitllet.obteSeientColumna();
		System::String^ seientColumna = gcnew System::String((gcnew System::String((char*)&col))->Substring(0, 1));

		System::String^ idVol = gcnew System::String(bitllet.obteIdVol().c_str());
		System::String^ correuClient = gcnew System::String(bitllet.obteCorreuClient().c_str());
		System::String^ tipusEquipatge = gcnew System::String(bitllet.obteTipusEquipatge().c_str());
		System::String^ nomPassatger = gcnew System::String(bitllet.obteNomPassatger().c_str());

		System::String^ origen = gcnew System::String(vol.obteOrigen().c_str());
		System::String^ desti = gcnew System::String(vol.obteDesti().c_str());

		System::String^ modelAvio = gcnew System::String(Vol.obteModelAvio().c_str());
		System::String^ correuAerolinia = gcnew System::String(Vol.obteCorreuAerolinia().c_str());

		System::String^ textBarres = "Vol:" + idVol + ";Seient:" + seientFila + seientColumna;
		System::String^ urlBarres = "https://bwipjs-api.metafloor.com/?bcid=code128&text=" + System::Net::WebUtility::UrlEncode(textBarres) + "&scale=3";

		System::String^ blauSuau = "#005bea";
		System::String^ cos =
			"<html>"
			"<body style='margin:0; padding:10px; background:#e0e7ff; font-family:Segoe UI, sans-serif;'>"

			// Missatge a sobre del bitllet, amb més espai per separació
			"<div style='width:600px; margin:0 auto 20px auto; font-size:13px; color:#333; text-align:left;'>"
			"Benvingut a bord! Aquest és el teu bitllet electrònic. Conté tota la informació del vol i el codi de barres necessari per embarcar. Revisa’l amb atenció i tingues-lo a mà el dia del vol."
			"</div>"

			"<table align='center' cellpadding='0' cellspacing='0' width='600' style='background:white; border-radius:10px; overflow:hidden; box-shadow:0 3px 8px rgba(0,0,0,0.1);'>"
			"<tr>"
			"<td style='background:" + blauSuau + "; color:white; padding:8px 15px; font-weight:bold; font-size:14px; text-transform:uppercase; letter-spacing:1px;'>"
			+ nomAerolinia + "</td>"
			"<td colspan='1' style='background:" + blauSuau + "; color:white; padding:8px 15px; text-align:right;'>"
			"<p style='margin:0; font-size:9px;'>Data d'embarcament</p>"
			"<h2 style='margin:0; font-size:14px;'>" + dataEmbarcament + "</h2>"
			"</td>"
			"</tr>"
			"<tr>"
			"<td colspan='2' style='padding:8px 15px 3px 15px; text-align:center; font-size:18px; font-weight:bold; color:" + blauSuau + ";'>"
			+ origen + " &#9992; " + desti +
			"</td>"
			"</tr>"
			"<tr><td colspan='2' style='padding:3px 15px 10px 15px;'>"
			"<table width='100%' cellpadding='3' cellspacing='0' style='font-size:11px; border-collapse: collapse;'>"
			"<tr style='border-bottom:1px solid #ccc;'><td><strong>Passatger</strong></td><td>" + nomPassatger + "</td><td><strong>Vol</strong></td><td>" + idVol + "</td></tr>"
			"<tr style='border-bottom:1px solid #ccc;'><td><strong>Sortida</strong></td><td>" + dataSortida + "</td><td><strong>Arribada</strong></td><td>" + dataArribada + "</td></tr>"
			"<tr style='border-bottom:1px solid #ccc;'><td><strong>Seient</strong></td><td>" + seientFila + seientColumna + "</td><td><strong>Equipatge</strong></td><td>" + tipusEquipatge + "</td></tr>"
			"<tr style='border-bottom:1px solid #ccc;'><td><strong>Avió</strong></td><td>" + modelAvio + "</td><td><strong>Contacte</strong></td><td>" + correuAerolinia + "</td></tr>"
			"</table>"
			"<div style='text-align:center; margin-top:10px;'>"
			"<img src='" + urlBarres + "' alt='Barcode' style='width:160px; height:auto;' />"
			"</div>"
			"</td></tr>"
			"<tr>"
			"<td colspan='2' style='background:" + blauSuau + "; text-align:center; color:white; padding:6px; font-size:9px;'>"
			"Gràcies per confiar en AirPlanner"
			"</td>"
			"</tr>"
			"</table>"

			// Missatge a sota del bitllet, amb més espai superior
			"<div style='width:600px; margin:20px auto 0 auto; font-size:12px; color:#555; text-align:left;'>"
			"Per a consultes generals pots respondre aquest correu. Per qüestions relacionades amb el vol, si us plau contacta amb l’aerolínia mitjançant el correu indicat al bitllet."
			"</div>"

			"</body>"
			"</html>";

		try {
			System::Net::Mail::MailMessage^ missatge = gcnew System::Net::Mail::MailMessage();
			missatge->From = gcnew System::Net::Mail::MailAddress(remitent);
			missatge->To->Add(correuClient);
			missatge->Subject = "AirPlanner – Bitllet de vol " + idVol;
			missatge->Body = cos;
			missatge->IsBodyHtml = true;
			missatge->BodyEncoding = System::Text::Encoding::UTF8;

			System::Net::Mail::SmtpClient^ smtp = gcnew System::Net::Mail::SmtpClient("smtp.gmail.com", 587);
			smtp->EnableSsl = true;
			smtp->Credentials = gcnew System::Net::NetworkCredential(remitent, contrasenya);
			smtp->Send(missatge);
		}
		catch (System::Exception^ ex) {
			System::Windows::Forms::MessageBox::Show("Error en enviar el correu: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		bitllets.pop_back();
	}
}




