#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	//Juan David Pérez Martínez y Ariel Ochoa Solis
	//No. control: 24041214 y 24041205
	
	int matriz1[10][10], matriz2[10][10];
	int i, j, n;
	
	srand(time(0));
	
	do{
		cout<<"Dime cuántos elementos quieres generar <2-10>: ";
		cin>>n;
	} while(n>10 or n<2);
	
	cout<<"\n";
	cout<<"Matriz original\n";
	
	//Llenado aleatorio de la matriz original
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			matriz1[i][j]=rand()%10;
		}
	}
	
	//Impresión de la matriz original
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("[%2d]", matriz1[i][j]);
		}
		printf("\n");
	}
	
	cout<<"\n";
	cout<<"Matriz modificada\n";
	
	//Llenado de la matriz modificada
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			matriz2[i][j]=matriz1[i][j];
		}
	}
	
	//Impresión de la matriz modificada
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			printf("[%2d]", matriz2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}