#include <stdio.h>

int pontuacacao(int vit, int emp){
    int total;

    total = (vit*3) + emp;
    return(total);
}
int main()
{

    int vit1, vit2, emp1, emp2, der1, der2, op;

    printf("Quantidade de vitorias da equipe 1: ");
    scanf("%i", &vit1);
    printf("Quantidade de empates da equipe 1: ");
    scanf("%i", &emp1);
    printf("Quantidade de derrotas da equipe 1: ");
    scanf("%i", &der1);

    printf("Quantidade de vitorias da equipe 2: ");
    scanf("%i", &vit2);
    printf("Quantidade de empates da equipe 2: ");
    scanf("%i", &emp2);
    printf("Quantidade de derrotas da equipe 2: ");
    scanf("%i", &der2);


    printf("Você deseja ver a pontuação da equipe 1 ou equipe 2(1 ou 2): ");
    scanf("%i", &op); 
    if(op == 1){
        printf("Equipe 1:\nVitorias: %i\nEmpates: %i\nDerrotas: %i\nPontuação total: %i", vit1,emp1,der1,  pontuacacao(vit1, emp1));
    } else if( op ==2){
        printf("Equipe 2:\nVitorias: %i\nEmpates: %i\nDerrotas: %i\nPontuação total: %i", vit2,emp2,der2,  pontuacacao(vit1, emp1));
    }

    return 0;
}
