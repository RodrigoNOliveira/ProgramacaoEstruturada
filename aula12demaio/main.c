#include<stdio.h>
int main(){
	FILE *arquivo;
	FILE *arquivoDestino;
	char buffer[750];
	int dia, mes, ano;
	
	arquivo = fopen("data.txt", "r");
	arquivoDestino = fopen("copia.txt", "w");
	
	if(arquivo==NULL){
		printf("Arquivo de origem não foi aberto.\n");
		return 1;}
	if(arquivoDestino==NULL){
		printf("Arquivo de destino não foi aberto.\n");
		return 2;
	
	} else{
		while(!feof(arquivo)){
			fgets(buffer, 750, arquivo);
			fprintf(arquivoDestino,"%s", buffer);
		}
		
		fclose(arquivo);
		fclose(arquivoDestino);
	}
	return 0;
}
