//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

void captura(char (&nombre)[10], int &num);
float calcula(int num);

int main(void){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char nom[10];
	int num;
	float sueldo;
	
	captura(nom, num);
	sueldo=calcula(num);
	cout<<"El sueldo de "<<nom<<" es: ";
	printf("%.2f", sueldo);
	
	return 0;
}

void captura(char (&nombre)[10], int &num){
	puts("Dame el nombre del empleado:");
	gets(nombre);
	puts("Dame el número de piezas fabricadas:");
	cin>>num;
}

float calcula(int num){
	return num*5.5;
}
