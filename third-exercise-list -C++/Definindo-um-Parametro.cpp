#include <stdio.h>
	#define E_PAR(x) ((x) % 2 == 0 ? 0 : 1)

	int main(){

	    int num;

	    scanf("%d", &num);
	    printf("%d", E_PAR(num));

	return 0;
	}

