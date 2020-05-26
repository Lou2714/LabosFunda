#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){

    string palabra;
   
    cout<<"Ingrese una palabra: ";
    cin>>palabra;
   
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
        
    return 0;
}