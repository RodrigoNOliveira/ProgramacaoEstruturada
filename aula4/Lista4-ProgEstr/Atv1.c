#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    int valorPc, valor, opcao, soma;
    printf("Você quer par ou impar (1- Par 2- Impar): ");
    scanf("%i", &opcao);    
    if(opcao !=1 && opcao !=2){
        printf("Opção invalida!");
        return 0;
    }
    srand(time(NULL));
    valorPc = rand() %6;
    printf("Insira um valor de 0 a 5: ");
    scanf("%i", &valor);
    printf("Valor escolhido pelo computador: %i\n", valorPc);
    soma = valorPc + valor;
    printf("Valor da soma: %i\n", soma);
    if (opcao == 1){
        if (soma%2 ==0){
            printf("Você ganhou.");
        } else{
            printf("Você perdeu.") ;
        }
    } else if(opcao == 2){
        if (soma%2 ==0){
            printf("Você perdeu.");
        } else{
            printf("Você ganhou.") ;
        }
    } 
    return 0;
}