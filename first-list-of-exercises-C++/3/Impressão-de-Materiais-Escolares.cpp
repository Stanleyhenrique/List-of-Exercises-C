/* Escreva um programa que contenha uma única linha para impressão (um único
printf()) da seguinte saída:  

lapis		4.88
borrachas 	234.54 
Canetas 	42.04 
Cadernos 	8.00 
Fitas 		13.05

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

setlocale(LC_ALL, "portuguese");
float lapis=4.88, borrachas=324.54, canetas=42.04, cadernos=8.00, fitas=13.05;

printf("\nLapis%14.2f", lapis);
printf("\nBorrachas%10.2f", borrachas);
printf("\nCanetas%12.2f", canetas);
printf("\nCadernos%11.2f", cadernos);
printf("\nFitas%14.2f", fitas);

system("PAUSE");
return 0;
}

