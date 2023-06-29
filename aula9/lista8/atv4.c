#include<stdio.h>	
#include<stdlib.h>

int main(){
	FILE *arquivo;
	int cont = 1, op = 1, j;
	
	arquivo = fopen("atv4.txt", "w");
	
	if(arquivo==NULL){
		printf("Arquivo de origem não foi aberto.\n");
		return 1;
		} else{
		while(cont <=50 ){	
	
			char *uni[] = {"I", "IV", "V", "IX"};
			char *dez[] = {"X", "XL", "L"};

			int d, u, p;
			d = cont/10*10;
			u = cont-d;
	
			fprintf(arquivo,"%d :: ", cont);
	
			if( d <= 30){
				p = d/10;
				for (j = 0 ; j < p; j++){
				fprintf(arquivo,"%s", dez[0]);
				}
			} else if( d == 40){
			fprintf(arquivo,"%s", dez[1]);
			} else {
				fprintf(arquivo,"%s", dez[2]);
			}	
	
			if(u < 4){
				for (j = 0 ; j < u; j++){
					fprintf(arquivo,"%s", uni[0]);
				}
			} else if( u == 4){
				fprintf(arquivo,"%s", uni[1]);
			} else if( u == 9){
				fprintf(arquivo,"%s", uni[3]);
			} else if (u > 4 && u < 9){
				fprintf(arquivo,"%s", uni[2]);
				for (j = 0 ; j < u - 5; j++){
					fprintf(arquivo,"%s", uni[0]);
				}
			}
			fprintf(arquivo,";\n");
		cont++;	
		}
		
		fclose(arquivo);
	}
	return 0;
}


