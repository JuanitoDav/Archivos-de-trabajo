//Juan David Pérez Martínez
//24041214

#include <stdio.h>
#include <iostream>
#include <windows.h>
//#include <conio.h>
//#include <stdlib.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char c;
	char letras[20]="Hexadecimal";
	int i;
	float f;
	i=10;
	f=123.45;
	c='x';
	
	printf("Impresión simple\n");
	printf("La variable char tiene un valor de %c\n varint=%d\n varfloat=%f\n cadena=%s\n", c, i, f, letras);
	system("pause");
	
	printf("Impresión sin espacios\n");
	printf("%d%f%c%s\n", i, f, c, letras);
	printf("Impresión sin etiquetas\n");
	printf("Entero: $d Flotante: %f Carácter: %c Cadena: %s\n", i, f, c, letras);
	system("pause");
	
	printf("Dame un entero: ");
	fflush(stdin);
	scanf("%d", &i);
	puts("Dame un flotante: ");
	fflush(stdin);
	scanf("%f", &f);
	cout<<"Dame un carácter: ";
	fflush(stdin);
	scanf("%c", &c); //No acepta caracteres especiales
	//cin>>c; //No acepta caracteres especiales
	//getchar(c); //No acepta caracteres especiales
	printf("Dame una cadena: ");
	fflush(stdin);
	scanf("%[^\n]", letras);
	printf("Entero: %d, Flotante: %f, Carácter: %c, Cadena: %s\n", i, f, c, letras);
	
	i=12345;
	f=345.678;
	
	printf("Probando diferentes anchos en enteros: 3, 5 y 8 espacios\n");
	printf("%3d %5d %8d\n", i, i, i);
	system("pause");
	printf("Probando diferentes anchos en flotantes: 3, 10 y 13 espacios\n");
	printf("%3 %10f %13f\n", f, f, f);
	system("pause");
	printf("Probando diferentes anchos en exponencial: 3, 13 y 16 espacios\n");
	printf("%3e %10e %13e\n", f, f, f);
	system("pause");
	
	f=123.456;
	
	printf("Probando diferentes cantidades de cifras 7.0, 7.3, 7.1\n");
	printf("%7.0f %7.3f %7.1f\n", f, f, f);
	system("pause");
	
	return 0;
}
