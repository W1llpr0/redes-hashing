#include <iostream>
#include <bitset>
#include <vector>
#include <cmath> 
#include <string> 
#include <map> 
#include <sstream> 
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


vector<string> numerobinarioIncial(string a){
   
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
    diccionarioPrimos[4] = "510E527F";
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



string funcionROTR(string num, int rotr){
    string final;
    unsigned int numero = stoul(num, nullptr, 2);
    unsigned int nume = (numero >> rotr)| (numero << (32-rotr));
    bitset<32> bits(nume);
    final = bits.to_string();
    return final;
}

string funcionShift(string num, int shift){
    string rotr = funcionROTR(num,3);
    for (int i=0; i<3; i++){
        rotr[i]='0';
    }
    return rotr;
}

string funcionSigma (string num, int sigma){

    switch (sigma)
    {
    case 0:{

        string final;
        string rotr7 = funcionROTR(num, 7);
        string rotr18 = funcionROTR(num, 18);
        string shift3 = funcionShift(num, 3);

        unsigned int ROTR7 = stoul(rotr7, nullptr, 2);
        unsigned int ROTR18 = stoul(rotr18, nullptr, 2);
        unsigned int SHIFT3 = stoul(shift3, nullptr, 2);

        unsigned int SIGMA0 = (ROTR7 ^ ROTR18) ^ SHIFT3;
        bitset<32> bitssigma(SIGMA0);
        final = bitssigma.to_string();
        return final;

    }    
    case 1:{
        string final;
        string rotr17 = funcionROTR(num, 7);
        string rotr19 = funcionROTR(num, 18);
        string shift10 = funcionShift(num, 3);

        unsigned int ROTR7 = stoul(rotr17, nullptr, 2);
        unsigned int ROTR18 = stoul(rotr19, nullptr, 2);
        unsigned int SHIFT10 = stoul(shift10, nullptr, 2);

        unsigned int SIGMA1 = (ROTR7 ^ ROTR18) ^ SHIFT10;
        bitset<32> bitssigma(SIGMA1);
        final = bitssigma.to_string();
        return final;
    }     
        
    default:
        return "numero ingresado invalido";
    }  
}

vector<string> funcionW(vector<string> numprincipal){

    
    vector<string> procesandoMensaje(64);
    for(int i=0;i<16;i++){

        procesandoMensaje[i] = numprincipal[i];

    }

    for(int i=16;i<64;i++){
        string sigma1 = funcionSigma(procesandoMensaje[i-2],1);
        string sigma0 = funcionSigma(procesandoMensaje[i-15],0);
        string w7 = procesandoMensaje[i-7];
        string w16 = procesandoMensaje[i-16];

        unsigned int SIGMA1 = stoul(sigma1, nullptr, 2);
        unsigned int SIGMA0 = stoul(sigma0, nullptr, 2);
        unsigned int W7 = stoul(w7, nullptr, 2);
        unsigned int W16 = stoul(w16, nullptr, 2);
        bitset<32> bits (((((SIGMA1 + W7) + SIGMA0) + W16)) % (1ULL << 32));
        procesandoMensaje[i] = bits.to_string();

    }
    return procesandoMensaje;

}

string choose( string num1, string num2, string num3){
    string final;
    for(int i=0; i< 32; i++){

        char choose = num1[i];
        char valoractual1 = num2[i];
        char valoractual2 = num3[i];

        int valorabuscar = choose - '0';
        int valoranum1 = valoractual1 - '0';
        int valoranum2 = valoractual2 - '0';
        
        if (valorabuscar == 1){
            bitset<1>bits(valoranum1);
            final += bits.to_string();
        }
        else {
            bitset<1>bits(valoranum2);
            final += bits.to_string();
        }

    }
    return final;

}

string mayority ( string num1, string num2, string num3){

    string final;
    for(int i=0; i< 32; i++){

        char valoractual1 = num1[i];
        char valoractual2 = num2[i];
        char valoractual3 = num3[i];

        int numero1 = valoractual1 - '0';
        int numero2 = valoractual2 - '0';
        int numero3 = valoractual3 - '0';
        
        if ((numero1 + numero2 + numero3 == 3) || (numero1 + numero2 + numero3 == 2)){
            bitset<1>bits(1);
            final += bits.to_string();
        }
        else {
            bitset<1>bits(0);
            final += bits.to_string();
        }

    }
    return final;


}


string funcionT(int tnum, vector<string> letras, vector<string> klista, vector<string> wlista ){

    switch (tnum)
    {
    case 2 :{
        string t2final;
        string a = letras[0];
        string b = letras[1];
        string c = letras[2];
        
        string rotr2 = funcionROTR(a, 2);
        string rotr13 = funcionROTR(a, 13);
        string rotr22 = funcionROTR(a, 22);
        unsigned int ROTR2 = stoul (rotr2, nullptr, 2);
        unsigned int ROTR13 = stoul (rotr13, nullptr, 2);
        unsigned int ROTR22 = stoul (rotr22, nullptr, 2);
        string mayorvalor = mayority(a,b,c);
        unsigned int MAYOR = stoul (mayorvalor, nullptr, 2);

        bitset <32> bitsfinales (((((ROTR2^ROTR13)^ROTR22))% (1ULL <<32))+MAYOR); 
        t2final = bitsfinales.to_string();

        return t2final;
    }
    
    case 1 :{
        string t1final;
        string e = letras[4];
        string f = letras[5];
        string g = letras[6];
        string h = letras[7];

        string k0 = klista[0];
        string w0 = wlista[0];
        
        string rotr6 = funcionROTR(e, 6);
        string rotr11 = funcionROTR(e, 11);
        string rotr25 = funcionROTR(e, 25);
         unsigned int E = stoul (e, nullptr, 2);
        unsigned int H = stoul (h, nullptr, 2);
        unsigned int K0 = stoul (k0, nullptr, 2);
        unsigned int W0 = stoul (w0, nullptr, 2);
        unsigned int ROTR6 = stoul (rotr6, nullptr, 2);
        unsigned int ROTR11 = stoul (rotr11, nullptr, 2);
        unsigned int ROTR25 = stoul (rotr25, nullptr, 2);
        string choosevalor = choose(e,f,g);
        unsigned int CHOOSE = stoul (choosevalor, nullptr, 2);

        bitset <32> bitsfinales ((((( H+(((ROTR6^ROTR11)^ROTR25) % (1ULL <<32)))+CHOOSE))+K0)+W0); 
      
        t1final = bitsfinales.to_string();

        return t1final;

    }

    default:
        return "gabriel se la come";
    }

}

vector<string> creandoH(vector<string> letras, vector<string> klista, vector<string> wlista ){

    vector<string> listafinal(8);
    string t1 = funcionT(1, letras, klista, wlista);
    unsigned int T1 = stoul(t1,nullptr,2);
    string t2 = funcionT(2, letras, klista, wlista);
    unsigned int T2 = stoul(t2,nullptr,2);
    bitset<32> bits1 (T1+T2);
    string convertirb1 = bits1.to_string();
    listafinal[0] = convertirb1;
    listafinal[1] = letras[0];
    listafinal[2] = letras[1];
    listafinal[3] = letras[2]; 
    string d = letras[3];
    unsigned int D = stoul(d,nullptr,2);
    bitset<32> bits2 (T1+D);
    string convertirb2 = bits2.to_string();
    listafinal[4] = convertirb2;
    listafinal[5] =letras[4];
    listafinal[6] = letras[5];
    listafinal[7] =letras[6];

    return listafinal;

}

string SHA256(vector<string> principal, vector<string> letras){

    string final;
    vector<string> listaSHA256(8);

    for(int i=0; i<8; i++){
        
        string listap = principal[i];
        unsigned int LISTAP = stoul(listap,nullptr,2);
        string listal = letras[i];
        unsigned int LISTAL = stoul(listal,nullptr,2);
        bitset<32> bits (LISTAL+LISTAP);


        listaSHA256[i] = bits.to_string();
        final += listaSHA256[i];


    }
    return final;

}

string SHA256HEX (string num){

    stringstream ss;

    for (int i = 0; i<num.length() ; i+=4){
        string partestring = num.substr(i,4);
        bitset <4> bits(partestring);
        ss << hex << bits.to_ulong();
    }
    return ss.str();


}




void mostrar(vector<string>  ar){

    for( auto str : ar){

        cout<< str; 

    }


}
