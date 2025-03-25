#include "../include/Investigador.h"
#include "../include/Publicacion.h"

Investigador :: Investigador(string ORCID, string nombre, string institucion, vector<Publicacion*> publicaciones)
    : ORCID(ORCID), nombre(nombre), institucion(institucion), publicaciones(publicaciones) {};


string Investigador :: toString(){
    return ORCID + "->" + nombre + "/" + institucion ;  

}

set<string> Investigador :: listarPublicaciones(DTFecha desde, string palabra){
    set<string> aux;
    DTFecha* aux2 = new DTFecha(desde.getDia(),desde.getMes(),desde.getAnio());
    for(vector<Publicacion*> :: iterator it = publicaciones.begin(); it != publicaciones.end(); it++){
        DTFecha* fechaAux = (*it)->getFecha();
        if (fechaAux>=aux2){
            if ((*it)->contienePalabra(palabra)) {
                aux.insert(((*it)->getDoi()));
            }
        }
    }
    return aux;
}