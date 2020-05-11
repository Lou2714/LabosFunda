#include <iostream>

using namespace std;

int main(){

    int a, b, c;
    float promedio;

    cout<<"Ingrese a continuacion tres numeros para conocer su promedio, por ello se le pide introducir su primer numero ";
    cin>>a;
    cout<<"introduzca su segundo numero ";
    cin>>b;
    cout<<"introduzca su tercer numero ";
    cin>>c;

    promedio = (float) (a + b + c)/3;

    cout<<promedio;

    return 0;


}