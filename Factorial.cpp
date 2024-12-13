//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int x, factorial;
	
	cout<<"Dime un número para calcular su factorial: ";
	cin>>factorial;
	cout<<factorial;
	
	for(x=factorial-1;x>=1;x--){
		cout<<" x "<<x;
		factorial=factorial*x;
	}
	
	cout<<" = "<<factorial;
	
	return 0;
}