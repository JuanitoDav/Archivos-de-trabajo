#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int n, x;
	char otro;
	n=3;
	
	do{
		for(x=2;x<n;x++){
			for(n%x==0){
				break;
			}
		}
		
		if(x==n){
			cout<<n<<"Sí es primo\n";
			cout<<"¿Genero el siguiente número primo? <S/N>";
			cin>>otro;
		}
		n++;
	} while(otro=='S' or otro=='s');
	
	return 0;
}