//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	/*Un proceso que lee un precio normal y que pide un porcentaje de descuento,
	después poner el precio normal y luego con el descuento.*/
	
	float precio, pct, desc, pcttotal;
	
	cout<<"Escribe el precio de un producto: ";
	cin>>precio;
	cout<<"Escribe el porcentaje del descuento para ese producto: ";
	cin>>pct;
	pcttotal=precio*(pct/100);
	desc=precio-pcttotal;
	cout<<"El precio del producto es de: "<<precio<<" y con su descuento ahora es de: "<<desc;
	
	return 0;
}