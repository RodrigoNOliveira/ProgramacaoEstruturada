#include<stdio.h>	
#include<stdlib.h>

int main(){
	FILE *arquivo;
	
	char buffer[1000];
	int cont = 0;
	
	
	arquivo = fopen("atv5.txt", "r");
	
	if(arquivo==NULL){
		printf("Arquivo de origem não foi aberto.\n");
		return 1;
		} else{
		do{
			if(fgets(buffer,1000,arquivo) != NULL){
				printf("%s", buffer);
				cont++;}
		}while(!feof(arquivo));
		
		printf("\nA quantidade total de linhas é: %d", cont);
		fclose(arquivo);
		
	}

	return 0;
}


