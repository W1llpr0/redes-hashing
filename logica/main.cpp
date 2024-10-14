#include <iostream>
#include <bitset>
#include <vector>
#include <cmath> 
#include <string> 
#include <map> 
using namespace std;
#include "funciones.h"

int main () {

    string n1;
    cout << "ingrese un numero para realizar el SHA256: " << '\n';
    cin>> n1;
    vector<string> listaW = funcionW(numerobinarioIncial(palabraPadeada(convertirASCII(n1))));
    vector<string> listaK = constantesHashing();
    vector<string> listaL = hashearvalorInicial();
    vector<string> creacionH= creandoH(listaL,listaK,listaW);
    string sha256= SHA256(listaL, creacionH);
    cout << SHA256HEX(sha256);

    

    return 0;

}