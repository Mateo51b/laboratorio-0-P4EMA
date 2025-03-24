#include <iostream>
#include "include/DTRefer.h"
#include "include/DTFecha.h"
#include "include/Publicacion.h"
#include "include/PaginaWeb.h"
#include "include/Libro.h"
#include "include/Investigador.h"
#include "include/ArticuloRevista.h"



int main(){
    DTFecha* f = new DTFecha(18,3,2025);
    set<string> s;
    s.insert("Tartaria");
    s.insert("Javier Santaolalla");
    DTRefer* refer = new DTRefer("1231-3123", "titulo", f, s);
    cout << *refer << endl;
    return 0;
}
