#include<stdio.h>
#include <math.h>

int main(){
    double arquivo, velocidade, result;
    printf("Insira o tamanho do arquivo a ser baixado (MB): ");
	scanf("%lf", &arquivo);
    printf("Insira a velocidade da sua internet (Mbps): ");
	scanf("%lf", &velocidade);
    
    result = arquivo/velocidade /60*8;

    printf("O tempo que sera gasto em minutos é de: %0.2lf\n", result);

	return 0;
}
