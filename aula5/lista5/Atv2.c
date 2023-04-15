#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int pares[10], j =0;

    for ( int i = 2; i <= 20; i = i +2){
           pares[j] = i;
           j++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", pares[i]);
    }
    
    return 0;
}
