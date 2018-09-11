#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;
/*
* Programa: Cantidad de vocales en un nombre o frase
* Fecha: 11 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

void cantidad(char caracteres[50]){
	int a = 0, e = 0, i = 0, o = 0 , u = 0, suma = 0;
	for(int x = 0; x < 50; x++){
		//segun el caso
		switch(caracteres[x]){
			case 'a': a++; 
			break;
			case 'e': e++; 
			break;
			case 'i': i++; 
			break;
			case 'o': o++; 
			break;
			case 'u': u++; 
			break;
		    default: "No hay vocales";
		    
	    }
    }
	suma = a + e + i + o + u;
	printf("Hay %d vocales\n", suma);
}

//funcion principal
int main(){
	char nombre[50];
	printf("Ingrese un nombre: ");
	gets(nombre);
	cantidad(nombre);
	return 0;
}

