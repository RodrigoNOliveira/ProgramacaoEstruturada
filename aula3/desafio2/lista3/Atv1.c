#include<stdio.h>


int main(){
	int qtd;
    double valor, total;

    printf("Insira a quantidade de skins desejadas: ");
    scanf("%d", &qtd);

    if(qtd >= 10){
        valor = 1.00;
    }  else if (qtd >0 && qtd < 10) {
        valor = 1.30;
    } else{
        printf("Quantidade inserida invalida");
        return 0;
    }
    total = valor * qtd;

	printf("Valor total da compra: %0.2lf",total);
	return 0;
}

