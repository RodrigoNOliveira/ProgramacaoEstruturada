//Em Redes Neurais Artificiais, a função de ativação de um neurônio define a saída desse neurônio de acordo com uma entrada ou conjunto de entradas. Em um único código implemente as seguintes funções de ativação abaixo:
//Observações: 
//x é o valor da entrada.
//e = 2,71828


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int degrau(int x)
{
    int res;
    if (x < 0){
    	res=0;
	} else {
		res =1;
	}
    return res;
}

double logistica(int x, double e){
	double res;
	
	res = 1/(1+pow(e, -x));
	
	return res;
		
	
}


double tangente(int x, double e){
	
	double res;
	
	res = (pow(e, x) - pow(e,-x))/(pow(e, x) + pow(e,-x));
	
	return res;
	
}


double sigmoideLinear(int x, double e){
	double res;
	
	res = x/(1+pow(e, -x));
	
	return res;
		
	
}

double gaussiana(int x, double e){
	double res, ele;
	ele = pow(x, 2);
	res = pow(e, ele);
	
	return 1/res;
		
	
}




int main()
{

    int x, d;
    double e = 2.71828;
    double  l, t, s, g;
    
    printf("Insira um valor inteiro: ");
    scanf("%d", &x);
    
    d = degrau(x);
    l = logistica(x, e);
    t = tangente(x,e);
    s = sigmoideLinear(x, e);
    g = gaussiana(x, e);
    
    
    printf("\n");
	printf("O degrau de X e: %d", d);
	printf("\n");
	printf("A logica(sigmoide) de X e: %lf", l);
	printf("\n");
	printf("A tangente hiperbolica de X e: %lf", t);
	printf("\n");
	printf("A sigmoide linear de X e: %lf", s);
	printf("\n");
	printf("A gaussiana de X e: %0.10lf",  g);
	printf("\n");
    return 0;
}

