#include <iostream>
#include <conio.h>
#include <string.h>
/*

* Programa: Funcion que recibe un caracter y determina si una vocal mayuscula o minuscula
* Fecha: 8 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes

*/
using namespace std;
//se compara la letra ingresada con las diferentes condiciones
void letra(char l){
	if(l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U'){
		printf("Es una vocal mayuscula");
	}else{
		if(l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u'){
			printf("Es una vocal minuscula");
		}else{
			printf("No es vocal");
		}
	}
}

//funcion principal
int main() {
	char l;
	printf("Ingrese una letra ");
	scanf("%c", &l);
	letra(l);
}

