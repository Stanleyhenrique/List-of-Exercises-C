#include<stdio.h>

int main(){
	int num1, num2, opcao, aux = 0;	
	printf("Escolha uma opcao:");
	printf("\n\t1. Soma de dois numeros.");
	printf("\n\t2. Diferenca entre dois numeros.");
	printf("\n\t3. Produto entre dois numeros.");
	printf("\n\t4. Divisao entre dois numeros(o denominador nao pode ser zero).\n");
	scanf("%d", &opcao);	
	switch(opcao){
		case 1:	
			printf("\n\nDigite dois valores: ");
			scanf("%d%d", &num1, &num2);
			aux = num1 + num2;
			printf("\nSoma de %d e %d: %d", num1, num2, aux);
			break;
		
		case 2:
			printf("\n\nDigite dois valores: ");
			scanf("%d%d", &num1, &num2);
			aux = num1 - num2;
			printf("\nDiferenca entre %d e %d: %d", num1, num2, aux);
			break;
			
		case 3:	
			printf("\n\nDigite dois valores: ");
			scanf("%d%d", &num1, &num2);
			aux = num1 * num2;
			printf("\nProduto entre %d e %d: %d", num1, num2, aux);
			break;
			
		case 4:
			printf("\n\nDigite dois valores: ");
			scanf("%d%d", &num1, &num2);
			aux = num1 / num2;
			printf("\nDivisao entre %d e %d: %d", num1, num2, aux);
			break;
			
		default:
				printf("Valor invalido!");				
		}
	
	return 0;	
	
}

