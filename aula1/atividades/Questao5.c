#include<stdio.h>


int main(){
	int valor;
    printf("Insira um valor inteiro em metros: ");
	scanf("%i", &valor);

	printf("Seu valor convertido em centimetros é de: %i",valor*100);
	return 0;
}

