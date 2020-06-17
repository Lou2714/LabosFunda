#include <iostream>

using namespace std;

int Euclides(int mayor, int menor){
    int residuo;
    do
    {   residuo = mayor%menor;
        if (residuo != 0)
        {
            mayor = menor; //Al mayor se le asigna el valor del menor
            menor = residuo;//Al menor se le asigna el valor del residuo y se vuelve a dividir hasta obtener como residuo 0
        }
        
    } while (residuo != 0);
    return menor;
}
int main(){
    int a, b, mcd;

    cout<<"MDC POR EL METODO DE EUCLIDES A PARTIR DE DOS NUMEROS"<<endl;
    cout<<"Introduca numero mayor"<<endl;
    cin>>a;
    cout<<"Introduzca un numero menor al anterior"<<endl;
    cin>>b;
    mcd = Euclides(a, b);

    cout<<"El MCD es: "<<mcd<<endl;

    return 0;
}
