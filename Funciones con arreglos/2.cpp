#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;
/*
* Programa: Arreglo de num1xnum2 con ceros y unos
* Fecha: 11 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

void arreglo(int n1,int n2){
	int matrizN[100][100];
	for (int i = 0; i < n1; i++){
		for(int j = 0; j < n1; j++){
			matrizN[i][j] = 0 + rand() % (2-0);
			printf("En la posicion [%d] [%d] esta : %d\n", i, j, matrizN[i][j]);
		}
	}
	
	//se imprime la matriz
	printf("\nMatriz: \n");
	for(int i = 0; i < n1; i++){
		for(int j = 0; j < n2; j++){
			matrizN[i][j] = 0 + rand() % (2-0);
			printf("%d ", matrizN[i][j]);
		}
		printf("\n");
	}
}

//funcion principal
int main() {
	int num1, num2;
	printf("Ingrese el primer numero: ");
	scanf ("%d",&num1);
	printf("Ingrese el segundo segundo: ");
	scanf ("%d",&num2);
	arreglo(num1, num2);
	
	return 0;
}

