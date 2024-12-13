//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int m1[10][10], m2[10][10], m3[10][10]; //Declaro tres matrices
	int v1[10], v2[10], v3[10]; //Declaro tres vectores
	int i, j, n;
	
	srand(time(0));
	
	do{
		cout<<"¿Cuántos elementos por lado tienen matriz y vector? <2-10> ";
		cin>>n;
	} while(n>10 or n<2);
	
	//Llenado aleatorio de la primera matriz
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			m1[i][j]=rand()%10;
		}
	}
	
	//Llenado manual de la segunda matriz
	cout<<"\n";
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<"Dame el valor de m2["<<i<<"]["<<j<<"]: ";
			cin>>m2[i][j];
		}
	}
	
	//Impresión de matrices
	cout<<"\n";
	cout<<"Matriz 1\n";
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("[%2d]", m1[i][j]);
		}
		printf("\n");
	}
	
	cout<<"\n";
	cout<<"Matriz 2\n";
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("[%2d]", m2[i][j]);
		}
		printf("\n");
	}
	
	cout<<"\n";
	cout<<"Matriz 3\n"; //Impresión y suma de las matrices
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			m3[i][j]=m1[i][j]+m2[i][j];
			printf("[%2d]", m3[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	system("CLS");
	
	//Llenado aleatorio de los vectores, impresión y suma
	cout<<"V1  V2  V3\n";
	
	for(i=0;i<n;i++){
		v1[i]=rand()%10;
		v2[i]=rand()%10;
		v3[i]=v1[i]+v2[i];
		printf("%2d +%2d =%2d\n", v1[i], v2[i], v3[i]);
	}
	
	return 0;
}