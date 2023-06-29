//Faça um procedimento que receba três números inteiros (start, stop, step) e imprima a sequência de números uniformemente espaçados dentro do intervalo especificado. Exemplo:
////start=2, stop=3, step=5 (o intervalo começa com 2, termina com 3, possui 5 valores)
//procedimento(2, 3, 5); 
//>> 2.0, 2.25, 2.5, 2.75, 3.0
//>> 2.00, 2.5, 3, 3.5, 4.0


#include <stdio.h>
#include <stdlib.h>


int main()
{

	void sequencia();
    int start, stop, step;

    printf("Insira o valor de start: ");
    scanf("%d",&start);
    printf("Insira o valor de stop: ");
    scanf("%d",&stop);
    printf("Insira o valor de step: ");
    scanf("%d",&step);
    sequencia(start, stop, step);
    
    return 0;
    }
	
void sequencia (int start, int stop, int step){
	int i;
	double espaco;
	double valor;
	
	espaco = (double)(stop-start)/(double)(step-1);
	for(i = 0; i < step; i++){
		valor= (espaco * i)+start;
		printf("%.2lf  ", valor);
	}
}
