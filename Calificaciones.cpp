//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int rc, ri, rb, cf;
	
	cout<<"Las respuestas correctas valen 5 puntos cada uno\n";
	cout<<"Las respuestas incorrectas restan 1 punto cada uno\n";
	cout<<"Las respuestas en blanco valen 0 puntos cada uno \n";
	cout<<"Dime la cantidad de respuestas correctas\n";
	cin>>rb;
	cf=(rc*5)+(ri*(-1))+(rb*0);
	cout<<"La calificación final es: "<<cf;
	printf("\nLa calificación final es: %d", cf);
	cf=rc*5-ri;
	cout<<"\nLa calificación final es: "<<cf;
	printf("\nLa calificación final es: %d", cf);
	
	return 0;
}