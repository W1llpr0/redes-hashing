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

vector<string>  constantesHashing(){

     vector<string> lista(64);
    map<int, string> diccionarioConstantes;
    diccionarioConstantes[0] = "428A2F98";
    diccionarioConstantes[1] = "71374491";
    diccionarioConstantes[2] = "B5C0FBCF";
    diccionarioConstantes[3] = "E9B5DBA5";
    diccionarioConstantes[4] = "3956C25B";
    diccionarioConstantes[5] = "59F111F1";
    diccionarioConstantes[6] = "923F82A4";
    diccionarioConstantes[7] = "AB1C5ED5";
    diccionarioConstantes[8] = "D807AA98";
    diccionarioConstantes[9] = "12835B01";
    diccionarioConstantes[10] = "243185BE";
    diccionarioConstantes[11] = "550C7DC3";
    diccionarioConstantes[12] = "72BE5D74";
    diccionarioConstantes[13] = "80DEB1FE";
    diccionarioConstantes[14] = "9BDC06A7";
    diccionarioConstantes[15] = "C19BF174";
    diccionarioConstantes[16] = "E49B69C1";
    diccionarioConstantes[17] = "EFBE4786";
    diccionarioConstantes[18] = "0FC19DC6";
    diccionarioConstantes[19] = "240CA1CC";
    diccionarioConstantes[20] = "2DE92C6F";
    diccionarioConstantes[21] = "4A7484AA";
    diccionarioConstantes[22] = "5CB0A9DC";
    diccionarioConstantes[23] = "76F988DA";
    diccionarioConstantes[24] = "983E5152";
    diccionarioConstantes[25] = "A831C66D";
    diccionarioConstantes[26] = "B00327C8";
    diccionarioConstantes[27] = "BF597FC7";
    diccionarioConstantes[28] = "C6E00BF3";
    diccionarioConstantes[29] = "D5A79147";
    diccionarioConstantes[30] = "06CA6351";
    diccionarioConstantes[31] = "14292967";
    diccionarioConstantes[32] = "27B70A85";
    diccionarioConstantes[33] = "2E1B2138";
    diccionarioConstantes[34] = "4D2C6DFC";
    diccionarioConstantes[35] = "53380D13";
    diccionarioConstantes[36] = "650A7354";
    diccionarioConstantes[37] = "766A0ABB";
    diccionarioConstantes[38] = "81C2C92E";
    diccionarioConstantes[39] = "92722C85";
    diccionarioConstantes[40] = "A2BFE8A1";
    diccionarioConstantes[41] = "A81A664B";
    diccionarioConstantes[42] = "C24B8B70";
    diccionarioConstantes[43] = "C76C51A3";
    diccionarioConstantes[44] = "D192E819";
    diccionarioConstantes[45] = "D6990624";
    diccionarioConstantes[46] = "F40E3585";
    diccionarioConstantes[47] = "106AA070";
    diccionarioConstantes[48] = "19A4C116";
    diccionarioConstantes[49] = "1E376C08";
    diccionarioConstantes[50] = "2748774C";
    diccionarioConstantes[51] = "34B0BCB5";
    diccionarioConstantes[52] = "391C0CB3";
    diccionarioConstantes[53] = "4ED8AA4A";
    diccionarioConstantes[54] = "5B9CCA4F";
    diccionarioConstantes[55] = "682E6FF3";
    diccionarioConstantes[56] = "748F82EE";
    diccionarioConstantes[57] = "78A5636F";
    diccionarioConstantes[58] = "84C87814";
    diccionarioConstantes[59] = "8CC70208";
    diccionarioConstantes[60] = "90BEFFFA";
    diccionarioConstantes[61] = "A4506CEB";
    diccionarioConstantes[62] = "BEF9A3F7";
    diccionarioConstantes[63] = "C67178F2";
    for (int i = 0; i< lista.size(); i++){
        string cadena;
        string num = diccionarioConstantes[i];
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
