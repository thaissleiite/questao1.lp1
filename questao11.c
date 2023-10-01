//*programa em C que pede ao usuário que insira um número inteiro e imprime a representação do número digitado nas bases decimal, octal e hexadecimal.

#include<stdio.h> //*biblioteca*\\

int main( ){ //*função principal*\\

int n; //*definição de variável*\\

printf ("digite um numero inteiro:\n"); //*imprime na tela o que o usuário precisa fazer*\\

scanf("%d",&n); //*ler o número inteiro(%d) digitado pelo usuário e armazena na variável*\\

printf ("Decimal:%d\n", n);
printf ("Octal: %o\n", n);
printf ("Hexadecimal: %x\n", n);

//*imprimir os valor de n nas bases solicitadas*\\

return 0;

}
