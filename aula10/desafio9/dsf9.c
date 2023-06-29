#include<stdio.h>	
#include<stdlib.h>
#include <ctype.h>

void lerEimprimir(FILE *arquivo){
	char buffer[1000];
		do{
			if(fgets(buffer,1000,arquivo) != NULL){
				printf("%s", buffer);
				}
		}while(!feof(arquivo));
}

void contar(FILE *arquivo){
	char buffer[1000];
	int cont = 0;
		do{
			if(fgets(buffer,1000,arquivo) != NULL){
				cont++;
			}
		}while(!feof(arquivo));
		
		printf("\nA quantidade total de linhas é: %d", cont);
}

void letraIgual(FILE *arquivo){
	char buffer[1000];
	char letra;
	printf("\nDigite uma letra: ");
    scanf(" %c", &letra);
	do{
			if(fgets(buffer,1000,arquivo) != NULL){
				if(toupper(buffer[0]) == toupper(letra)){
				printf("%s", buffer);
				}
			}
		}while(!feof(arquivo));
}

int main(){
	FILE *arquivo;
	
	int op;
	arquivo = fopen("pokemon.txt", "r");
	
	
	printf("\nOpções:\n");
    printf("1. Ler e imprimir o conteúdo do arquivo na tela.\n");
    printf("2. Contar quantas linhas tem o arquivo e exibir a quantidade de linhas na tela.\n");
    printf("3. Exibir todos os pokémons que começam com a mesma letra.\n");
    printf("Escolha uma opção: ");
	scanf("%d", &op);
	
	
	
	if(arquivo==NULL){
		printf("Arquivo de origem não foi aberto.\n");
		return 1;
		} else{
		
		switch (op){
		
			case 1:
				lerEimprimir(arquivo);
				break;
			
			case 2:
				contar(arquivo);
				break;
			case 3:
				letraIgual(arquivo);
				break;
			default:
				printf("Opção invalida");
				break;
			
		}
		fclose(arquivo);
	
	}

	return 0;
}



