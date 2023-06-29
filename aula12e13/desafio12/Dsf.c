#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int linhas, colunas, vmax;
    int i, j, k, n, t;
    char buffer[250];

    
    FILE *origem;
    FILE *destino;
     FILE *destino1;
    origem = fopen("torre.ppm", "r");
    destino = fopen("torreCinza.ppm", "w");
    destino1 = fopen("torrePeB.ppm", "w");
    
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
        fprintf(destino, "%d %d\n", colunas, linhas);
        fprintf(destino, "%d\n", vmax);
        
        fprintf(destino, "P1\n");
        fprintf(destino, "#Atividade 1\n");
        fprintf(destino, "%d %d\n", colunas, linhas);
        fprintf(destino, "1\n");

        for(i=0; i<linhas;i++){
            for(j=0;j<colunas;j++){
                n = 0;
                for(k=0; k<3; k++){
                    fscanf(origem,"%d", &matriz[i][j][k]);
                    n = n + matriz[i][j][k];
                }
                n = n / 3;
                fprintf(destino, "%d %d %d ", n, n, n);
            }

        }
        
        for(i=0; i<linhas;i++){
            for(j=0;j<colunas;j++){
                n = 0;
                for(k=0; k<3; k++){
                    fscanf(origem,"%d", &matriz[i][j][k]);
                    n = n + matriz[i][j][k];
					}
                n = n / 3;
				if(n>=vmax/2){
					fprintf(destino1, "1 ");
				} else{
					fprintf(destino1, "0 ");
				}           	
//                fprintf(destino1, "%d %d %d ", n, n, n);
        }
        fprintf(destino1, "\n ");
		}
        
        
        
    }
    fclose(origem);
    fclose(destino);
    return 0;
}
