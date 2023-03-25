#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    int min = 1;
    int max = 100;
    int senhaAlea, valor, tentativa = 1;
    srand(time(NULL));
    senhaAlea = min + (rand() % (max - min + 1));
    printf("Insira um valor de 1 a 100: ");
    scanf("%i", &valor);
    do{
    tentativa++;
   if(valor == senhaAlea){
        printf("Senha correta! Acesso garantido!");
        return 0;
    } else{
        if(valor > senhaAlea){
            printf("A senha é menor do que o valor inserido. \nTente novamente: ");
            scanf("%i", &valor);
        } else{
            printf("A senha é maior do que o valor inserido. \nTente novamente: ");
            scanf("%i", &valor);
        }
    }
    if(valor < 0 || valor > 100){
        tentativa--;
        printf("Valor inserido fora do intervalo de 1 a 100.\nInsira novamente:");
        scanf("%i", &valor);
        
    }
    if (tentativa == 5){
        printf("Senha incorreta. Número de tentativas excedido!");
    }
    }while(tentativa < 5);

    return 0;
}
