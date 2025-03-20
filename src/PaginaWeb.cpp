#include "../include/PaginaWeb.h"

bool PaginaWeb::contienePalabra(string s) {
    return contenidoExtraido.find(s) != string::npos;
}