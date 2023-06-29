#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    int tamanho, i, j;
    printf("Insira o valor para roma: ");
    scanf("%d", &i);
	
	
	char *uni[] = {"I", "IV", "V", "IX"};
	char *dez[] = {"X", "XL", "L"};

	int d, u, p;
	d = i/10*10;
	u = i-d;
	
	if( d <= 30){
		p = d/10;
		for (j = 0 ; j < p; j++){
			printf("%s", dez[0]);
		}
	} else if( d == 40){
		printf("%s", dez[1]);
	} else {
		printf("%s", dez[2]);
	}
	
	if(u < 4){
		for (j = 0 ; j < u; j++){
			printf("%s", uni[0]);
		}
	} else if( u == 4){
			printf("%s", uni[1]);
	} else if( u == 9){
			printf("%s", uni[3]);
	} else if (u > 4 && u < 9){
		printf("%s", uni[2]);
		for (j = 0 ; j < u - 5; j++){
			printf("%s", uni[0]);
		}
	}



}
    
