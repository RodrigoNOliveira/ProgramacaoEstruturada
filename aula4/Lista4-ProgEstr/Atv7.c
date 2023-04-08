#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    int valor, i;	

    srand(time(NULL));
    
    
    for(i = 0 ; i < 3; i++){
    	valor = 100 + rand() % 999+1;
    	if(valor%5 == 0){
    		printf("%i ", valor);
		} else{
			i--;
		}
	}
        
    return 0;
}
