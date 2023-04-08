#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<stdbool.h>

int main(){

    int valor,j, i, z;	
    int valores[6];
	bool teste = false;
	
    srand(time(NULL));
    
    
    for(i = 0 ; i < 6; i++){
    	teste = false;
    	valor = rand() % 60+1;
    	for( j = 0; j < 6; j++){
    		if(valores[j] == valor){
    			teste = true;
			}
		}
		if(teste==false){
			valores[i] = valor;	
		} else{
			i--;
		}
   		
	}
        
    return 0;
}
