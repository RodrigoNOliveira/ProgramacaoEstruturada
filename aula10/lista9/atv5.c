#include<stdio.h>
#include<stdlib.h>
#include<time.h>>

int main(){
    srand(time(NULL));
    int i, j;
    int n;
    FILE *arquivo;
    arquivo = fopen("imagem5.pbm", "w");
    fprintf(arquivo, "P1\n");
    fprintf(arquivo, "#imagem5.pbm\n");
    fprintf(arquivo, "11 11\n");
    for(i = 0; i < 11; i++){
        for(j = 0; j < 11; j++){
            n = rand() % 2; 
            
            fprintf(arquivo, "%d ", n);
        }
    }
    fclose(arquivo);
    return 0;

}
