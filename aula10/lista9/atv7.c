#include<stdio.h>
#include<stdlib.h>
#include<time.h>>

int main(){
    srand(time(NULL));
    int i, j;
    int n;
    FILE *arquivo;
    arquivo = fopen("imagem7.pgm", "w");
    fprintf(arquivo, "P2\n");
    fprintf(arquivo, "#imagem7.pgm\n");
    fprintf(arquivo, "100 256\n");
    fprintf(arquivo, "255\n");
    for(i = 0; i < 256; i++){
    	n = i;
        for(j = 0; j < 100; j++){
            fprintf(arquivo, "%d ", n);
        }
    }
    fclose(arquivo);
    return 0;

}
