#include "../include/ArticuloRevista.h"


bool ArticuloRevista::contienePalabra(string s) {
    return extracto.find(s) != string::npos;
};