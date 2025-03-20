#include "../include/Libro.h"

bool Libro::contienePalabra(string palabra) {
    return PalabrasDestacadas.find(palabra) != PalabrasDestacadas.end(); // si no encuentra la palabra find devuelve .end()
}