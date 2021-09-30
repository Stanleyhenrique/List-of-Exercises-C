#include <stdio.h>
#define TRUE 1
#define FALSE 0

int e_primo(int);

int main(){

    int num;

    do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
    }
    while(num <= 0);

    printf("%d%s", num, e_primo(num) ? " e' primo" : " nao e' primo");

return 0;
}

int e_primo(int num_teste){

    register int i, cont_div;

    cont_div = num_teste == 1 ? 1 : 2;

    for(i = 2; i <= num_teste / 2; i++){
        if(num_teste % i == 0){
            cont_div++;
            break;
        }
    }

return (cont_div == 2 ? TRUE : FALSE);
}

