#include <iostream>

using namespace std;
int numero(int a[], int b){
    int x, m, contador=0;
    
    //llenamos el arreglo
    for (int i = 0; i < b; i++)
    {
        cout<<"ingrese los numeros: ";cin>> a[i];
        
    }
    cout<<"Ingrese el numero a buscar: ";cin>>x;
    
    for (int i = 0; i < b; i++)
    {
        if (x == a[i])
    {
        contador++;
    }
    }
    cout<<"El numero "<<x<<" se repite "<<contador<<" veces";
}
int main(){
    int n, x;
    cout<<"REPETICIONES"<<endl;
    cout<<"Ingrese el maximo de numeros a digitar: "; cin>>n;
    int array[n];
    numero(array, n);
    
    
    return 0;
}