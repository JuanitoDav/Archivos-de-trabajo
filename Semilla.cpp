//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int i=0, j=1, y;
	char c;
	
	do{
		y=1+1;
		cout<<y<<"\n";
		i=j;
		j=y;
		
		cout<<"¿Desea agregar otro? (c para terminar, t para continuar)\n";
		cin>>c;
		
	} while(c!='t');
	
	return 0;
}