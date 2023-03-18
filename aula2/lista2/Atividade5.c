#include<stdio.h>
#include <math.h>


int main(){
	int n1,n2;
    double d1, quest1, quest2, quest3;
    printf("Insira um numero inteiro: ");
	scanf("%i", &n1);
    printf("Insira outro numero inteiro: ");
	scanf("%i", &n2);
    printf("Insira um numero real: ");
	scanf("%lf", &d1);

    quest1 = (2*n1)+((double)n2/2);
    quest2 = ((double)n1*3) + d1;
    quest3 = pow(d1,3);

	printf("O produto do dobro do primeiro com metade do segundo: %0.2lf\n", quest1);
    printf("A soma do triplo do primeiro com o terceiro: %0.2lf\n", quest2);
    printf("O terceiro elevado ao cubo: %0.2lf\n", quest3);
	return 0;
}

