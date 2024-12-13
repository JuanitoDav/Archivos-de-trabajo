//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

void parImpar(int numero);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int numero;
	
	cout<<"Ingrese un número: ";
	cin>>numero;
	parImpar(numero);
	
	return 0;
}

void parImpar(int numero){
	if(numero%2==0){
		cout<<"El número es par.\n";
	} else {
		cout<<"El número es impar.\n";
	}
}