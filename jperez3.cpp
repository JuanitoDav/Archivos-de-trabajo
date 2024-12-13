#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	//Nombre: Juan David Pérez Martínez.
	//No. control: 24041214.
	
	int min, hr, min2, hr2, totalhr, totalmin;
	
	do{
		cout<<"Dame las horas del primer trayecto (no negativo): ";
		cin>>hr;
	} while(hr<0);
	
	do{
		cout<<"Dame los minutos del primer trayecto (0 a 59): ";
		cin>>min;
	} while(min>59);
	
	do{
		cout<<"Dame las horas del segundo trayecto (no negativo): ";
		cin>>hr2;
	} while(hr2<0);
	
	do{
		cout<<"Dame las minutos del segundo trayecto (0 a 59): ";
		cin>>min2;
	} while(min2>59);
	
	totalmin=min+min2;
	totalhr=hr+hr2;
	
	if(totalmin>59){
		totalhr++;
		totalmin=totalmin-60;
	}
	
	printf("Tiempo total del trayecto: %02d horas y %02d minutos", totalhr, totalmin);

	return 0;
}