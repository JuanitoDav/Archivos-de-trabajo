//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

/*Programa de validación de NIP*/

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int nip=123;
	int intento=0;
	
	cout<<"Teclea tu NIP: ";
	cin>>intento;
	
	if(intento==nip){
		cout<<"**Correcto**";
	} else {
		cout<<"**Incorrecto**";
		//NIP con ?
		intento>nip?cout<<"Demasiado alto":cout<<"Demasiado bajo";
	}
	
	return 0;
}