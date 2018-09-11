#include <iostream>
#include <conio.h>
#include <string.h>
/*
* Programa: Multiplicacion entre dos numeros
* Fecha: 8 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes

*/
using namespace std;
//funcion que llama las variables y hace la multiplicacion
int mult(float n1, float n2){
	float resultado;
	resultado = n1 * n2;
	return resultado;
}

//funcion principal
int main() {
	int x;
	float num1, num2;
	printf("Ingrese dos numeros: \n");
	scanf("%f", &num1);
	scanf("%f", &num2);
	x = mult(num1, num2);
	printf("El resultado es: %d", x);
}

