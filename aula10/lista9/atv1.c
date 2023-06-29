#include<stdio.h>
#include<stdlib.h>
#include<time.h>>

int main(){
    srand(time(NULL));
    int i, j;
    int n;
    FILE *arquivo;
    arquivo = fopen("imagem.pbm", "w");
    fprintf(arquivo, "P1\n");
    fprintf(arquivo, "#imagem.pbm\n");
    fprintf(arquivo, "100 100\n");
    for(i = 0; i < 100; i++){
        for(j = 0; j < 100; j++){
            n = rand() % 2; 
            
            fprintf(arquivo, "%d ", n);
        }
    }
    fclose(arquivo);
    return 0;

}
