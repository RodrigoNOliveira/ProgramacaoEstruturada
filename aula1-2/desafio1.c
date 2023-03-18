#include<stdio.h>


int main(){
	double km;
	double result;
	printf("Insira a distância entre dois planetas em quilometros: ");
	scanf("%lf", &km);
    result = (km*1000)/299792458;
	printf("Tempo para viajar na velocidade da luz: \nSegundos: %lf \nMinutos: %lf \nHoras: %lf", result, result/60, result/3600);

	

	return 0;
}

