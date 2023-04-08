#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int tamanho, chance,valor, soma =0, i, j;
    printf("Insira o tamanho do terreno: ");
    scanf("%i", &tamanho);

    for (i = 0; i < tamanho; i++){
        for (j = 0; j < tamanho; j++){
            chance = rand() % 10;
            if(chance <1){
                valor = 1 + rand() % 9;
                printf("%i ", valor);
                soma = soma + valor;
            } else{
                printf(". ");
                
            }
        }
        printf("\n");
    }
    
    if(soma <= 0){
        printf("Nenhum recurso encontrado");
    } else{
        printf("Foram encontrados %i recursos", soma);
    }







}
