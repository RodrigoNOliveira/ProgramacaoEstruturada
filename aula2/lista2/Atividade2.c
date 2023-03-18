#include<stdio.h>
#include <math.h>

#define PI 3.14159265358

int main(){
	int valor;
    double area, circ;
    printf("Insira o valor do raio para se calcular a area e perimetro de um circulo: ");
	scanf("%i", &valor);
    circ = valor*PI*2;
    area = pow(valor,2)*PI;

	printf("O valor da area do circulo: %0.2lf\nValor da circunferencia %0.2lf",area, circ);
	return 0;
}

