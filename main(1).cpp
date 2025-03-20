#include <iostream>
#include "src/DTRefer.cpp"

int main(){
    DTFecha* f = new DTFecha(18,3,2025);
    set<string> s;
    s.insert("Tartaglia");
    s.insert("Javier Santaolalla");
    DTRefer* refer = new DTRefer("1231-3123", "titulo", f, s);
    cout << *refer << endl;
    return 0;
}
