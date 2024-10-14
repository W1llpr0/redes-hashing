#include <iostream>
#include <bitset>
using namespace std;
#include "funciones.h"

string convertirASCII( string a ){

    string final;
    for (int i= 0; i< a.length(); i++){

        int valoractual = int(a[i]);
        bitset<8> binario(valoractual);
        string conversion = binario.to_string();
        final += conversion;
    }
    return final;

}

string palabraPadeada(string a){

    string final;
    int cantidad = 448 - (a.length() +1);
    string ceros(cantidad,'0');
    bitset<64> bitdebloqueo(a.length());
    final = a +'1' + ceros +bitdebloqueo.to_string();
    return final;

}