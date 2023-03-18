#include<stdio.h>
#include <math.h>


int main(){
	int valor;
    double farenheit;
    printf("Insira o valor da temperatura em graus celsius: ");
	scanf("%i", &valor);
    farenheit = (valor*1.8)+32;

	printf("O valor da temperatura em graus farenheit é de: %0.1lf", farenheit);
	return 0;
}

