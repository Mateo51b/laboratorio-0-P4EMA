#ifndef ARTICULOREVISTA_H
#define ARTICULOREVISTA_H

#include <string>
#include "Publicacion.h"

using namespace std;

class ArticuloRevista : public Publicacion {  
    private:
        string revista;
        string extracto;
    public:
        bool contienePalabra(string);
};

#endif