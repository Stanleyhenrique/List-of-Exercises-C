#include <stdio.h>

unsigned int e_bissexto(int);

int main(){

    int ano;

    printf("Digite um ano no formato aaaa: ");
    scanf("%4d", &ano);
    printf("%d%s", ano, e_bissexto(ano) ? " e' bissexto" : " nao e' bissexto");

return 0;
}


unsigned int e_bissexto(int ano_teste){

    return ((ano_teste % 4 == 0 && ano_teste % 100 != 0) || (ano_teste % 400 == 0));
}
 

