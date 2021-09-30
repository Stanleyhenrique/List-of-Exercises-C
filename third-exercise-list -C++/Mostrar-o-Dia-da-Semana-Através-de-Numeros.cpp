#include <stdio.h>
#include <conio.h>

int main(void){
	
	int valor;
	for(valor=0; valor<=7; valor++){
	printf("\ndigite um valor entre 1 e 7:");
	scanf("%d", &valor);

	
	switch(valor)
	{
	
	case 1:
		printf("\nDomingo");
	break;
	case 2:
		printf("\nSegunda-Feira");
	break;
	case 3:
		printf("\nTerca-Feira");
	break;
	case 4:
		printf("\nQuarta-Feira");
	break;
	case 5:
		printf("\nQuinta-Feira");
	break;	
	case 6:
		printf("\nSexta-Feira");
	break;	
	case 7:
		printf("\nSabado");
	break;
	default:
		printf("\nO valor digitado eh um valor invalido");
		return 0;
	}
		
	
