#include <iostream>

using namespace std;

int main(){

    int a;
    
    cout<<"Programa para saber si un numero es par o impar"<<endl;
    cout<<"Ingrese un numero: ";
    cin>>a;

    if (a%2==0)
    {
        cout<<"El numero "<<a<<" es par.";
    }else
    {
        cout<<"El numero "<<a<<" es impar.";
    }

    return 0;
}