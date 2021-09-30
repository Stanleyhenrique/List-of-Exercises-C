/*
Escreva um programa que contenha uma única linha para impressão (um único
printf()) da seguinte saída:
  Um
	dois
		tres
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\n%s\\n\t%s\n\t\t%s", "Um", "Dois", "Três");

	system("PAUSE");
	return 0;

}

