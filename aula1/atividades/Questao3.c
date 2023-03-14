#include<stdio.h>


int main(){
	int num;
    printf("Insira um valor inteiro: ");
	scanf("%i", &num);

	printf("Número digitado: %i\nSeu dobro: %i\nSeu triplo: %i", num, num*2, num*3);
	return 0;
}

