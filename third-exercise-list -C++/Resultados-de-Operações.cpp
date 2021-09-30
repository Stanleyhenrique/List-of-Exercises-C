#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>


float OperMat (float,float,char);


void main()
{
    float numero1;
    float numero2;
    char operacao;
    float resultado;

    printf("Operacao < + - * / >:");
    scanf("%c",&operacao);

    printf("Numero 1:");
    scanf("%f",&numero1);

    printf("Numero 2:");
    scanf("%f",&numero2);


    resultado = OperMat(numero1,numero2,operacao);

    printf("\nO resultado da %c e: %.2f\n ",operacao,resultado);

    system("PAUSE");
}


float OperMat (float num1,float num2, char oper)
{
    float operacao;

   switch( oper )
            {
                case '+':
                        operacao = num1 + num2;
                        break;

                case '-':
                        operacao = num1 - num2;
                        break;

                case '*':
                        operacao = num1 * num2;
                        break;

                case '/':
                       operacao = num1 / num2;
                        break;
                default:
                    operacao = 00000;
            }

    return operacao;

}

