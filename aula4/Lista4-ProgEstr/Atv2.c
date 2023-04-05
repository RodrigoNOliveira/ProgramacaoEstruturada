#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    int valorPc, valor, opcao, soma;
    printf("PEDRA PAPEL OU TESOURA\n 1- PEDRA\n 2- PAPEL\n 3- TESOURA\nINSIRA SUA OPÇÃO: ");
    scanf("%i", &opcao);    
    if(opcao !=1 && opcao !=2 && opcao != 3){
        printf("Opção invalida!");
        return 0;
    }
    srand(time(NULL));
    valorPc = rand() %3;
    printf("\nOBJETO ESCOLHIDO PELO COMPUTADOR: ");
    switch(valorPc){
        case 0: 
            printf("PEDRA\n");
        break;
        case 1: 
            printf("PAPEL\n");
        break;
        case 2: 
            printf("TESOURA\n");
        break;
    }

        printf("\nRESULTADO: ");
      switch(opcao){
        case 1: 
            if (valorPc == 1)
            {
                printf("VOCÊ PERDEU!");
            } else if (valorPc == 0){
                printf("EMPATE!");
            } else{
                printf("VOCÊ GANHOU!");
            }
        break;
        case 2: 
            if (valorPc == 2)
            {
                printf("VOCÊ PERDEU!");
            } else if (valorPc == 1){
                printf("EMPATE!");
            } else{
                printf("VOCÊ GANHOU!");
            }
        break;
        case 3: 
             if (valorPc == 0)
            {
                printf("VOCÊ PERDEU!");
            } else if (valorPc == 2){
                printf("EMPATE!");
            } else{
                printf("VOCÊ GANHOU!");
            }
        break;
    }

    
    return 0;
}