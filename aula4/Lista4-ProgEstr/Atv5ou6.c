#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    int valor, i;	

    srand(time(NULL));
    
    
    for(i = 0 ; i < 10; i++){
    	valor = rand() % 101;
    	printf("%i ", valor);
	}
        
    return 0;
}
