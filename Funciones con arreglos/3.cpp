#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;
/*
* Programa: Mayor a menor
* Fecha: 11 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

//se guardan los numeros en el arreglo
void crear(int n1[], int n){
	printf("Ingrese los numeros: \n");
	for(int i = 0; i < n; i ++){
		scanf("%d", &n1[i]);
	}
}


//se ordenan los numeros del arreglo
void ordenar(int n1[], int n){
	int aux;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - 1; j++){
			if( n1[j] > n1[j+1]){
				aux = n1[j];
				n1[j] = n1[j+1];
				n1[j+1] = aux;  
			}	     	
		}
	} 	 
}


//se imprimen los numeros del arreglo
void ver(int n1[], int n){
	printf("Elementos ordenados de manera ascendente: \n");
	for(int i = 0; i < n; i++){
		printf("%d\n", n1[i]);
	}
}

//funcion principal
int main() {
	int numeros[50];
	int tamano;
	printf("Ingrese la cantidad de numeros que va a ingresar: ");
	scanf("%d", &tamano);
	crear(numeros, tamano);
	ordenar(numeros, tamano);
	ver(numeros, tamano);
	
	return 0;
}

