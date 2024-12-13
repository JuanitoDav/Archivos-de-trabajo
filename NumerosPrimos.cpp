//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int n, x;
	
	do{
		cout<<"Dame un número mayor que 1: ";
		cin>>n;
	} while(n<2);
	
	for(x=2;x<n;x++){
		if(n%x==0){
			break;
		}
	}
	
	if(x==n){
		cout<<"Sí es primo.";
	} else {
		cout<<"No es primo.";
	}
	
	return 0;
}