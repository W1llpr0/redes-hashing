#include <iostream>
using namespace std;
#include "funciones.h"
#include <string>
#include <vector>

int main () {

   
    string n;
    cin >> n;

    vector<string> listap = numerobinarioIncial(palabraPadeada(convertirASCII(n)));

    mostrar(funcionHash(listap));


    return 0;

}