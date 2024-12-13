//Juan David Pérez Martínez
//24041214

#include <math.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int horasalida, minsalida, segsalida, seginicial, segfinal;
	int segviaje, horallegada, minllegada, segllegada;
	
	cout<<"Dime las horas de salida: ";
	cin>>horasalida;
	cout<<"Dime los minutos de salida: ";
	cin>>minsalida;
	cout<<"Dime los segundos de salida: ";
	cin>>segsalida;
	cout<<"Dime el tiempo que dura el viaje (en segundos): ";
	cin>>segviaje;
	seginicial = horasalida * 3600 + minsalida * 60 + segsalida;
	segfinal = seginicial + segviaje;
	horallegada = trunc(segfinal / 3600);
	minllegada = trunc((segfinal % 3600) / 60);
	segllegada = (segfinal % 3600) % 60;
	cout<<"Hora de llegada: ";
	cout<<horallegada<<":"<<minllegada<<":"<<segllegada<<"\n";
	printf("Hora de llegada: %02d:%02d:%02d", horallegada, minllegada, segllegada);
	
	return 0;
}