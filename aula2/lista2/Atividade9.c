#include<stdio.h>


int main(){
	int valor;

    printf("Insira um valor inteiro: ");
	scanf("%i", &valor);

    if(valor>100 && valor<200){
        printf("Você digitou um numero entre 100 e 200");
    }else{
        printf("Você digitou um numero fora da faixa entre 100 e 200");
    }

	return 0;
}

