#include <stdio.h>

int main()
{
    int j = 0;
    char nome[24] = "Rodrigo Nathan Oliveira";

    for ( int i = 0; i < 10; i++){
           printf("%s\n", nome); 
    }

    while (j != 10){
       if (j == 0){
            printf("\n%s", nome);
        } else{
            printf(", %s", nome);
        }
        j++;
    }

    return 0;
}
