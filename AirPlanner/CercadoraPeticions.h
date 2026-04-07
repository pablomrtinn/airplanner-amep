#ifndef CERCADORAPETICIONS_HPP
#define CERCADORAPETICIONS_HPP
#pragma once
#include "PassarelaPeticions.h"
#include <vector>
#include <stdexcept>


class CercadoraPeticions {
private:
    CercadoraPeticions();

public:

    static CercadoraPeticions& getInstance();

    ~CercadoraPeticions();

    vector<PassarelaPeticions> cercaPeticions(String^ CorreuAeroport);

	PassarelaPeticions cercaPeticio(String^ idVol, String^ DataSolicitud);

	vector<PassarelaPeticions> cercaEstatPeticions(String^ CorreuAerolinia);

};
#endif