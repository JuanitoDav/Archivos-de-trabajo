//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>

using namespace std;

//Encabezado de funciones
void marco1(void);
void marco2(char c, int c1, int r1, int c2, int r2);
void gotoxy(int x, int y);
//Variables globales
int y=123;
int x=1000;

int main(void){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	//Variables globales a main
	int x=0;
	int r1, r2, c1, c2;
	char c;
	
	marco1();
	gotoxy(10, 10);
	cout<<"El valor de x en main es: "<<x;
	marco2('*', 60, 2, 70, 5);
	marco2('@', 10, 15, 60, 17);
	gotoxy(1, 20);
	system("pause");
	system("CLS");
	printf("Captura de parámetros\n");
	printf("¿Con cuál carácter quieres que se imprima el marco? ");
	cin>>c;
	cout<<"Dame la columna 1: ";
	cin>>c1;
	cout<<"Dame el renglón 1: ";
	cin>>r1;
	cout<<"Dame la columna 2: ";
	cin>>c2;
	cout<<"Dame el renglón 2: ";
	cin>>r2;
	marco2(c, c1, r1, c2, r2);
	gotoxy(1, 26);
	
	return 0;
}

void marco1(void){
	int x;
	
	for(x=1;x<80;x++){
		gotoxy(x, 1);
		cout<<"-";
		//gotoxy(x, 25);
		gotoxy(x, 19);
		cout<<"-";
	}
	
	//for(x=2;x<26;x++)
	for(x=2;x<20;x++){
		gotoxy(1, x);
		cout<<"|";
		gotoxy(79, x);
		cout<<"|";
	}
	
	gotoxy(10, 12);
	cout<<"El valor de x en la función es: "<<x;
	gotoxy(10, 13);
	cout<<"El valor de y en la función es: "<<y; //Variable global
}

void marco2(char c, int c1, int r1, int c2, int r2){
	int x;
	
	for(x=c1;x<=c2;x++){
		gotoxy(x, r1);
		cout<<c;
		gotoxy(x, r2);
		cout<<c;
	}
	
	for(x=r1;x<=r2;x++){
		gotoxy(c1, x);
		cout<<c;
		gotoxy(c2, x);
		cout<<c;
	}
	
	return; //Esta sí tiene return
}

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}