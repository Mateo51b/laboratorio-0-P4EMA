#ifndef Publicacion
#define Publicacion
#include <string>
#include "DTFecha.h"
#include "DTRefer.h"
#include <map>
#include "Investigador.h"

using namespace std;

class Publicacion {
    private:
        string DOI;
        string titulo;
        DTFecha fecha;
        set<string> autores;
        

    public:
        Publicacion();


        // Metodos
        DTRefer getDT();
        DTFecha getFecha();
        string getDoi();
        virtual bool contienePalabra(string palabra ) = 0; // Abstracto
        virtual ~Publicacion();
        
};
#endif