#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    int soma, entrada, valor, valor1;	

    srand(time(NULL));
    
    

   	valor = rand() % 99+1;
    valor1 = rand() % 99+1;
    printf("Insira o valor da operação:\n%i + %i = ", valor,valor1);
    scanf("%i", &entrada);
    
    soma = valor + valor1;
    if(entrada == soma){
    	printf("\nResultado inserido correto!");
	}else{
		printf("\nResultado inserido incorreto! A resposta correta é: %i", soma);
	}
        
    return 0;
}
