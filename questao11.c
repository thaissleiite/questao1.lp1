//*programa em C que pede ao usu�rio que insira um n�mero inteiro e imprime a representa��o do n�mero digitado nas bases decimal, octal e hexadecimal.

#include<stdio.h> //*biblioteca*\\

int main( ){ //*fun��o principal*\\

int n; //*defini��o de vari�vel*\\

printf ("digite um numero inteiro:\n"); //*imprime na tela o que o usu�rio precisa fazer*\\

scanf("%d",&n); //*ler o n�mero inteiro(%d) digitado pelo usu�rio e armazena na vari�vel*\\

printf ("Decimal:%d\n", n);
printf ("Octal: %o\n", n);
printf ("Hexadecimal: %x\n", n);

//*imprimir os valor de n nas bases solicitadas*\\

return 0;

}
