#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void valores(int x)
{

    if (x % 2 == 0)
    {
        for (int i = 5; i >= 1; i--)
        {
            printf("%d ", (x + 1) - (2 * i));
        }
        printf("%d ", x);
        for (int i = 1; i <= 5; i++)
        {
            printf("%d ", x + (2 * i));
        }
    }

    if (x % 2 == 1)
    {
        for (int i = 5; i >= 1; i--)
        {
            printf("%d ", x - (2 * i));
        }
        printf("%d ", x);
        for (int i = 0; i < 5; i++)
        {
            printf("%d " , x +1 + (2 * i));
        }
    }
}

int main()
{

    int x;

    printf("Insira o valor: ");
    scanf("%d", &x);
    printf("\n");
    valores(x);

    return 0;
}
