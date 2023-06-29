#include<stdio.h>	
#include<stdlib.h>
#include <locale.h>

int main(){

	FILE *arquivo;
	FILE *arquivoNovo;
	
	char c;
	

	
	arquivo = fopen("texto9.txt", "r");
	arquivoNovo = fopen("atv9.txt", "w");
	
	if(arquivo==NULL){
		printf("Arquivo de origem não foi aberto.\n");
		return 1;
		} else{
		do{
			
			c = fgetc(arquivo);
			if(c > 96 ){
			fprintf(arquivoNovo,"%c", c-32);	
			}else{
			fprintf(arquivoNovo,"%c", c);	
			}
			
		}while(!feof(arquivo));
		fclose(arquivo);
		fclose(arquivoNovo);
		
	}

	return 0;
}


