#include<stdio.h>	
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	FILE *arquivo;
	
	char buffer[1000];
	int cont = 1;
	

	
	arquivo = fopen("texto8.txt", "r");
	
	if(arquivo==NULL){
		printf("Arquivo de origem não foi aberto.\n");
		return 1;
		} else{
		do{
			if(fgets(buffer,1000,arquivo) != NULL){
				printf("%d. %s", cont, buffer);
				cont++;}
		}while(!feof(arquivo));
		fclose(arquivo);
		
	}

	return 0;
}


