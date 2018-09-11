#include <iostream>
#include <conio.h>
#include <string.h>
/*
* Programa: Lista desde 1 hasta x numero
* Fecha: 8 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes

*/
using namespace std;
//impresion de lista
int num(int n1){
	int i;
	for(i = 1; i <= n1; i++){
		printf("%d\n", i);
	}
}

//funcion principal
int main() {
	int num1;
	do{
		printf("Ingrese el numero al cual se le imprimira una lista: ");
		scanf("%d", &num1);
		num(num1);
		
	} while(num1 > 0);
	
	printf("Ingreso un numero negativo");
}

