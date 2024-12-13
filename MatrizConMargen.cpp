//Juan David Pérez Martínez
//24041214

#include <iostream>
#include <windows.h>
#include <time.h>
#include <conio.h>

using namespace std;

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int r, vec[10];
	
	srand(time(0));
	
	printf("Maximiza la pantalla y presiona una tecla");
	getche();
	system("CLS");
	
	for(r=0;r<=78;r++){//165
		gotoxy(r, 0);
		printf("*");
		gotoxy(r, 18);//40
		printf("*");
	}
	
	for(r=0;r<18;r++){//40
		gotoxy(0, r);
		printf("*");
		gotoxy(79, r);//165
		printf("*");
	}
	
	gotoxy(40, 2);//72, 17;
	cout<<"Impresión del vector\n";
	
	for(r=0;r<10;r++){
		vec[r]=rand()%100;
		gotoxy(40, r+3);//80, r+17
		printf("%d", vec[r]);
	}
	
	gotoxy(5, 13);//40, 13
	getche();
	
	return 0;
}