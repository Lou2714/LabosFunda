#include <iostream>
using namespace std;

int main(){

    char producto[100];
    float precio;
    int cantidad;
    float total;

    cout<<"Ingrese el nombre del producto a comprar ";
    cin>>producto;
    cout<<"Por favor, introduzca el precio ";
    cin>>precio;
    cout<<"Y por ultimo, se le pide que inserte la cantidad ";
    cin>>cantidad;

    total = precio*cantidad;

    cout<<"El total del dinero gastado es: ";
    cout<<total;

    return 0;
}