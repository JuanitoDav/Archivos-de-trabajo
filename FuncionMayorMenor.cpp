//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

void captura(void);

int maximo(int i, int j);

int main(void){ //<- Este void es opcional
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int mayor=0;
	
	captura();
	mayor=maximo(1, -1);
	cout<<"El mayor es "<<mayor;
	
	return 0;
}

void captura(void){
	int x, y;
	
	cout<<"Dame un número entero: ";
	cin>>x;
	cout<<"Dame otro número entero: ";
	cin>>y;
	cout<<"El mayor es: "<<maximo(x, y)<<'\n';
}

maximo(int i, int j){
	if(i>j){
		return i;
	} else {
		return j;
	}
}
