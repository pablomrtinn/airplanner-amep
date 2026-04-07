#include "pch.h"
#include "CapaDePresentacio.h"
#include "FormRegistrarAerolinia.h"

#include "MyForm.h"
#include "FormConsultaClient.h"
#include "FormCrearPeticio.h"
#include "FormRegistrarAeroport.h"
#include "FormIniciaSessio.h"
#include "FormAeroliniaIniciada.h"
#include "FormRegistrarClient.h"
#include "FormSenseSessio.h"
#include "FormBuscarVolPerAEstat.h"
#include "FormConsultaVolsReservatsClient.h"
#include "FormReservarVol.h"
#include "FormNumeroReserves.h"
#include "FormReservarPerClient.h"
#include "CapaDePresentacio.h"
#include <msclr/marshal_cppstd.h>
using namespace System;
#include "Form1.h"
// int main(array<System::String ^> ^args)
// {
//    return 0;
// }
#include "Launcher.h"
#include "MenuInicial.h"

using namespace System::Windows::Forms;
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Lanza el primer formulario

    Form^ currentForm = gcnew CppCLRWinFormsProject::Form1();
   // Launcher::Instance->formStack->Push(gcnew CppCLRWinFormsProject::Form1());
   Launcher::Instance->formStack->Push(gcnew AirPlanner::MenuInicial());
    //Launcher& Launcher = Launcher::getInstance();
    //Launcher.formStack.push(gcnew CppCLRWinFormsProject::Form1());
    while (Launcher::Instance->formStack->Count > 0)
    {

        currentForm = Launcher::Instance->formStack->Peek();
        Application::Run(currentForm);
    }

    return 0;
}

