#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<stdbool.h>

int main(){

    int valor,j, i, z;	
    int valores[15];
	bool teste = false;
	
    srand(time(NULL));
    
    printf("NUMEROS LOTOFACIL\n");
    for(i = 0 ; i < 15; i++){
    	teste = false;
    	valor = rand() % 25+1;
    	for( j = 0; j < i; j++){
    		if(valores[j] == valor){
    			teste = true;
			}
		}
		if(teste==false){
			valores[i] = valor;	
            printf("%d ", valor);
		} else{
			i--;
		}
   		
	}
        
    return 0;
}
