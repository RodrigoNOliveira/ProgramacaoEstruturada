#include<stdio.h>	

int main(){
	FILE *arquivo;
	int cont = 1, nmr;
	
	arquivo = fopen("atv2.txt", "w");
	
	if(arquivo==NULL){
		printf("Arquivo de origem não foi aberto.\n");
		return 1;
		} else{
		while(cont <= 100){
			
			fprintf(arquivo,"%2d  ", cont-1);
			if(cont %10 == 0){
				fprintf(arquivo,"\n");
			}
			cont++;
		}
		
		fclose(arquivo);
	}
	return 0;
}
