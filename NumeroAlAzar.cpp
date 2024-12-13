//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	//Un programa que pida un número por teclado, ese número tenemos que adivinarlo en un ciclo.
	//Si es igual, que diga acertaste. Si no, que indique si me pase o no hasta adivinarlo.
	
	int x, numero;
	
	srand(time(0));
	numero=rand()%101;
	
	do{
		cout<<"Escribe el número que el programa escogió (entre 0 y 100): ";
		cin>>x;
		
		if(x<numero){
			cout<<"Bajo\n";
		}
		if(x>numero){
			cout<<"Alto\n";
		}
		if(x==numero){
			cout<<"¡Acertaste!";
		}
		
	} while(x!=numero);
	
	return 0;
}