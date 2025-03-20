#ifndef PAGINAWEB
#define PAGINAWEB

#include "string"
#include "Publicacion.h"
using namespace std;

class PaginaWeb : public Publicacion {
    private:
    string url;
    string contenidoExtraido;
    public:
    bool contienePalabra(string);
};
#endif
