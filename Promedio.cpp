//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float c1=0.0;
	float c2=0.0;
	float c3=0.0;
	float promedio=0.0;
	
	cout<<"Dame la calificación 1: ";
	cin>>c1;
	cout<<"Dame la calificación 2: ";
	cin>>c2;
	cout<<"Dame la calificación 3: ";
	cin>>c3;
	promedio=(c1+c2+c3)/3;
	cout<<"El promedio de calificaciones es: "<<promedio<<"\n";
	system("pause");
	
	printf("Dame la calificación 1: ");
	scanf("%f", &c1);
	printf("Dame la calificación 2: ");
	scanf("%f", &c2);
	printf("Dame la calificación 3: ");
	scanf("%f", &c3);
	promedio=(c1+c2+c3)/3;
	printf("El promedio de calificaciones es: %7.2f", promedio);
	
	return 0;
}