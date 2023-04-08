#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<stdbool.h>

int main(){

    int dia, mes, ano;	
	
    srand(time(NULL));
    
    
    	mes = rand() % 12+1;
    	ano = 2000 + rand() % 22+1;
    	
    	if(ano%4 == 0){
    		if(mes == 4 || mes == 6 || mes == 9 || mes == 10){
    			dia = rand()%30+1;
			} else if(mes == 2){
				dia = rand()%29+1;
			} else{
				dia = rand()%31+1;
			}
		} else{
			if(mes == 4 || mes == 6 || mes == 9 || mes == 10){
    			dia = rand()%30+1;
			} else if(mes == 2){
				dia = rand()%28+1;
			} else{
				dia = rand()%31+1;
			}
		}
		printf("%i/%i/%i", dia, mes, ano);
        
    return 0;
}
