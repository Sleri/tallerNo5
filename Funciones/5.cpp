#include <iostream>
#include <conio.h>
/*

* Programa: Conversion de segundos totales a horas, minutos y segundos
* Fecha: 8 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes

*/
using namespace std;
void tiempo(int segtotal, int& horas, int& min, int& seg);
	
//funcion principal
int main() {
	int totalSeg, h, m, s;
	printf("Ingrese el numero total de segundos: ");
	scanf("%d", &totalSeg);
	tiempo(totalSeg, h, m, s);
	printf("\nTiempo equivalente a la cantidad de segundos ingresados: \n");
	printf("Horas: %d minutos: %d segundos: %d", h, m, s);
}

//se hace la respectiva operacion de la unidades de tiempo
void tiempo(int segtotal, int& horas, int& min, int& seg){
	horas = segtotal / 3600;
	segtotal %= 3600;
	min = segtotal / 60;
	seg = segtotal % 60;
}
