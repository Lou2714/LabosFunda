//paradigma = diferentes formas de pensar
//el pause es para que no termine de golpe el progrma
//Se usa el while cuando no se conoce cuantas veces se necesita que se repita, aunque se puede limitar
//el for es cuando ya lo tenemos definido
#include <iostream>

using namespace std;

int main(){

        int n;

        while (n!=0) //Lo que se quiere es que si es un numero igual a cero se salga del bloque
        {
            cout<<"Ingrese el numero por favor ";
            cin>>n;
            if (n % 2 == 0){
                cout<<"El numero es par"<<endl;
            }else{
                cout<<"El numero es impar"<<endl;
            }
        }   
        
    cout << "Metiste el numero: "<<n<<endl;
    return 0;
}

 if ( (palabra.size() > 10) && (palabra.size()%2==0))
        {
            cout <<"La palabra tiene mas de 10 caracteres y su longitud es par";
        }else if ( (palabra.size() > 10) && (palabra.size()%2 !=0))
        {
            cout <<"La palabra tiene mas de 10 caracteres y su longitud es impar";
        }else
        {
            cout <<"La palabra tiene menos de 10";
        }