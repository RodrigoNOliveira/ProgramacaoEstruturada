#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    int min = 1;
    int max = 100;
    int valorAlea, valor, tentativa = 1;
    srand(time(NULL));
    valorAlea = rand() % 101;
    printf("%i", valorAlea);
    printf("Insira um valor de 0 a 100: ");
    scanf("%i", &valor);
    do{
    tentativa++;
   if(valor == valorAlea){
        printf("Parabens, valor correto");
        return 0;
    } else{
        if(valor > valorAlea){
            printf("O valor é menor do que o valor inserido. \nTente novamente: ");
            scanf("%i", &valor);
        } else{
            printf("O valor é maior do que o valor inserido. \nTente novamente: ");
            scanf("%i", &valor);
        }
    }
    if(valor < 0 || valor > 100){
        tentativa--;
        printf("Valor inserido fora do intervalo de 0 a 100.\nInsira novamente:");
        scanf("%i", &valor);
        
    }
    if (tentativa > 5){
        printf("Número de tentativas excedido!");
    }
    }while(tentativa <= 5);

    return 0;
}