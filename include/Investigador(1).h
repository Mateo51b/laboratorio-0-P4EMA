#ifndef INVESTIGADOR
#define INVESTIGADOR
#include <string>
#include <vector>
#include <set>
#include <map>
#include <vector>
#include "Publicacion.h"
#include "DTFecha.h"
using namespace std;

#include "../include/DTFecha.h"
#include "Publicacion.h"

class Investigador{
private:
    string ORCID;
    string nombre;
    string institucion;
    vector <Publicacion*> publicaciones;

public:
    string toString();
    set<string> listarPublicaciones(DTFecha desde, string palabras);

    Investigador(string ORCID, string nombre, string institucion, vector<Publicacion*> publicaciones);
    ~Investigador();
};

#endif