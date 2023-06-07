#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int fatorial(int x)
{
    int fator = 1, y;

    if( x == 0){
        return 1;
    } else{
    for (y = x; y > 0; y--){
        fator = fator * y;
    }
    return fator;
    }

}

void euler(){
    long int  x, fator;
    double e = 0;

    for( x = 0; x <=20; x++){
        fator = fatorial(x);
        e = e + (double)1/fator;
        printf("\n%.12lf", e);
    }
}


int main()
{

    printf("o numero de euler é: ");
    euler();
    

    return 0;
}
