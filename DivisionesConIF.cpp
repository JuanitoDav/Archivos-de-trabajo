//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float numerador, denominador;
	
	cout<<"Dame el numerador (dividendo): ";
	cin>>numerador;
	cout<<"Dame el denominador (divisor): ";
	cin>>denominador;
	
	if(denominador){//Si el denominador es !=0 entonces es cierto
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	} else {
		cout<<"La división sobre cero no se permite\n";
	}
	system("pause");
	
	//Preguntando si es cero de manera explícita
	if(denominador!=0){
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	} else {
		cout<<"La división sobre cero no se permite\n";
	}
	system("pause");
	
	//Preguntando si por la negación de un valor diferente
	if(!denominador){
		cout<<"La división sobre cero no se permite\n";
	} else {
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	}
	
	return 0;
}