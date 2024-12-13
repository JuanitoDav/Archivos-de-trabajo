//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int matriz[10][10], diags[2][10]; //Declara dos matrices
	int i, j, n;
	
	srand(time(0));
	
	do{
		cout<<"Dime cuántos elementos por lado tiene la matriz: <2-10> ";
		cin>>n;
	} while(n>10 or n<2);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			matriz[i][j]=rand()%100;
		}
	}
	
	cout<<"\n";
	cout<<"Impresión de la matriz\n";
	
	for(i=0;i<j;i++){
		for(j=0;j<n;j++){
			printf("%3d", matriz[i][j]);
		}
		cout<<"\n";
	}
	
	cout<<"\n";
	cout<<"Obtención de la diagonal normal\n";
	
	for(i=0;i<n;i++){
		diags[0][i]=matriz[i][i];
		printf("%3d", diags[0][i]);
	}
	
	cout<<"\n";
	cout<<"Obtención de la diagonal inversa\n";
	
	j=0;
	for(i=n-1;i>=0;i--){
		diags[1][j]=matriz[j][i];
		printf("%3d", diags[1][j]);
		j++;
	}
	
	return 0;
}