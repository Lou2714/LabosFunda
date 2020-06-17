#include <iostream>
#include <time.h>

using namespace std;

int main(){
    
	int h, m = 0, s = 0;

	cout<<"RELOJ"<<endl;
	cout<<"Inteoduzca la hora en formato de 24 horas"<<endl;
	cin>>h;
	cout<<"Inteoduzca los minutos"<<endl;
	cin>>m;
	cout<<"Inteoduzca los segundos"<<endl;
	cin>>s;
	if ((s > 60 || s < 0) || (h > 23 || h < 0) || (m > 60 || m < 0))
	{
		cout<<"La hora es incorrecta"<<endl;
	}else{
		s = s +1;
	if (s == 60)
	{
		s = 0;
		m = m + 1;
	}
	if (m == 60)
	{
		m = 0;
		
	}
	h = h + 1;
	if (h == 24)
	{
		h = 0;
		
	}
		cout<<"La hora es: "<<h<<":"<<m<<":"<<s<<endl;
		cout<<"La hora dentro de un segundo es: "<<h<<":"<<m<<":"<<s<<endl;
		
	}
    return 0;
}