//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int funcionFactorial(int n);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int num;
	
	cout<<"Dime un número para calcular su factorial: ";
	cin>>num;
	num=funcionFactorial(num);
	cout<<" = "<<num;
	
	return 0;
}

int funcionFactorial(int n){
	int x;
	
	cout<<n;
	
	for(x=n-1;x>=1;x--){
		cout<<" x "<<x;
		n=n*x;
	}
	
	return n;
}
