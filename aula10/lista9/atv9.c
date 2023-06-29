#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int i, j;
    int n;
    FILE *arquivo;
    arquivo = fopen("imagem9.pgm", "w");
    fprintf(arquivo, "P2\n");
    fprintf(arquivo, "#imagem9.pgm\n");
    fprintf(arquivo, "60 100\n");
    fprintf(arquivo, "255\n");
    for(i = 0; i < 100; i++){
        for(j = 0; j < 60; j++){
            if(i < 20){
            n = rand() % 56;
            printf("%d ", n);
			} else if ( i >= 20 && i <40){
			n = 45 + rand() % 105-45;
			printf("%d ", n);
			}else if ( i >= 40 && i <60){
				n = 95 + rand() % 155-95;
				printf("%d ", n);
			}else if ( i >= 60 && i <80){
				n = 145 + rand() % 205-145;
				printf("%d ", n);
			} else{
				n =195 + rand() % 255-195;
				printf("%d ", n);
			}
            fprintf(arquivo, "%d ", n);
        }
    }
    fclose(arquivo);
    return 0;

}
