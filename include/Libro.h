#ifndef Libro
#define Libro
#include "string"
#include "Publicacion.h"
#include <set>

using namespace std;
class Libro : public Publicacion {
    private:
    string editorial;
    set<string> PalabrasDestacadas;

    public:
    bool contienePalabra(string);
};
#endif