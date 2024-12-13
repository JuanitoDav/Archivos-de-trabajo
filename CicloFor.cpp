//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int x, y;
	float z;
	
	for(x=0;x<=100;x+=1){
		cout<<x<<", ";
	}
	cout<<"\n";
	system("pause");
	cout<<"\n";
	
	for(x=100;x!=65;x-=5){
		z=sqrt(x);
		cout<<"La raíz cuadrada de "<<x<<" es "<<z<<"\n";
	}
	system("pause");
	cout<<"\n";
	
	x=10;
	for(y=9; y!=x;++y){
		cout<<y<<" Dentro del ciclo (nunca entra)\n";
	}
	cout<<y<<" Fuera del ciclo\n";
	system("pause");
	cout<<"\n";
	
	for(x=0,y=0;x+y<10;++x){
		cout<<"Dame el valor de y: ";
		cin>>y;
		cout<<x<<"+"<<y<<"="<<x+y<<" El ciclo continúa mientras la suma sea < 10\n";
	}
	cout<<x<<"+"<<y<<"="<<x+y<<" Fuera del ciclo\n";
	system("pause");
	cout<<"\n";
	
	for(x=0;x!=123;){
		cout<<"Dame el valor de x, escribe 123 para terminar el ciclo: ";
		cin>>x;
	}
	system("pause");
	cout<<"\n";
	
	x=1;
	for(;x<=10;){
		printf("%d\n", x);
		++x;
	}
	system("pause");
	cout<<"\n";
	
	cout<<"Hola mundo\n";
	for(x=0;x<1000000000;x++);
	    cout<<"Hola mundo después de unos cuantos segundos";
	
	return 0;
}