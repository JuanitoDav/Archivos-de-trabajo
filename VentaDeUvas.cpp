//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char tipo;
	int tamano;
	float inicial, kilos, total;
	
	cout<<"Dime el tipo de uva: ";
	cin>>tipo;
	tipo=toupper(tipo); //Toupper cambia toda la variable a mayúscula.
	cout<<"Dime el tamaño de uva: ";
	cin>>tamano;
	
	if ((tipo=='A' or tipo=='B') and (tamano==1 or tamano==2)){
		cout<<"Dime cuántos kilos de uva se venden: ";
		cin>>kilos;
		cout<<"Dime el precio inicial por kilo: ";
		cin>>inicial;
		
		switch(tipo){
			case 'A':
				switch(tamano){
					case 1:
						inicial+=.2; //inicial=inicial+.2;
						break;
					case 2:
						inicial=inicial+.3;
						break;
				}
				break;
			case 'B':
				switch(tamano){
					case 1:
						inicial-=.3; //inicial=inicial-.3;
						break;
					case 2:
						inicial=inicial-.5;
						break;
				}
				break;
		}
		total=kilos*inicial;
		cout<<"La venta total es de: "<<total;
	} else {
		cout<<"Datos no válidos.";
	}
	
	return 0;
}