#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<stdbool.h>

int main(){

    int valor,j, i;	
    int valores[8];
	bool teste = true;
	
    srand(time(NULL));
    
    for(i = 0 ; i < 8; i++){
    	valores[i] = rand() % 100+1;
        printf("%d\n", valores[i]);
    }

    printf("Insira um valor inteiro de 1 a 100: ");
    scanf("%d", &valor);
    
    for(j = 0 ; j < 8; j++){

        if(valores[j] == valor){
            printf("O valor esta na posição %d do vetor", j);
            teste = true;

            return 0;
        }
        else{
            teste = false;
        }

	}

    if(teste == false){
        printf("O valor não existe no vetor");
    }
        
    return 0;
}
