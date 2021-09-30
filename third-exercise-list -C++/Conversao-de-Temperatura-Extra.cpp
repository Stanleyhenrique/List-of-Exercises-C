#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

float convC (float);
float convF (float);
float convK (float);

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    float temperatura;
    float temperaturaConv;


    printf("********** Conversao de Temperatura **********");
    system("color 0F");
    printf("\n1 - CELSIUS PARA FARENHEIT \n2 - CELSIUS PARA KELVIN \n3 - FARENHEIT PARA CELSIUS \n4 - FARENHEIT PARA KELVIN  \n5 - KELVIN PARA CELSIUS  \n6 - KELVIN PARA FARENHEIT \n0 - SAIR\n");
    scanf("%d",&opcao);

    switch(opcao)
    {
    case 1:
        printf("Conversão de CELSIUS PARA FARENHEIT");
        printf("Digite a temperatura em CELSIUS:");
        scanf("%f",&temperatura);
        temperaturaConv = convF(temperatura);
        printf("A temperatura convetida em FARENHEIT e: %.2f",temperaturaConv);
        break;
    case 2:
        printf("Conversão de CELSIUS PARA KELVIN");
        printf("Digite a temperatura em CELSIUS:");
        scanf("%f",&temperatura);
        temperaturaConv = convK(temperatura);
        printf("A temperatura convetida em KELVIN e: %.2f",temperaturaConv);
        break;
    case 3:
        printf("Conversão de FARENHEIT PARA CELSIUS");
        printf("Digite a temperatura em FARENHEIT:");
        scanf("%f",&temperatura);
        temperaturaConv = convC(temperatura);
        printf("A temperatura convetida em CELSIUS e: %.2f",temperaturaConv);
        break;
    case 4:
        printf("Conversão de FARENHEIT PARA KELVIN");
        printf("Digite a temperatura em FARENHEIT:");
        scanf("%f",&temperatura);
        temperaturaConv = convK(temperatura);
        printf("A temperatura convetida em KELVIN e: %.2f",temperaturaConv);
        break;
    case 5:
         printf("Conversão de KELVIN PARA CELSIUS");
        printf("Digite a temperatura em KELVIN:");
        scanf("%f",&temperatura);
        temperaturaConv = convC(temperatura);
        printf("A temperatura convetida em CELSIUS e: %.2f",temperaturaConv);
        break;
    case 6:
         printf("Conversão de KELVIN PARA FARENHEIT");
        printf("Digite a temperatura em KELVIN:");
        scanf("%f",&temperatura);
        temperaturaConv = convK(temperatura);
        printf("A temperatura convetida em FARENHEIT e: %.2f",temperaturaConv);
        break;
    default:
        break;
        printf("Voce Digitou a opção de Sair!");

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

float convK(float temp)
{
    float tempK;
    tempK = temp + 273,15;

    return tempK;
}

