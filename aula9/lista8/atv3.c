#include<stdio.h>	
#include<stdlib.h>

int main(){
	FILE *arquivo;
	int op = 1;
	
	arquivo = fopen("atv3.txt", "w");
	
	if(arquivo==NULL){
		printf("Arquivo de origem não foi aberto.\n");
		return 1;
		} else{
		printf("Insira valores inteiros(O programa se encerra com o digito 0): \n");
		do{
		scanf("%d", &op);	
			if (op !=0){
			fprintf(arquivo,"%d ",op);	
			}
			
			if (op > 0 && op %2 == 0){
				fprintf(arquivo,"-> positivo par\n");
			}else if (op > 0 && op %2 != 0){
				fprintf(arquivo,"-> positivo impar\n");
			} else if (op < 0 && op %2 == 0){
				fprintf(arquivo,"-> negativo par\n");
			}else if (op < 0 && op %2 != 0){
				fprintf(arquivo,"-> negativo impar\n");
			}
		}while(op != 0);
		
		fclose(arquivo);
	}
	return 0;
}
