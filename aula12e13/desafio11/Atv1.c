#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int linhas, colunas, vmax;
    int i, j, k, n;
    char buffer[250];

    
    FILE *origem;
    FILE *destino;
    FILE *destino1;
    FILE *destino2;
    FILE *destino3;
    origem = fopen("torre.ppm", "r");
    destino = fopen("torreSupEsq.ppm", "w");
	destino1 = fopen("torreSupDir.ppm", "w");
    destino3 = fopen("torreInfDir.ppm", "w");
    destino2 = fopen("torreInfEsq.ppm", "w");
    
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
        fprintf(destino, "#Atividade 1\n");
        fprintf(destino, "%d %d\n", colunas/2, linhas/2);
        fprintf(destino, "%d\n", vmax);
        
        fprintf(destino1, "P3\n");
        fprintf(destino1, "#Atividade 1\n");
        fprintf(destino1, "%d %d\n", colunas/2, linhas/2);
        fprintf(destino1, "%d\n", vmax);
        
        fprintf(destino2, "P3\n");
        fprintf(destino2, "#Atividade 1\n");
        fprintf(destino2, "%d %d\n", colunas/2, linhas/2);
        fprintf(destino2, "%d\n", vmax);
        
        fprintf(destino3, "P3\n");
        fprintf(destino3, "#Atividade 1\n");
        fprintf(destino3, "%d %d\n", colunas/2, linhas/2);
        fprintf(destino3, "%d\n", vmax);
        
		for(i=0; i<linhas;i++){
            for(j=0; j <colunas;j++){
            	for(k =0; k<3;k++){
				
                n = 0;
                fscanf(origem,"%d", &matriz[i][j][k]);
				
                if(i <= linhas/2-1 && j<=colunas/2-1){
					n = matriz[i][j][k];
                	fprintf(destino, "%d ", n);
				} else if(i <= linhas/2-1 && j >=colunas/2-1){
                	n = matriz[i][j][k];
                	fprintf(destino1, "%d ", n);
				} else if(i >= linhas/2-1 && j<=colunas/2-1){
                	n = matriz[i][j][k];
                	fprintf(destino2, "%d ", n);
				} else{
                	n = matriz[i][j][k];
                	fprintf(destino3, "%d ", n);
				} 
            }
			}
        }        
    }
    fclose(origem);
    fclose(destino);
    return 0;
}
