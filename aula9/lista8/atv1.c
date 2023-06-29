#include<stdio.h>	
#include <time.h>

int main(){
	FILE *arquivo;
	srand(time(NULL));
	int cont = 0, nmr;
	
	arquivo = fopen("atv1.txt", "w");
	
	if(arquivo==NULL){
		printf("Arquivo de origem não foi aberto.\n");
		return 1;
		} else{
		while(cont < 100){
			nmr =  -100 +rand() % (200);
			fprintf(arquivo,"%d  ", nmr);
			cont++;
		}
		
		fclose(arquivo);
	}
	return 0;
}
