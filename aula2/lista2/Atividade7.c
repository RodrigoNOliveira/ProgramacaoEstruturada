#include<stdio.h>
#include <math.h>

int main(){
    int latas;
    double metros, litros;
    printf("Insira os metros quadrados da area a ser pintada: ");
	scanf("%lf", &metros);
    
    litros = metros/3;

    latas = (int)litros/18;
    
    
    if(fmod(litros,18.0)>0){
        latas+=1;
    }
    
    double valor = latas * 80.00;

    printf("A quantidade de latas a serem compradas é de: %i\nFicando no valor total de: %0.2lf", latas, valor);

	return 0;
}
