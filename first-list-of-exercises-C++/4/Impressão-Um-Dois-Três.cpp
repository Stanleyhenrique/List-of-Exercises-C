/*
Escreva um programa que contenha uma �nica linha para impress�o (um �nico
printf()) da seguinte sa�da:
  Um
	dois
		tres
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\n%s\\n\t%s\n\t\t%s", "Um", "Dois", "Tr�s");

	system("PAUSE");
	return 0;

}

