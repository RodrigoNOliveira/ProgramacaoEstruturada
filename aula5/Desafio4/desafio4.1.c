#include <stdio.h>
#include <stdlib.h>

int main(){

    int soma, i;	

	for(i=0; i<1000; i++){
		if(i%3 == 0 || i%5==0){
			soma = soma + i;
		}
	}
	printf("A soma dos valores multiplos de 3 ou 5 abaixo de 1000 é: %i",soma);

    return 0;
}
