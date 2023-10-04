//programa em c que o usuário fornece dois números inteiros, imprime (eh maior caso entre os dois números foi obtido o maior) ou imprima(estes numeros sao iguais - caso os dois numeros inteiros obtidos tenham sido iguais)

#include <stdio.h> //biblioteca
  int main (){ //funcao principal
    int m, n; //tipo de dado + variavel

      printf("Insira o primeiro numero inteiro:\n");
        scanf("%d", &m);
      printf("Insira o segundo numero inteiro:\n");
        scanf("%d", &n);

          if(n > m){
             printf("%d eh maior que %d\n", n);
          }

          if(m == n){
            printf("%d eh igual a %d.\n", m, n);

          if(m > n){
            printf("%d eh maior que %d\n", m);

          }
            return 0;


  }

  }

