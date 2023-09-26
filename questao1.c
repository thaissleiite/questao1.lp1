#include <stdio.h>

     int main (){

     int x, y;

     printf("insira o numero x:\n");
     scanf("%d", &x);
     printf("insira o numero y:\n");
     scanf("%d", &y);

       int soma = x + y;
       int produto = x * y;
       int diferenca = x - y;
       int quociente = x / y;
       int resto = x % y;

     printf("a soma de %d e %d eh %d:\n", x, y, soma);
     printf("o produto de %d e %d eh %d:\n", x, y, produto);
     printf("a diferenca de %d e %d eh %d:\n", x, y, diferenca);
     printf("o resto de %d e %d eh %d:\n", x, y, resto);

 }
