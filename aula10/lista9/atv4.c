#include<stdio.h>
#include<stdlib.h>
#include<time.h>>

int main(){
    srand(time(NULL));
    int i, j, k;
    int n;
    char* nome[5];
    FILE *arquivo;
    
    for (k=1; k <= 10; k++){
    	sprintf(nome, "%d.pbm", k);
		arquivo = fopen( nome, "w");
    	fprintf(arquivo, "P1\n");
    	fprintf(arquivo, nome);
    	fprintf(arquivo, "7 10\n");
    	for(i = 0; i < 10; i++){
        	for(j = 0; j < 7; j++){
            	n = rand() % 2; 
                fprintf(arquivo, "%d ", n);
        	}
    	}
	fclose(arquivo);
	}
    
    
    
    return 0;

}
