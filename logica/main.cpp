#include <iostream>
#include <bitset>
#include <vector>
#include <cmath> 
#include <string> 
#include <map> 
using namespace std;
#include "funciones.h"

int main () {

    string n;
    cin>> n;
    vector<string> lista = funcionW(numerobinarioIncial(palabraPadeada(convertirASCII(n))));

    mostrar(lista);

    return 0;

}