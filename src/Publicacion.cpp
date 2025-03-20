#include "../include/Publicacion.h"
#include "../include/DTRefer.h"
#include "../include/DTFecha.h"


Publicacion::Publicacion(): fecha(), titulo(""),DOI("") {

}



Publicacion::~Publicacion() {

}

DTRefer Publicacion::getDT() {
    return DTRefer(this->DOI,this->titulo,this->fecha, this->autores);
}


bool Publicacion::contienePalabra(string ) {  //Se define en ArticuloRevista, Libro y PaginaWeb
    return false;
}
DTFecha Publicacion :: getFecha(){
    return this->fecha;
}
string Publicacion :: getDoi(){
    return this->DOI;
}