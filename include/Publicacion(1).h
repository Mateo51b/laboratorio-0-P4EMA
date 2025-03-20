#include <string>
#include "../include/DTFecha.h"
using namespace std;
#include "../include/DTRefer.h"
#include <map>
#include "investigador.h"

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



