#include <iostream>
#include <string>

using namespace std;

int main(){

    string palabra;

    cout<<"PALABRAS"<<endl;
    cout<<"Ingrese una palabra: ";
    cin>>palabra;

   if (palabra.front() == palabra.back())
   {
       cout<<"La palabra comienza y termina con la misma letra"<<endl;
   }else
   {
       cout<<"La palabra no comienza y termina con la misma letra"<<endl;
   }
    return 0;
}