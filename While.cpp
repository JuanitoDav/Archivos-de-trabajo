//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int x, c=0;
	float sueldo, total;
	char opcion, nombre[10];
	
	while(c!=0){ //La condición nunca se cumple. ¡Cuidado!
		cout<<"Esto nunca se imprime.";
		//c=0;
	}
	
	x=1;
	
	while(x<11){ //Condición
		cout<<x<<"\n"; //Imprime una numeración 1-10.
		x++; //Variación
	}
	
	system("pause");
	opcion='s';
	
	while(opcion=='s' or opcion=='S'){
		system("CLS");
		cout<<"Dame tu nombre: ";
		fflush(stdin);
		gets(nombre);
		cout<<"Dame tu sueldo: ";
		cin>>sueldo;
		total+=sueldo; //Es lo mismo que total=total+sueldo;.
		printf("¿Deseas capturar otro empleado <s/n>? ");
		cin>>opcion;
	}
	
	printf("Total de salarios = $%5.2f\n", total);
	cout<<"Después de la pausa el programa se cicla\n";
	system("pause");
	//Cuidado con poner un ; después de un while.
	
	x=0;
	
	while(x<10);{ //Se cicla
		cout<<x<<"\n";
		x++;
	}
	
	return 0;
}