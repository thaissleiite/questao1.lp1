//programa em c que ler um numero inteiro e imprime se ele eh par ou impar

#include <stdio.h>

    int main(){
      int x;

       printf("Insira um numero inteiro:\n);
         scanf("%d", x);

        if(x / 2){
          x % 2 == 0;
           printf("O numero informado eh par\n");

        }
      else{
        printf("O numero informado eh impar);
      }
    }
