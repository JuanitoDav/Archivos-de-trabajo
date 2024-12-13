//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

//Convierte Centígrados a Fahrenheit
double ctof(double centi);

//Convierte Fahrenheit a Centígrados
double ftoc(double fahr);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	double temperatura;
	int opcion;
	
	cout<<"Ingrese una temperatura: ";
	cin>>temperatura;
	cout<<"Selecciona la opción deseada: \n";
	cout<<"1. Centígrados a Fahrenheit\n";
	cout<<"2. Fahrenheit a Centígrados\n";
	cin>>opcion;
	
	switch(opcion){
		case 1:
			cout<<temperatura<<" grados Centígrados son "<<ctof(temperatura)<<"°F\n";
			break;
		case 2:
			cout<<temperatura<<" grados Fahrenheit son "<<ftoc(temperatura)<<"°C\n";
			break;
		default:
			cout<<"Opción inválida.\n";
			break;
	}
	
	return 0;
}

double ctof(double centi){
	return (centi*9/5)+32;
}

double ftoc(double fahr){
	return (fahr-32)*5/9;
}
