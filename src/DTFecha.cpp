#include "../include/DTFecha.h"
#include <string>
#include <sstream>


// Constructor
DTFecha::DTFecha(int dia, int mes, int año) {
this->dia = dia;
this->mes = mes;
this->anio = año;
}

// Getters
int DTFecha::getDia() {
    return this->dia;
}

int DTFecha::getMes() {
    return this->mes;
}

int DTFecha::getAnio() {
    return this->anio;
}

//Operaciones
bool operatorMayor(DTFecha& fecha1, DTFecha& fecha2) {
    if (fecha1.getAnio() > fecha2.getAnio()) {
        return true;
    } else if (fecha1.getAnio() == fecha2.getAnio()) {
        if (fecha1.getMes() > fecha2.getMes()) {
            return true;
        } else if (fecha1.getMes() == fecha2.getMes()) {
            if (fecha1.getDia() >= fecha2.getDia()) {
                return true;
            }
        }
    }
    return false;
}

bool operator<(DTFecha& fecha1, DTFecha& fecha2) {
    if (fecha1.getAnio() < fecha2.getAnio()) {
        return true;
    } else if (fecha1.getAnio() == fecha2.getAnio()) {
        if (fecha1.getMes() < fecha2.getMes()) {
            return true;
        } else if (fecha1.getMes() == fecha2.getMes()) {
            if (fecha1.getDia() < fecha2.getDia()) {
                return true;
            }
        }
    }
    return false;
}

//Funciones
/*string DTFecha:: toString(){
    //return dia + "/" + mes + "/" + anio;
    return dia + "/" + mes + "/" + anio;
}*/

std::string DTFecha::toString() const{
    std::ostringstream oss;
    oss << dia << "/" << mes << "/" << anio;
    return oss.str();
}

// Destructor
DTFecha::~DTFecha() {}