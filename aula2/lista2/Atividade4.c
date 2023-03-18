#include<stdio.h>
#include <math.h>


int main(){
	int valor;
    double celsius;
    printf("Insira o valor da temperatura em graus farenheit: ");
	scanf("%i", &valor);
    celsius = 5*((double)valor-32)/9;

	printf("O valor da temperatura em graus celsius é de: %0.2lf", celsius);
	return 0;
}

