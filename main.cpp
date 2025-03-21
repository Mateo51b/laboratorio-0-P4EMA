#include <iostream>
#include "src/DTRefer.cpp"
#include "/src/DTFecha.cpp"
#include "/src/Publicacion.cpp"
#include "/src/PaginaWeb.cpp"
#include "/src/Libro.cpp"
#include "/src/Investigador.cpp"
#include "/src/ArticuloRevista.cpp"



int main(){
    DTFecha* f = new DTFecha(18,3,2025);
    set<string> s;
    s.insert("Tartaria");
    s.insert("Javier Santaolalla");
    DTRefer* refer = new DTRefer("1231-3123", "titulo", f, s);
    cout << *refer << endl;
    return 0;
}
