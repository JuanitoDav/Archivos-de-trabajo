//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

void cuad1(int x); //Copia el valor
void cuad2(int &x); //Copia la dirección

int main(void){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int x;
	
	cout<<"Dame un valor para elevar al cuadrado: ";
	cin>>x;
	cout<<"x = "<<x<<" antes de enviarla a la función 1\n";
	system("pause");
	cuad1(x);
	cout<<"\nx = "<<x<<" después de enviarla a la función 1\n";
	system("pause");
	cuad2(x);
	cout<<"\nx = "<<x<<" después de enviarla a la función 2\n";
	
	return 0;
}

void cuad1(int x){
	x=x*x;
	cout<<"\nx = "<<x<<" dentro de la función 1\n";
	system("pause");
}

void cuad2(int &x){
	x=x*x;
	cout<<"\nx = "<<x<<" dentro de la función 2\n";
	system("pause");
}
