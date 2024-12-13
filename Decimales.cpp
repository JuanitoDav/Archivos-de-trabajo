//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h> //Necesario para configurar la consola.

using namespace std;

int main(){
	//Configurar la consola para que use UTF-8.
	SetConsoleOutputCP(CP_UTF8);
	double valor = 123.456789;
	
	cout << fixed; //Estableces el formato fijo una vez...
	cout.precision(2);
	cout << "Con 2 decimales: " << valor << endl; //Imprime con 2 decimales.
	
	cout.precision(4);
	cout << "Con 4 decimales: " << valor << endl; //Imprime con 4 decimales.
	
	cout.precision(6);
	cout << "Con 6 decimales: " << valor << endl; //Imprime con 6 decimales.
	
	cout.unsetf(ios::fixed); //Desactiva fixed.
	cout.precision(2);
	cout << "Con 2 dígitos significativos: " << valor << endl;
	cout << "Prueba de áéíóúüïñ#";
	return 0;
}
