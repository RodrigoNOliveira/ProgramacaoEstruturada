#include<stdio.h>

int main(){
	int horas;
    double salarioHora, salarioTotal, ir, inss, sindicato, salarioLiqd;
    printf("Insira o seu salario ganho a cada hora: ");
	scanf("%lf", &salarioHora);
    printf("Insira as horas trabalhadas no mes: : ");
	scanf("%i", &horas);

    salarioTotal = salarioHora * horas;
    ir = (salarioTotal * 11)/100;
    inss = (salarioTotal * 8)/100;
    sindicato = (salarioTotal * 5)/100;
    salarioLiqd = salarioTotal - ir - inss - sindicato;


	printf("Salario bruto: %0.2lf\n", salarioTotal);
    printf("IR: %0.2lf\n", ir);
    printf("inss: %0.2lf\n", inss);
    printf("Sindicato: %0.2lf\n", sindicato);
    printf("Salario liquido: %0.2lf\n", salarioLiqd);
	return 0;
}
