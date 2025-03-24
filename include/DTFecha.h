#ifndef DTFECHA_H
#define DTFECHA_H
#include <string>
using namespace std;
class DTFecha {
    private:
        int dia;
        int mes;
        int anio;
    public:
        // Constructor
        //DTFecha(); // Necesario para DTRefer.cpp
        DTFecha(int dia, int mes, int anio);
        // Getters
        int getDia();
        int getMes();
        int getAnio();

        // Operaciones
        bool operatorMayor(DTFecha* fecha1, DTFecha* fecha2);
        bool operatorMenor(DTFecha* fecha1, DTFecha* fecha2);

        //funciones
        string toString() const;

        // Destructor
        ~DTFecha();
};
#endif