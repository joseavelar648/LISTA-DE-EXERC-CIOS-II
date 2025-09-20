
#include <stdio.h>
#include <math.h>
int main() {
  int i;
  int N ;
   printf("digite um valor inteiro positivo para N ");
    scanf("%d", &N);

      for (i = 1; i<=N; i++){
        printf("%d\n", i);
    }
  printf("\n quadrados de 1 até N:\n " );
     for (i = 1; i<=N; i++){
         int quadrado = i * i;
         printf("%d\n", quadrado);
     }
    return 0;
}
