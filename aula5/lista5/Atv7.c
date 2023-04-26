#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{   
    int a[4], i, soma =0, opcao, erro = 3, pontos =0;

    srand(time(NULL));


    while(erro!=0){
    soma = 0;
    printf("\nPontuação do usuario: %i\n\n", pontos);
    printf("\nNumero Binario:\n\n");   
    for ( i = 0; i < 4; i++){
       a[i] = rand() % 2;
       printf("%d ", a[i]);
       if (i == 0 && a[0] !=0){
        soma = soma + 8;
       } else if (i == 1 && a[1] !=0){
        soma = soma + 4;
       }  else if (i == 2 && a[2] !=0){
        soma = soma + 2;
       }  else if (i == 3 && a[3] !=0){
        soma = soma + 1;
       }
    }   

        printf("\n\nInsira o valor em decimal do numero acima: ");
        scanf("%i", &opcao);
        if(opcao == soma){
            pontos++;
            printf("\nValor correto!");
        } else{
            erro--;
            printf("\nValor incorreto! Chances restantes: %i", erro);
            printf("\n\nO valor em decimal é: %d", soma);
        }


        printf("\n\n----------------------------\n\n");


  }   
    printf("FIM DO JOGO");

    return 0;
}
