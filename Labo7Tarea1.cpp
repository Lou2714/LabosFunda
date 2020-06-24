#include <iostream>

using namespace std;

int LeerArray(int x[], int y, int a[]){
    
//llenamos areglo
    for(int i=0; i<y; i++){
        cout<<"ingrese primer dato a sumar: ";cin>> x[i];
      
    }
    //llenamos areglo
    for(int i=0; i<y; i++){
        cout<<"ingrese el segundo dato: ";cin>> a[i];
    }
}
int sumar(int a[], int x[], int m, int k){
    int suma;

    suma = a[k] + x[k];
    return suma;
    
}int resultado(int a[], int x[], int m, int k){
    int respuesta = sumar(a,x,m,k);

    cout<<"El resultado de la suma es: "<<respuesta;
}
int main(){
    cout<<"SUMATORIA"<<endl<<endl;
    int n, k;
    cout<<"Ingrese el tamano del array: "; cin>>n;
    int array[n];
    int vector[n];
    LeerArray(array, n, vector);
  
    cout<<"Ingrese la ubicacion que desea sumar: "; cin>>k;
    int suma[k];
    sumar(vector,array,n, k);
    resultado(vector,array,n,k);
    return 0;
}