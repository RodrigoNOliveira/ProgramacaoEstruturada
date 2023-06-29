#include<stdio.h>
#include<stdlib.h>
#include<time.h>>

int main(){
    srand(time(NULL));
    int i, j;
    int n;
    FILE *arquivo;
    arquivo = fopen("imagem8.pgm", "w");
    fprintf(arquivo, "P2\n");
    fprintf(arquivo, "#imagem8.pgm\n");
    fprintf(arquivo, "60 100\n");
    fprintf(arquivo, "255\n");
    for(i = 0; i < 100; i++){
    	if(i < 20){
            	n =0;
			} else if ( i >= 20 && i <40){
				n =64;
			}else if ( i >= 40 && i <60){
				n =128;
			}else if ( i >= 60 && i <80){
				n =192;
			} else{
				n =255;
			}
        for(j = 0; j < 60; j++){
            
            fprintf(arquivo, "%d ", n);
        }
    }
    fclose(arquivo);
    return 0;

}
