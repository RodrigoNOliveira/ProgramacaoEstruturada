#include<stdio.h>	
#include<stdlib.h>
#include <time.h>


int main(){
	FILE *arquivo;
	
	int senhas, min, max, maiu, minu, carac, num, i, j, valor, x = 0;
	arquivo = fopen("senhas.txt", "w");
	
	
	printf(">>>> GERADOR DE SENHAS <<<<\n\n");
    printf("\nInforme a quantidade de senhas:");
    	scanf("%d", &senhas);
    printf("\nInforme a quantidade mínima de caracteres das senhas:");
    	scanf("%d", &min);
    printf("\nInforme a quantidade máxima de caracteres das senhas:");
    	scanf("%d", &max);
    printf("\nAs senhas terão letras maiúsculas? (1 para sim, 0 para não):");
    	scanf("%d", &maiu);
    printf("\nAs senhas terão letras minúsculas? (1 para sim, 0 para não):");
    	scanf("%d", &minu);
    printf("\nAs senhas terão caracteres especiais? (1 para sim, 0 para não):");
    	scanf("%d", &carac);
    printf("\nAs senhas terão números? (1 para sim, 0 para não):");
    	scanf("%d", &num);
	if(arquivo==NULL){
		printf("Arquivo de origem não foi aberto.\n");
		return 1;
		} else{
			for(i = 0; i < senhas; i++){
				char senha[100];
				valor = min + rand() % (max - min);
						for(j = 0; j < valor; j++){
							senha[j] = rand() % 26;
							do{
							x = rand() % 4;
								switch (x){
									case 0: 
										if(maiu == 1){
										fprintf(arquivo, "%c",senha[j]+65);
											x = 5;
										}
										break;
									case 1:
										if(minu == 1){
											fprintf(arquivo, "%c",senha[j]+97);
												x = 5;
										}
										break;
									case 2: 
										if(carac == 1){
										int c;
											c = rand()%2;
											if(c == 0){
												fprintf(arquivo, "%c",(senha[j]+4)/2+33);
											}
											else{
												fprintf(arquivo, "%c",(senha[j]+2)/4+58);
											}
										
												x = 5;
										}
										break;
									case 3:
										if(num == 1){
											fprintf(arquivo, "%c",(senha[j]+4)/3+48);
											x = 5;
										}
										break;
								}
							}while(x != 5);
						}	
						fprintf(arquivo, "\n");		
			}
		fclose(arquivo);
	}
	return 0;
}

