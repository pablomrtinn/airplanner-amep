#ifndef CERCADORACLIENT_HPP
#define CERCADORACLIENT_HPP
#pragma once
#include "PassarelaClient.h"
#include <vector>
#include <stdexcept>

class CercadoraClient {
private:


public:
    CercadoraClient();
    static CercadoraClient& getInstance();

    ~CercadoraClient();

    PassarelaClient cercaClient(String^ correuElectronicU);
};
#endif