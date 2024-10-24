#include <iostream>
#include <bitset>
#include <vector>
#include <cmath> 
#include <string> 
#include <map> 
using namespace std;
#include "funciones.h"

int main () {

    string palabra;
    cout << "ingrese un numero para realizar el SHA256: " << '\n';
    cin>> palabra;
    vector<string> listaW = funcionW(numerobinarioIncial(palabraPadeada(convertirASCII(palabra))));
    vector<string> listaK = constantesHashing();
    vector<string> listaL = hashearvalorInicial();
    vector<string> creacionH= creandoH(listaL,listaK,listaW);
    mostrar (creacionH);

    

    return 0;

}