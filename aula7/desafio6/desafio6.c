#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int i =0, j=0, x =0, tam, y=0, k, cont =0;
	int a[tam], sub[k];
	srand(time(NULL));
	printf("\nInsira o tamanho do vetor(minimo 3): ");
	scanf("%i", &tam);
	printf("\nInsira um valor para ser o inicial: ");
	scanf("%i", &x);
	printf("\nInsira um valor para ser o final: ");
	scanf("%i", &y);
  
	if (tam > 3) {
    	a[tam];
	} else if (tam < 4) {
    	tam = 3;
    	a[tam];
  	}
  	
	printf("\nArray de entrada: ");
	for (i = 0; i < tam; i++) {
    	a[i] = rand() % 9 + 1;
    	printf("%d ", a[i]);
  	}
  	
	printf("\nX: %i", x);	
	printf("\nY: %i", y);
	printf("\n");

	printf("\nArray de saida: ");
	while (x != (y+1)){	
		sub[cont] = a[x];
		printf("%i ", sub[cont]);
		cont++;
		x++;		
	}

  return 0;
}
