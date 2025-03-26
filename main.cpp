#include <iostream>
#include "include/DTRefer.h"
#include "include/DTFecha.h"
#include "include/Publicacion.h"
#include "include/PaginaWeb.h"
#include "include/Libro.h"
#include "include/Investigador.h"
#include "include/ArticuloRevista.h"



int main(){

    
/****Clase Investigador ****/
vector<Publicacion*> publicaciones1;
Investigador* Investigador1 = new Investigador("0000-0003-1234-5678","Carla Oliveri","Universidad de la Republica", publicaciones1);

vector<Publicacion*> publicaciones2;
Investigador* Investigador2 = new Investigador("0000-0001-8765-4321","Alberto Santos","Instituto Tecnico", publicaciones2);


/*****Articulo Revista *****/
string DOI1 = "10.123/abc123";
string titulo1 = "Fundamentos de POO";
DTFecha* fecha1 = new DTFecha(15,5,2023);
string revista1 = "Programacion Avanzada";
string extracto1 = "Introduccion a los principios fundamentales de la programacion  orientada a objetos, explicando sus conceptos clave como clases,  objetos, herencia y polimorfismo. "; 
ArticuloRevista* articuloRevista1 = new ArticuloRevista(DOI1,titulo1,fecha1,revista1,extracto1);


string DOI2 = "10.4567/jkl012 ";
string titulo2 = "Utilidad de diagramas UML";
DTFecha* fecha2 = new DTFecha(10,2,2024);
string revista2 = "Modelado de Software";
string extracto2 = "Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentacion de software, cubriendo los tipos mas importantes utilizados, como clases. "; 
ArticuloRevista* articuloRevista2 = new ArticuloRevista(DOI2,titulo2,fecha2,revista2,extracto2);


/*****Clase Libro*****/
set<string> palabra1;
palabra1.insert("Diseno");
palabra1.insert("OOP");
palabra1.insert("Class");
Libro* libro1 =new Libro("10.2345", "Patrones de Diseno en C++",new DTFecha (20,8,2022), "Software Design", palabra1);
set<string> palabra2;
palabra2.insert("Diagramas");
palabra2.insert("UML");
palabra2.insert("Software");
palabra2.insert("Modelado");
Libro* libro2 =new Libro("10.5678/mno345", "Guia de UML", new DTFecha (20,8,2022), "IEEE", palabra2);


/*****Pagina Web*****/
PaginaWeb* pagina = new PaginaWeb("10.3456/ghi789", "Diagramas para Particpantes", new DTFecha(20,10,2024), "www.umlparaprincipiantes.com", "En esta pagina web se presenta una gui completa sobre los diagramas UML, abordando los diagramas de casos de uso, de clases, de secuencia y de actividades. ");


cout << *(articuloRevista1->getDT());
cout << *(articuloRevista2->getDT());
cout << *(libro1->getDT());
cout << *(libro2->getDT());
cout << *(pagina->getDT());

cout << Investigador1->toString() << endl;
cout << Investigador2->toString() << endl;

//Carla 
Investigador1->agregarPublicaciones(articuloRevista1);
articuloRevista1->AgregarAutor(Investigador1);

Investigador1->agregarPublicaciones(articuloRevista2);


Investigador1->agregarPublicaciones(libro2);


Investigador1->agregarPublicaciones(pagina);


std::cout << "¡Hola, mundo!" << std::endl;
//Alberto
Investigador2->agregarPublicaciones(articuloRevista1);
Investigador2->agregarPublicaciones(libro1);
Investigador2->agregarPublicaciones(articuloRevista2);

cout << *(articuloRevista1->getDT());




}