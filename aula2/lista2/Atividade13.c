#include <stdio.h>

int main()
{

    int opClasse, opRegiao, opArma;

    printf("Escolha uma das classes abaixo:\n1- Guerreiro\n2- Mago\n3- Druida\n4- Sacerdote\nInsira o numero da opção desejada: ");
    scanf("%i", &opClasse);

    //verifica se a escolha da classe esta dentro dos valores pedidos
    if (opClasse > 0 && opClasse < 5)
    {
        printf("Escolha uma das regioes abaixo:\n1- Azeroth\n2- Azkaban\n3- Aurora\n4- Brightwood\nInsira o numero da opção desejada: ");
        scanf("%i", &opRegiao);
        //verifica se a escolha da regiao esta dentro dos valores pedidos
        if (opRegiao > 0 && opRegiao < 5)
        {
            printf("Escolha uma das armas abaixo:\n1- Machado cego\n2- Picareta invertida\n3- Adaga sem ponta\n4- Corrente sem elo\nInsira o numero da opção desejada:");
            scanf("%i", &opArma);

            //verifica se a escolha da arma esta dentro dos valores pedidos
            if (opArma < 0 || opArma > 4){
                printf("Opção inserida invalida!");
                return 0;
            }else{
                //Testa a classe e imprime na tela
                if (opClasse == 1){
                    printf("Você agora é um Guerreiro");
                }else if (opClasse == 2){
                    printf("Você agora é um Mago");
                }else if (opClasse == 3){
                    printf("Você agora é um Druida");
                }else if (opClasse == 4){
                    printf("Você agora é um Mago Sacerdote");
                }

                //Testa a regiao e imprime na tela
                if (opRegiao == 1){
                    printf(" da regiao de Azeroth");
                }else if (opRegiao == 2){
                    printf(" da regiao de Azkaban");
                }else if (opRegiao == 3){
                    printf(" da regiao de Aurora");
                }else if (opRegiao == 4){
                    printf(" da regiao de Brightwood");
                }

                //Testa a arma e imprime na tela
                if (opArma == 1){
                    printf(" armado com um Machado cego");
                }else if (opArma == 2){
                    printf(" armado com uma Picareta invertida");
                }else if (opArma == 3){
                    printf(" armado com uma Adaga sem ponta");
                }else if (opArma == 4){
                    printf(" armado com uma Corrente sem elo");
                }
            }
        }else{
            printf("Opção inserida invalida!");
            return 0;
        }
    }else{
        printf("Opção inserida invalida!");
        return 0;
    }
    return 0;
}