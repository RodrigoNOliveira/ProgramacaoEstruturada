#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int i, j, k;
    int n;
    FILE *arquivo;
    arquivo = fopen("imagem10.ppm", "w");
    fprintf(arquivo, "P3\n");
    fprintf(arquivo, "#imagem9.ppm\n");
    fprintf(arquivo, "60 100\n");
    fprintf(arquivo, "255\n");
    for(i = 0; i < 100; i++){
        for(j = 0; j < 60; j++){
        	for(k = 0; k < 100; k++){
           		if(i < 20){
            		n = rand() % (55+1);
				} else if ( i >= 20 && i <40){
					n = 45 + rand() % (105-45);
				}else if ( i >= 40 && i <60){
					n = 95 + rand() % (155-95);
				}else if ( i >= 60 && i <80){
					n = 145 + rand() % (205-145);
				} else {
					n =195 + rand() % (255-195);
				}
            	fprintf(arquivo, "%d ", n);
			}
        }
    }
    fclose(arquivo);
    return 0;

}
