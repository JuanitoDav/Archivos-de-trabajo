//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int n;
	
	cout<<"Dame un número para determinar si es positivo o negativo: ";
	cin>>n;
	
	//Usando ?
	n>0?cout<<"El número es positivo\n":cout<<"El número es negativo\n";
	system("pause");
	
	//Usando if
	if(n>0){
		cout<<"El número es positivo\n";
	} else {
		cout<<"El número es negativo\n";
	}
	system("pause");
	
	//If anidado para considerar el cero
	if(n>0){
		cout<<"El número es positivo\n";
	} else {
		if(n<0){
			cout<<"El número es negativo\n";
		} else {
			cout<<"El número es cero\n";
		}
	}
	
	return 0;
}
