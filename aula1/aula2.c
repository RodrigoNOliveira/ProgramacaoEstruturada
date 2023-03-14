#include<stdio.h>


int main(){
	int dia = 10;
	int mes = 3;
	int ano =2023;
	int result;
	printf("André Luiz França dia: %i mes: %i ano: %i\n", dia, mes, ano);
	printf("Insira um valor inteiro para a variavel dia: ");
	scanf("%i", &dia);
	printf("Dia: %d\n", dia);

	printf("Soma dia + mes: %d\n", dia + mes);
	result = dia + mes;
	printf("Soma dia + mes: %d\n", result);

	return 0;
}

