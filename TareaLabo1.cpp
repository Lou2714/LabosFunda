#include <iostream>

using namespace std;

int main(){

    int a, b;

    cout<<endl;
    cout<<"Programa para conocer si un numero es divisible entre otro"<<endl<<endl;
    cout<<"Ingrese el numero a verificar: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;

    if (a%b == 0)
    {
        cout << "El numero "<<a<<" es divisible entre "<<b;
    }else
    {
        cout <<"El numero "<<a<<" no es divisible entre "<<b;
    }
    
    return 0;
}