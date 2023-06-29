#include<stdio.h>	
#include<stdlib.h>

int main(){
	FILE *arquivo;
	srand(time(NULL));
	int c, op = 1, j, k, l, linha, palavra, letra;
	
	arquivo = fopen("atv5.txt", "w");
	
	if(arquivo==NULL){
		printf("Arquivo de origem não foi aberto.\n");
		return 1;
		} else{
			
			linha =  10 +rand() % (20-10);
		
		for(j = 0; j < linha; j++){
				palavra =  5 +rand() % (20-5);
				for(k = 0; k < palavra; k++){
					letra =  1 +rand() % (15-1);
					for(l = 0; l < letra; l++){
						c =  1 +rand() % (26-1);
						fprintf(arquivo,"%c", c+96);
					}
				fprintf(arquivo," ");
				}
				fprintf(arquivo,"\n");
		}
		
		
		fclose(arquivo);
	}
	return 0;
}


