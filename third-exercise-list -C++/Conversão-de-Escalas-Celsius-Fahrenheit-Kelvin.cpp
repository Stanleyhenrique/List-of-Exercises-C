#include<stdio.h>
#include<locale.h>



int main(){
	setlocale(LC_ALL, "portuguese");
	float temp, cpf, cpk, fpc, fpk, kpc, kpf;
	int esc;
	
	printf("Escolha uma opcao:\n1. de Celsius para Fahrenheit.\n2. de Celsius para Kelvin.\n3. de Fahrenheit para Celsius.\n4. de Fahrenheit para Kelvin.\n5. de Kelvin para Celsius.\n6. de Kelvin para Fahrenheit.\n\n");
	scanf("%d", &esc);
	
	switch(esc){
		
		case 1:
			printf("Digite a temperatura a ser convertida: ");
			scanf("%f", &temp);
			cpf = (temp*9/5) + 32;
			printf("\n%.3f°C para Fahrenheit: %.3f°F", temp, cpf);
			break;
		
		case 2:
			printf("Digite a temperatura a ser convertida: ");
			scanf("%f", &temp);
			cpk = (temp-32) * 5/9 + 273,15;
			printf("\n%.3f°C para Kelvin: %.3f°K", temp, cpk);
			break;
			
		case 3:
			printf("Digite a temperatura a ser convertida: ");
			scanf("%f", &temp);
			fpc = (temp-32) * 5/9;
			printf("\n%.3f°F para Celsius: %.3f°C", temp, fpc);
			break;
			
		case 4:
			printf("Digite a temperatura a ser convertida: ");
			scanf("%f", &temp);
			fpk = (temp-32) * 5/9 + 273,15;
			printf("\n%.3f°F para Kelvin: %.3f°K", temp, fpk);
			break;
			
		case 5:
			printf("Digite a temperatura a ser convertida: ");
			scanf("%f", &temp);
			kpc = temp - 273,15;
			printf("\n%.3f°K para Celsius: %.3f°C", temp, kpc);
			break;
			
		case 6:
			printf("Digite a temperatura a ser convertida: ");
			scanf("%f", &temp);
			kpf = (temp-273,15) * 9/5 + 32;
			printf("\n%.3f°K para Fahrenheit: %.3f°F", temp, kpf);	
			break;		
		
	}	
	
	return 0;
	
}

