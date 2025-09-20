#include <stdio.h>
int main() {
  int valor, soma = 0;
 
 
  printf("digite o valor obtido no dado de (1 a 6)\n");
    while (soma < 20){
       printf("digite o valor do dado: ");
       scanf("%d" , &valor);
       
       if (valor < 1 || valor > 6){
           printf("valor inválido!");
           continue;
       }
       soma +=valor;
          printf("Soma atual = %d\n", soma);
    }

    printf("\nFim do jogo! A soma final foi %d\n", soma);

    return 0;
}
