//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char otro='S';
	float cuantos, suma, x;
	float promedio;
	cuantos = 0;
	suma = 0;
	
	for(;otro=='S';){
		cout<<"Dame un número: ";
		cin>>x;
		cuantos++;
		suma=suma+x;
		cout<<"¿Quieres capturar otro? (S/N)";
		cin>>otro;
		otro=toupper(otro);
	}
	
	cout<<"\n";
	promedio=suma/cuantos;
	cout<<"Fueron "<<cuantos<<" números\n";
	cout<<"La sumatoria es = "<<suma<<"\n";
	cout<<"El promedio es = "<<promedio<<"\n";
	
	return 0;
}