#include<stdio.h>
#include<math.h>



	int menu, adicao, sub, mult, div, Rdiv, x, y, raiz, seno, cosseno, tangente, raizn;
	
	printf("Escolha uma das opcoes:\n1. SOMA\n2. SUBTRACAO\n3. DIVISAO\n4. MULTIPLICACAO\n5. RESTO DDIVISAO INTEIRA\n6. EXPONENCIACAO E LOGARITMO (em uma base especificada pelo usuario)\n7. LOGARITMO NATURAL\n8. RAIZ QUADRADA\n9. RAIZ N-ESIMA\n10. SENO\n11. COSSENO\n12. TANGENTE\n");
	scanf("%d", &menu);
	
	switch(menu){
	
	case 1:printf("\nENTRE COM DOIS VALORES QUE DESEJA REALIZAR Soma: \n\n");
	scanf("%d%d",&x,&y); 
	adicao = x+y;
	printf("\nSoma de %d + %d = %d\n\n",x,y,adicao); 
    break;
    
	case 2:printf("\nENTRE COM DOIS VALORES QUE DESEJA REALIZAR Subtracao: \n\n");
	scanf("%d%d",&x,&y);
	sub = x-y;
	printf("\nSubtracao de %d e %d = %d\n\n",x,y,sub); 
    break;
    
	case 3:printf("\nENTRE COM DOIS VALORES QUE DESEJA REALIZAR Divisao (quociente): \n\n");
	scanf("%d%d",&x,&y); 
    div= x/y;
    printf("\nDivisao %d / %d = %d:\n\n",x,y,div);
    break;
    
    case 4:printf("\nENTRE COM DOIS VALORES QUE DESEJA REALIZAR multiplicacao: ");
    scanf("%d%d", &x, &y);
    mult = x*y;
    printf("\nMultiplicacao %d x %d = %d: ", x, y, mult);
    break;
    
	case 5:printf("\nENTRE COM DOIS VALORES QUE DESEJA REALIZAR Resto de divisao inteira: \n\n");
	scanf("%d%d",&x,&y); 
    Rdiv= x%y;
    printf("\nO Resto de divisão entre %d e %d =  %d\n\n",x,y,Rdiv);
    break;
    
	case 6:printf("\nENTRE COM OS VALORES QUE DESEJA REALIZAR Exponenciacao e logaritmo: \n\n");  
    int p,b,e; printf("digite base: ");
				scanf("%d",&b);
             printf("digite o expoente: " );
			 scanf("%d",&e);
             p=pow (e,b);          
    printf("potencie %d\n\n",p);  
    break;
    
	case 7:printf("\nENTRE COM O VALOR QUE DESEJA REALIZAR Logaritmo natural: \n\n");
	scanf("%d",&x); 
    double logN;
    x = 2.718282;
    logN = log(x);
    printf("Logaritmo natural eh  %.2f \n",logN);
    break;
    
	case 8:printf("\nINFORME O VALOR QUE DESEJA SABER Raiz quadrada: \n\n");
	scanf("%d",&x);
	raiz = sqrt(x);
	printf("Raiz quadrada %2.d = %2.f",x,raiz);
    break;
    
	case 9:printf("\nENTRE COM DOIS VALORES QUE DESEJA REALIZAR Raiz n-ésima: \n\n");
    printf("\nInforme o valor da Raiz:");
	scanf("%d",&x); 
    printf("\nInforme o valor que deseja elevar raiz:");
	scanf("%d",&y); 
    raiz= sqrt (x);
    raizn= pow (raiz,y);
    printf("raiz de %d = %2.f elevado enesima %d = %.2f\n\n\n\n",x,raiz,y,raizn); 
    printf("OBS::: nao existe raiz enesima de um numero negativo dos reais\n");
    break;
    
	case 10:printf("\n ENTRE COM O VALOR QUE DESEJA SABER O Seno: \n");
	scanf("%d",&x);
    seno = sin(x);
	printf("Valor de seno de %d =  %.2f \n",x,seno); 
    break;
    
	case 11:printf("\nENTRE COM O VALOR QUE DESEJA SABER O Corseno: \n\n");
	scanf("%d",&x); 
    cosseno = cos(x);
    printf("Valor de cosseno de %.2d = %.2f \n",x,cosseno);
    break;
   
    case 12:printf("\nENTRE COM O VALOR QUE DESEJA SABER Tangente: \n\n");
	scanf("%d",&x); 
    tangente = tan(x);
    printf("Valor de tangente de %.2d = %.2f \n\n",x,tangente);
    break;
    
	default:
    printf("\nOPCAO INVALIDA\n");
	} 
	
	return 0;
}


