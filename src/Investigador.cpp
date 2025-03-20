#include "../include/Investigador.h"

Investigador :: Investigador(string ORCID, string nombre, string institucion, vector<Publicacion*> publicaciones)
    : ORCID(ORCID), nombre(nombre), institucion(institucion), publicaciones(publicaciones) {};


string Investigador :: toString(){
    return ORCID + "->" + nombre + "/" + institucion ;  

}

set<string> Investigador :: listarPublicaciones(DTFecha desde, string palabra){
    set<string> aux;

    for(vector<Publicacion*> :: iterator it = publicaciones.begin(); it != publicaciones.end(); it++){
        DTFecha fechaAux = (*it)->getFecha();
        if (operatorMayor(fechaAux,desde)){
            if ((*it)->contienePalabra(palabra)) {
                aux.insert(((*it)->getDoi()));
            }
        }
    }
    return aux;
}