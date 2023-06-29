#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int linhas, colunas, vmax;
    int i, j, k, n;
    char buffer[250];

    
    FILE *origem;
    FILE *destino;
    origem = fopen("torreCinza.ppm", "r");
    destino = fopen("torreCEspelhadaHoriz.ppm", "w");
    
    if(origem == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }else{
        fgets(buffer, 250, origem);
        fgets(buffer, 250, origem);
        fscanf(origem, "%d %d", &colunas, &linhas);
        fscanf(origem, "%d", &vmax);
        int matriz[linhas][colunas][3];

        fprintf(destino, "P3\n");
        fprintf(destino, "#Atividade 2\n");
        fprintf(destino, "%d %d\n", colunas, linhas);
        fprintf(destino, "%d\n", vmax);

        for(i=0; i<linhas;i++){
            for(j=0; j <colunas;j++){
                n = 0;
                for(k=0; k<3; k++){
                    fscanf(origem,"%d", &matriz[i][j][k]);
                    n = matriz[i][j*-1][k];
                    fprintf(destino, "%d ", n);
                }
//                fprintf(destino, "%d %d %d ", n, n, n);
            }

        }
    }
    fclose(origem);
    fclose(destino);
    return 0;
}
