#include <iostream>
#include "include/DTRefer.h"
#include "include/DTFecha.h"
#include "include/Publicacion.h"
#include "include/PaginaWeb.h"
#include "include/Libro.h"
#include "include/Investigador.h"
#include "include/ArticuloRevista.h"



int main(){
    DTFecha* f1 = new DTFecha(18,3,2025);
    DTFecha* f2 = new DTFecha(25,3,2025);
    set<string> s;
    s.insert("Tartaria");
    s.insert("Javier Santaolalla");
    DTRefer* refer = new DTRefer("1231-3123", "titulo", f2, s);
    cout << *refer << endl;
    cout << (f2>=f1) << endl;
    return 0;
}