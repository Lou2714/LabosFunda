#include <iostream>

#define _USE_MATH_DEFINES

#include <cmath>

using namespace std;

int main(){

    float radio;
    float area;
    float perimetro;

    cout<<"Se le pide que ingrese el radio de un circulo para poder calcular su area y perimetro: ";
    cin>>radio;

    area = 2*M_PI*radio;
    
    cout<<" El area del circulo es: ";
    cout<<area;

    perimetro = M_PI*(pow(radio, 2));

    cout<<" y su perimetro es: ";
    cout<<perimetro;
    return 0;

}