#pragma once
#include <stack>
#include <Windows.h> // para usar System::Windows::Forms::Form si usas C++/CLI? Si no, ignora
using namespace System::Collections::Generic;
using namespace System;
using namespace System::Windows::Forms;

public ref class Launcher
{
private:
    static Launcher^ _ins = nullptr;

    // Constructor privado
    Launcher();

public:
    static property Launcher^ Instance {
        Launcher^ get();

    }

    Stack<Form^>^ formStack;
};