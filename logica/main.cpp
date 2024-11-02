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
    cout<<SHA256(palabra);

    

    return 0;

}