#include<stdio.h>
#include<stdlib.h>
#include<time.h>>

int main(){
    srand(time(NULL));
    int i, j;
    int n;
    FILE *arquivo;
    arquivo = fopen("imagem2.pgm", "w");
    fprintf(arquivo, "P2\n");
    fprintf(arquivo, "#imagem2.pgm\n");
    fprintf(arquivo, "100 100\n");
    fprintf(arquivo, "255\n");
    for(i = 0; i < 100; i++){
        for(j = 0; j < 100; j++){
            n = rand() % 256; 
            
            fprintf(arquivo, "%d ", n);
        }
    }
    fclose(arquivo);
    return 0;

}
