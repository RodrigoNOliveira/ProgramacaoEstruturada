#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <locale.h>

int main() {
  // setlocale(LC_ALL, "Portuguese");
  printf("\nJoga das Opera��es +,-,x\n\n");
  int entrada, valor, valor1, operacao, perdeu = 0, placar = 0, inteiro;
  double resultado, resultado2casas;
  srand(time(NULL));

  while (perdeu == 0) {
    printf("PONTUA��O: %i\n", placar);

    operacao = rand() % 3;
    valor = rand() % 99 + 1;
    valor1 = rand() % 99 + 1;

    printf("\nInsira o valor da opera��o:\n %i ", valor);
    switch (operacao) {
    case 0:
      printf("+");
      resultado = valor + valor1;
      break;
    case 1:
      printf("-");
      resultado = valor - valor1;
      break;
    case 2:
      printf("x");
      resultado = valor * valor1;
      break;
      /*case 3:
              printf(":");
              resultado2casas = (double)valor/valor1;
              inteiro = resultado2casas*100;
              resultado= inteiro/100;
              break;*/
    }

    printf(" %i = ", valor1);
    scanf("%i", &entrada);

    if (entrada == resultado) {
      printf("\nResultado inserido correto!");
      placar++;
    } /*else if(operacao == 3){
     printf("\nResultado inserido incorreto! A resposta correta �: %0.2lf",
     resultado); perdeu = 1;
     }*/
    else {
      printf("\nResultado inserido incorreto! A resposta correta �: %0.0lf",
             resultado);

      printf("\n\nPontua��o final: %i", placar);
      printf("\n\n\n\n\nDesenvolvido por Rodrigo");
      perdeu = 1;
    }

    printf("\n\n");
  }

  return 0;
}
