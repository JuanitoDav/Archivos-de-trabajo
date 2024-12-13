//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char cadena[10];
	int len, i;
	
	cout<<"Dame una palabra en minúsculas: ";
	gets(cadena);
	len=strlen(cadena); //Obtiene la longitud de la cadena
	
	for(i=0;i<len;i++){
		cadena[i]=toupper(cadena[i]); //Convierte a mayúsculas cada elemento
	}
	
	cout<<"Impresión de la cadena completa: "<<cadena<<"\n";
	cout<<"Impresión elemento por elemento\n";
	
	for(int i=0;i<10;i++){
		cout<<"cadena["<<i<<"] = "<<cadena[i]<<"\n";
	}
	
	return 0;
}