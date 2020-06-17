#include <iostream>

using namespace std;

bool Year(int year){

    bool m, n;
    bool x;
   //A las siguientes 2 variables (m, n) se les asigna el residuo de la división
    m = year % 400;
    n = year % 4 && year % 100 != 0;
    x = (m == n);//A esta variable se le asigna el resultado de comparar las dos variables anteriores, verificando si son iguales.
    
    return x;

    return 0;
}
int main(){
    
	int dd, aa, year;
    int mm;
    cout<<"Se le pide que introduzca la fecha de la siguiente manera dd/mm/aa"<<endl;
    cout<<"Escriba el dia"<<endl;
    cin>>dd;
    cout<<"Escriba el mes"<<endl;
    cin>>mm;
    cout<<"Escriba el year"<<endl;
    cin>>aa;
    year = Year(aa);
	if (dd > 31 || dd < 1)
    {
        cout<<"El dia esta mal digitado"<<endl;
        
    }
	if (mm > 12 || mm < 1)
    {
        cout<<"El mes esta mal digitado"<<endl;
    }
	if (aa < 0)
    {
        cout<<"El año esta mal digitado"<<endl;
    }else{
        cout<<"La fecha ingresada es la siguiente: "<<endl;
        cout<<dd<<"/"<<mm<<"/"<<aa<<endl;}
//Si de digitan los en donde hay 31 días, se comprueba que si su sumatoria es igual a 32, entonces, se reinicial el día
// y el mes es sumado
    if ((mm == 01 || mm == 03 || mm == 05 || mm == 07 || mm == 8 || mm ==10 )) { 
        dd = dd + 1;
        if (dd == 32)
        {
            dd = 1;
        mm = mm + 1;
        }
    cout<<"La fecha un dia despues es la siguiente: "<<endl;
    cout<<dd<<"/"<<mm<<"/"<<aa<<endl;
    }else if ((mm == 04 || mm == 06 || mm == 9 || mm == 11) ) {//Si de digitan los en donde hay 30 días, se comprueba que si su sumatoria es igual a 31, entonces, se reinicial el día
// y el mes es sumado
        dd = dd + 1;
        if (dd == 31)
        {
        dd = 1;
        mm = mm + 1;
        }
    cout<<"La fecha un dia despues es la siguiente: "<<endl;
    cout<<dd<<"/"<<mm<<"/"<<aa<<endl;
    }else if (mm == 02 && year == 0 ) //Si el año es bisisesto, se comprueba que si su sumatoria es igual a 30 entonces se reinicia el día a 1 y se suma un mes
    {
        dd += 1;
        if (dd == 30)
        {
            dd = 1;
            mm = mm + 1;
        }
    cout<<"La fecha un dia despues es la siguiente: "<<endl;
    cout<<dd<<"/"<<mm<<"/"<<aa<<endl;
    }else if (mm == 02 && year == 1 )//Si el año no es bisisesto, se comprueba que si su sumatoria es igual a 29 entonces se reinicia el día a 1 y se suma un mes
    {
        dd += 1;
        if (dd == 29)
        {
            dd = 1;
            mm = mm + 1;
        }
    cout<<"La fecha un dia despues es la siguiente: "<<endl;
    cout<<dd<<"/"<<mm<<"/"<<aa<<endl;
    }else if (mm == 12 || dd == 30){//Si se cumple con una de las dos condiciones se va a sumar uno
        dd += 1;
        if (mm == 12 && dd == 32)//Si la sumatoria indica que es fin de año, se suma un año y se reinicia el día y el mes
        {
            aa = aa + 1;
            dd = 1;
            mm = 1;
        }
    cout<<"La fecha un dia despues es la siguiente: "<<endl;
    cout<<dd<<"/"<<mm<<"/"<<aa<<endl;
    }
    
    return 0;
}