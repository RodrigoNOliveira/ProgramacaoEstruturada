#include <stdio.h>

int main()
{
    for ( int i = 1; i < 10; i++){
        printf("\n\nTabuada do %i\n", i);
           for (int j = 0; j < 10; j++)
           {
            printf("\n%i x %i = %i", i, j, i*j);
           }
    }
    return 0;
}
