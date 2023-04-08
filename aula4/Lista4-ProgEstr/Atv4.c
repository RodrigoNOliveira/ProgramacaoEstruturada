#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    int valorPc, valor, opcao, soma;
    
	printf("\n===============================\n");
	printf("|    1    |    2    |    3    |\n");
	printf("|         |         |         |\n");
	printf("|    4    |    5    |    6    |\n");
	printf("|         |         |         |\n");
	printf("|    7    |    8    |    9    |\n");
	printf("===============================\n");
	
	
	printf("Escolha uma posicao para chutar: ");
    scanf("%i", &opcao);    
    if(opcao < 1 || opcao>10){
        printf("\nOpcao invalida!");
        return 0;
    }
    srand(time(NULL));
    valorPc = rand() %9+1;
    
    if(opcao == valorPc){
        printf("\nO goleiro defendeu!");
    }
    else{
        printf("\nGOOOLLLLLLLLLLL");
        printf("\nO goleiro pulo no %i", valorPc);
    }
    
    
    
    return 0;
}
