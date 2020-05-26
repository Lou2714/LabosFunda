#include <iostream>

using namespace std;

int main(){

    int a;

    cout<<endl;
    cout<<"Programa para saber si un numero es positivo, negativo o cero"<<endl;
    cout<<"Ingrese un numero: ";
    cin>>a;

    if (a < 0)
    {
        cout<<"El numero "<<a<<" es negativo";
    }else if (a > 0)
    {
        cout<<"El numero "<<a<<" es positivo";
    }else
    {
        cout<<"El numero es cero";
    }
    return 0;
}