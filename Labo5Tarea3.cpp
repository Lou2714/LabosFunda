#include <iostream>
using namespace std;
bool bisiesto(int fecha){

    bool m, n;
    bool x;
   //A las siguientes 2 variables (m, n) se les asigna el residuo de la división
    m = fecha % 400;
    n = fecha % 4 && fecha % 100 != 0;
    x = (m == n);//A esta variable se le asigna el resultado de comparar las dos variables anteriores, verificando si son iguales.
    
    return x;
}
int main(){

    int year; 
    bool dato;

    cout<<"YEAR BISIESTO "<<endl;
    cout<<"Para poder determinar si un es bisiesto o no, por favor ingrese el año "<<endl;
    cin>>year;
    cout<<endl;
    //A la variable dato se le asigna el resultado que retorna la función bisiesto.
    dato = bisiesto(year);

    if (dato == 0)//Si el valor asignado a dato es 0, será bisiesto, pero si es 1, significa que no lo es.
    {
        cout<<"Es bisiesto "<<endl;
        cout<<dato;
    }else
    {
        cout<<"No es bisiesto "<<endl;
        cout<<dato;
    }
    
    
    return 0;
}