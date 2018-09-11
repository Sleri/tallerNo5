#include <iostream>
#include <conio.h>
#include <string.h>
/*
* Programa: Mayor de tres numeros
* Fecha: 8 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes

*/
using namespace std;
int numeros(int n1, int n2, int n3){
	int mayor;
//comparacion de los tres numeros
	if(n1 > n2 && n1 > n3){
		mayor = n1;
	}else{
		if(n2 > n3){
			mayor = n2;
		}else{
			mayor = n3;
		}
	}
	return mayor;
}

//funcion principal
int main() {
	int x, num1, num2, num3;
	printf("Ingrese tres numeros: \n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	x = numeros(num1, num2, num3);
	printf("El mayor es: %d", x);
}

