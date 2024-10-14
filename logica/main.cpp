#include <iostream>
using namespace std;
#include "funciones.h"

int main () {

    string a;

    cin >> a;

    cout << convertirASCII(a);
    cout << palabraPadeada(convertirASCII(a));


    return 0;

}