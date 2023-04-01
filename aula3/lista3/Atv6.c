#include <stdio.h>

int main()
{   
    for ( int i = 300; i >= 100; i--){
        if(i%4 == 0){
           printf("%d\n", i);
        } 
    }
    return 0;
}
