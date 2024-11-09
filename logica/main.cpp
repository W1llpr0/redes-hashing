#include "funciones.h"

int main () {

    string ruta;
    cout << "ingrese la ruta del archivo: " << '\n';
    getline(cin,ruta);

    ifstream archivo(ruta);

    if (!archivo.is_open()){

        cout <<"no se pudo abrir el archivo"<< '\n';
        return 1;
    }

    stringstream buffer;

    buffer << archivo.rdbuf();

    archivo.close();

    string contenido = buffer.str();

    
    cout<<SHA256(contenido);

    

    return 0;

}