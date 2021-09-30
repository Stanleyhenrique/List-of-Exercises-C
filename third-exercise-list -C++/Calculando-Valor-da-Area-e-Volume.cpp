#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

#define PI  3.14

float CalcAreaE (float);
float CalcVolumeE (float);


float main()
{

    float raioE;
    float calcAreaEsfera;
    float calcVolumeEsfera;
    do
    {
        printf("Digite o raio da Esfera: ");
        scanf("%f",&raioE);

        if(raioE < 0)
        {
            printf("\nigite um valor inteiro positivo!\n");
        }

    }
    while(raioE < 0);

    calcAreaEsfera = CalcAreaE(raioE);
    calcVolumeEsfera = CalcVolumeE(raioE);

    printf("\nO valor da Area da Esfera e de: %.2f \n",calcAreaEsfera);
    printf("\nO valor da Volume da Esfera e de: %.2f \n",calcVolumeEsfera);
    system("PAUSE");
}

float CalcAreaE (float raio)
{
    float AreaE;

    AreaE = 4.0*PI*raio*raio;

    return AreaE;
}

float CalcVolumeE (float raio)
{
    float VolumeE;

    VolumeE = 4/3*PI*raio*raio*raio;

    return VolumeE;
}

