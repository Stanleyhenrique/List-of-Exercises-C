#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

float convC (float);
float convF (float);

void main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    float temperatura;
    float temperaturaConv;


    printf("********** Conversao-de-Temperatura **********");
    system("color 0F");
    printf("\n1 - CELSIUS \n2 - FARENHEIT \n3 - SAIR\n");
    scanf("%d",&opcao);

    switch(opcao)
    {
    case 1:
        printf("Conversao para Farenheit.\n");
        printf("Digite a Temperatura em Farenheit:");
        scanf("%f",&temperatura);
        temperaturaConv = convC(temperatura);
        printf("A temp convertida para Celsious e de: %.2f\n",temperaturaConv);
        break;
    case 2:
        printf("Conversao para Farenheit.\n");
        printf("Digite a Temperatura em Celsius:");
        scanf("%f",&temperatura);
        temperaturaConv = convF(temperatura);
        printf("A temperatura convertida para Celsious e de: %.2f\n",temperaturaConv);
        break;
    default:
        printf("Voce optou por sair!");
        break;
    }

    system("PAUSE");
}

float convC (float temp)
{
    float tempC;
    tempC = (temp-32.0)*5.0/9.0;

    return tempC;
}

float convF(float temp)
{
    float tempF;
    tempF = (temp*9.0/5.0)+32.0;

    return tempF;
}

