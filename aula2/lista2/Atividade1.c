#include<stdio.h>


int main(){
	int valor;
    double pol;
    printf("Insira um valor inteiro em metros: ");
	scanf("%i", &valor);
    pol = (valor*100)/2.54;

	printf("Seu valor convertido em polegadas é de: %0.2lf",pol);
	return 0;
}

