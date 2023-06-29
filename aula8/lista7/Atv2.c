////02) Faça uma função que simule um dado de 6 faces. Tente descobrir se este dado é viciado ou honesto. 
//Jogue o dado mil vezes. Calcule a porcentagem de vezes que cada número (face do dado) saiu. 
//Não precisa exibir os mil números. Exiba apenas a porcentagem de vezes que cada número saiu.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado(){
	int  i, valor;
	valor =  1+rand() % 6;
	return valor;	
}

int main()
{
   	int um =0 ,dois=0,tres=0,quatro=0,cinco=0,seis=0;
    int x, giros;
	srand(time(NULL));
    
    for (giros = 0; giros < 1000; giros++)
    {
    	int dado();
    	
    	x = dado();
    	switch(x){
			case 1:
				um++;
				break;
			case 2:
				dois++;
				break;
			case 3:
				tres++;
				break;
			case 4:
				quatro++;
				break;
			case 5:
				cinco++;
				break;
			case 6:
				seis++;
				break;
		}
    }
    
    printf("A porcentagem de cada numero e de:\n");
    printf("Um: %.2lf\n", (double)um*100/1000);
    printf("Dois: %.2lf\n", (double)dois*100/1000);
    printf("Tres: %.2lf\n", (double)tres*100/1000);
    printf("Quatro: %.2lf\n", (double)quatro*100/1000);
    printf("Cinco: %.2lf\n", (double)cinco*100/1000);
    printf("Seis: %.2lf\n",(double)seis*100/1000);


    

    return 0;
}



