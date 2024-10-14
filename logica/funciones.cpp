#include <iostream>
#include <bitset>
#include <vector>
#include <cmath> 
#include <string> 
#include <map> 
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


vector<string> agrupacion16(string a){
   
    vector<string> lista(16);

    for (int i = 0; i<lista.size(); i++){
        string partestring = a.substr(i*32,32);
        lista[i] = partestring;
    }
    return lista;

}

bool esPrimo (int num) {

    for( int i =2; i<num ; i++ ){

        if(num % i == 0){
            return false;
        }  
        
    }
    return true;
}

vector<string>  hashearvalorInicial(){
    /*int num =2;
    vector<string> listanum;
    while (listanum.size()<8){
        if(esPrimo(num)){
            double raiznum =sqrt(num);
            double partedeci = raiznum - floor(raiznum);
            string numerostring = to_string(partedeci);
            string numerofinal = numerostring.substr(2);
            int valoractual = stoi(numerofinal);
            bitset<32> binario(valoractual);
            string numeroconver = binario.to_string();
            listanum.push_back(numeroconver);            
        }
        num++;
    }   
    return listanum;*/

    vector<string> lista(8);
    map<int, string> diccionarioPrimos;
    diccionarioPrimos[0] = "6A09E667";
    diccionarioPrimos[1] = "BB67AE85";
    diccionarioPrimos[2] = "3C6EF372";
    diccionarioPrimos[3] = "A54FF53A";
    diccionarioPrimos[4] = "5103527F";
    diccionarioPrimos[5] = "9B05688C";
    diccionarioPrimos[6] = "1F83D9AB";
    diccionarioPrimos[7] = "5BE0CD19";
    for (int i = 0; i< lista.size(); i++){
        string cadena;
        string num = diccionarioPrimos[i];
        for (int j = 0; j< num.size(); j++){
            string num1(1,num[j]);
            int valoractual = stoul(num1, nullptr, 16);
            bitset<4> binario(valoractual);
            string binariostr = binario.to_string();
            cadena+= binariostr;
        
        }
        lista[i] = cadena;
        
    }
    return lista;
}
void mostrar(vector<string> ar){

    for( auto str : ar){

        cout<< str<< '\n';

    }


}
