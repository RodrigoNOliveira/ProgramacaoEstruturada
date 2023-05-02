#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>

int main()
{   
    int a[20], b[5], i, x;

    srand(time(NULL));
    printf("\nValores vetor:\n");   
    for ( i = 0; i < 20; i++){
        x = 97 + rand() % 25+1;
        a[i] = x;
       printf("%d ", a[i]);
    } 
    printf("\nValores como char:\n");   
    for ( i = 0; i < 20; i++){
       printf("%c ", a[i]);
    }   
    
    return 0;
}
