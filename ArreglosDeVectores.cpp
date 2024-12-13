//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int vector[10];
	int i;
	
	for(i=0;i<10;i++){
		vector[i]=i*2;
	}
	
	for(i=0;i<10;i++){ //Se pasó el límite
		cout<<"vector["<<i<<"] = "<<vector[i]<<"\n";
	}
	
	vector[0]=100;
	vector[1]=200;
	vector[2]=300;
	cout<<vector[0]<<endl;
	cout<<vector[1]<<"\n";
	cout<<vector[2]<<"\n";
	
	for(i=0;i<10;i++){
		cout<<"Dame el valor del vector["<<i<<"]: ";
		cin>>vector[i];
	}
	
	for(i=0;i<10;i++){
		cout<<"vector["<<i<<"] = "<<vector[i]<<"\n";
	}
	
	return 0;
}