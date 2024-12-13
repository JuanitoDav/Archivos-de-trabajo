//Juan David Pérez Martínez
//24041214

#include <stdio.h>
//#include <stdlib.h>
#include <iostream>
#include <windows.h> //Necesario para configurar la consola en Windows.

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8); //Configura la salida.
	SetConsoleCP(CP_UTF8); //Configura la entrada.
	
	char cad[80];
	int i, j, k;
	
	puts("Usando scanf con juegos de inspección\n");
	puts("Dame una cadena con espacios");
	scanf("%s", cad);
	cout<<cad<<"\n";
	fflush(stdin);
	puts("Dame una cadena de mayúsculas y espacios");
	scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]", cad);
	puts(cad);
	puts("Dame una cadena de mayúsculas, minúsculas y espacios");
	fflush(stdin);
	scanf("%[ a-zA-Z]", cad);
	cout<<cad<<"\n";
	puts("Dame una cadena que con cualquier carácter y termina con un enter");
	fflush(stdin);
	scanf("%[^\n]", cad);
	puts(cad);
	puts("Dame 3 números enteros de máximo 3 cifras");
	scanf("%3d %3d %3d", &i, &j, &k);
	printf("%d %d %d", i, j, k);
	printf("\a");
	
	return 0;
}
