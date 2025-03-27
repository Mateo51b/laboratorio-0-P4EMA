#include <iostream>
#include "include/DTRefer.h"
#include "include/DTFecha.h"
#include "include/Publicacion.h"
#include "include/PaginaWeb.h"
#include "include/Libro.h"
#include "include/Investigador.h"
#include "include/ArticuloRevista.h"



int main(){
//Investigador
vector<Investigador*> investigadores;
Investigador* investigador1 = new Investigador("0000-0003-1234-5678","Carla Oliveri","Universidad de la Republica");
investigadores.push_back(investigador1);
Investigador* investigador2 = new Investigador("0000-0001-8765-4321","Alberto Santos","Instituto Tecnico");
investigadores.push_back(investigador2);


//Articulo Revista
vector<Publicacion*> publicaciones;
DTFecha* fecha1 = new DTFecha(15,5,2023);
string extracto1 = "Introduccion a los principios fundamentales de la programacion  orientada a objetos, explicando sus conceptos clave como clases,  objetos, herencia y polimorfismo."; 
ArticuloRevista* articuloRevista1 = new ArticuloRevista("10.123/abc123","Fundamentos de POO",fecha1,"Programacion Avanzada",extracto1);
publicaciones.push_back(articuloRevista1);  

DTFecha* fecha2 = new DTFecha(10,2,2024);
string extracto2 = "Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentacion de software, cubriendo los tipos mas importantes utilizados, como clases."; 
ArticuloRevista* articuloRevista2 = new ArticuloRevista("10.4567/jkl012","Utilidad de diagramas UML",fecha2,"Modelado de Software",extracto2);
publicaciones.push_back(articuloRevista2);


//Clase Libro
set<string> palabra1;
palabra1.insert("Diseno");
palabra1.insert("OOP");
palabra1.insert("Class");
Libro* libro1 =new Libro("10.2345", "Patrones de Diseno en C++",new DTFecha (20,8,2022), "Software Design", palabra1);
publicaciones.push_back(libro1);

set<string> palabra2;
palabra2.insert("Diagramas");
palabra2.insert("UML");
palabra2.insert("Software");
palabra2.insert("Modelado");
Libro* libro2 =new Libro("10.5678/mno345", "Guia de UML", new DTFecha (20,8,2022), "IEEE", palabra2);
publicaciones.push_back(libro2);


//Pagina Web
PaginaWeb* pagina = new PaginaWeb("10.3456/ghi789", "Diagramas para Particpantes", new DTFecha(20,10,2024), "www.umlparaprincipiantes.com", "En esta pagina web se presenta una gui completa sobre los diagramas UML, abordando los diagramas de casos de uso, de clases, de secuencia y de actividades. ");
publicaciones.push_back(pagina);

for (int i = 0; i<5; i++){
    cout << *(publicaciones[i]->getDT());
}

cout << investigadores[0]->toString() << endl;
cout << investigadores[1]->toString() << endl;

//Carla 
investigadores[0]->agregarPublicaciones(publicaciones[0]);
investigadores[0]->agregarPublicaciones(publicaciones[1]);
investigadores[0]->agregarPublicaciones(publicaciones[3]);
investigadores[0]->agregarPublicaciones(publicaciones[4]);

//Alberto
investigadores[1]->agregarPublicaciones(publicaciones[0]);
investigadores[1]->agregarPublicaciones(publicaciones[1]);
investigadores[1]->agregarPublicaciones(publicaciones[2]);

//Parte h.
DTFecha* f = new DTFecha(2,2,1998);
set<string> aux = investigadores[0]->listarPublicaciones(f,"UML");
if(!aux.empty()){
    set<string>::iterator it = aux.begin();
    set<string>::iterator last = aux.end();
    --last;
    while (it != aux.end()) {
        cout << (*it) << endl;
        it++;
    }
}

}