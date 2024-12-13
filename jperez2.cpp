#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	//Nombre: Juan David Pérez Martínez
	//No. Control: 24041214
	
	float calif1=0.0, calif2=0.0, calif3=0.0, eva1, eva2, eva3;
	float final=0.0;
	
	cout<<"Escribe la calificación 1 (De 0 a 100): ";
	cin>>calif1;
	cout<<"Escribe la calificación 2 (De 0 a 100): ";
	cin>>calif2;
	cout<<"Escribe la calificación 3 (De 0 a 100): ";
	cin>>calif3;
	eva1=calif1*.1;
	eva2=calif2*.1;
	eva3=calif3*.8;
	final=eva1+eva2+eva3;
	cout<<fixed;
	cout.precision(0);
	cout<<"Tu calificación de la evaluación 1 es: "<<eva1<<"\n";
	cout<<"Tu calificación de la evaluación 2 es: "<<eva2<<"\n";
	cout<<"Tu calificación de la evaluación 3 es: "<<eva3<<"\n";
	cout<<"La calificación final es: "<<final;
	
	return 0;
}