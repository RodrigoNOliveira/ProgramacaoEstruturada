#include<stdio.h>
#include<stdlib.h>
#include<time.h>>

int main(){
    srand(time(NULL));
    int i, j;
    int n;
    FILE *arquivo;
    arquivo = fopen("imagem3.ppm", "w");
    fprintf(arquivo, "P3\n");
    fprintf(arquivo, "#imagem3.ppm\n");
    fprintf(arquivo, "100 100\n");
    fprintf(arquivo, "255\n");
    for(i = 0; i < 100; i++){
        for(j = 0; j < 300; j++){
            n = rand() % 256; 
            
            fprintf(arquivo, "%d ", n);
        }
    }
    fclose(arquivo);
    return 0;

}
