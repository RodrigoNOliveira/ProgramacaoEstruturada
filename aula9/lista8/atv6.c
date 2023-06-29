#include<stdio.h>	
#include<stdlib.h>

int main(){
	FILE *arquivo;
	srand(time(NULL));
	int c, op = 1, j, k, l;
	
	arquivo = fopen("atv6.txt", "w");
	
	if(arquivo==NULL){
		printf("Arquivo de origem não foi aberto.\n");
		return 1;
		} else{
			
		for(j = 0; j < 10; j++){
				for(k = 0; k < 10; k++){
				l =  10 +rand() % (99-10);
				fprintf(arquivo,"%d ", l);
				}
				fprintf(arquivo,"\n");
		}
		
		
		fclose(arquivo);
	}
	return 0;
}


