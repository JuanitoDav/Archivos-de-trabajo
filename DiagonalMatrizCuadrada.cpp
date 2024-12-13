//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int matriz[10][10]; //Declara una matriz
	int i, j, n;
	
	srand(time(0)); //Inicializar la semilla de números aleatorios
	
	do{
		cout<<"Dime cuántos elementos por lado tiene la matriz: <2-10>";
		cin>>n;
	} while(n>10 or n<2);
	
	for(i=0;i<n;i++){ //Ciclo para renglones
		for(j=0;j<n;j++){ //Ciclo para columnas
			matriz[i][j]=rand()%100; //Genera número aleatorio entre 0 y 99
		}
	}
	
	cout<<"\n";
	cout<<"Impresión de la matriz\n";
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d", matriz[i][j]);
		}
		cout<<"\n";
	}
	
	cout<<"\n";
	cout<<"Impresión de la diagonal\n";
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				printf("%3d", matriz[i][j]);
			} else {
				printf("   ");
			}
		}
		cout<<"\n";
	}
	
	cout<<"\n";
	cout<<"Impresión de la súperdiagonal y súbdiagonal\n";
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j){
				printf("%3d", matriz[i][j]);
			} else {
				printf("   ");
			}
		}
		cout<<"\n";
	}
	
	return 0;
}