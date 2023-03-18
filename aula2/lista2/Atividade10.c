#include<stdio.h>


int main(){
	int vida, atq, dfs;
    double exp;

    printf("Insira a vida do seu jogador: ");
	scanf("%i", &vida);
    printf("Insira o ataque do seu jogador: ");
	scanf("%i", &atq);
    printf("Insira a defesa do seu jogador: ");
	scanf("%i", &dfs);

    exp = (vida + atq +dfs)/3;


    if(exp>=0 && exp<=25){
        printf("Seu nivel é: novato");
    }else if(exp>25 && exp<=50){
        printf("Seu nivel é: mago");
    }else if(exp>50 && exp<=75){
        printf("Seu nivel é: mago supremo");
    } else{  
        printf("Seu nivel é: lord das magias");
    } 

	return 0;
}

