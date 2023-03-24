#include <stdio.h>

int main()
{

    int vit, emp, der, total;
    double pVit, pEmp, pDer;

    printf("Quantidade de vitorias da equipe IFTM: ");
    scanf("%i", &vit);
    printf("Quantidade de empates da equipe IFTM: ");
    scanf("%i", &emp);
    printf("Quantidade de derrotas da equipe IFTM: ");
    scanf("%i", &der);

    total = vit + emp + der;
    pVit = ((double)vit*100)/total;
    pEmp = ((double)emp*100)/total;
    pDer = ((double)der*100)/total;

    printf("Equipe 1:\nVitorias: %i\nEmpates: %i\nDerrotas: %i\nPercentual de vitoria: %0.2lf\nPercentual de empate: %0.2lf\nPercentual de derrotas: %0.2lf\n", vit, emp, der, pVit,pEmp,pDer);

    return 0;
}
