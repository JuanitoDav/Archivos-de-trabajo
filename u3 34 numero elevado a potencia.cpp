//Juan David Pérez Martínez
//24041214

//#include <stdio.h>
#include<math.h>
#include <iostream>
using namespace std;
main()
{
	float exponente, numero, resultado;
	cout<<"Dame el valor del numero: ";
	cin>>numero;
	cout<<"Dame el valor del exponente: ";
	cin>>exponente;
	if(exponente==0)
		resultado=1;
	else
		if(exponente>0)
			resultado=pow(numero,exponente);
		else
			resultado=1/pow(numero,abs(exponente));
	printf("El resultado es: %5.5f\n",resultado);
	cout<<"El resultado es: "<<resultado;
}