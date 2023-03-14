#include<stdio.h>


int main(){
	int num, num2;
    printf("Insira um valor inteiro: ");
	scanf("%i", &num);
    printf("Insira outro valor inteiro: ");
	scanf("%i", &num2);

	printf("%i + %i = %i\n%i - %i = %i\n%i * %i = %i", 
            num, num2, num + num2,
            num, num2, num - num2,
            num, num2, num * num2);
	return 0;
}

