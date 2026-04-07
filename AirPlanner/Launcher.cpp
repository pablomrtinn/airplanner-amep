#include "pch.h"
#include "Launcher.h"

Launcher::Launcher() {
    formStack = gcnew Stack<Form^>();
}

Launcher^ Launcher::Instance::get() {
    if (_ins == nullptr) {
        _ins = gcnew Launcher();
    }
    return _ins;
}