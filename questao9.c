#include <stdio.h>

 int main (){
 int n;
   printf("insira um numero inteiro com 5 digitos:\n");
   scanf("%d", &n);

    if(n > 9999 && n < 100000){

  int n1 = n/10000;
  int n2 = n/1000 % 10;
  int n3 = n/100 % 10;
  int n4 = n/10 % 10;
  int n5 = n % 10;

   printf("%d %d %d %d %d.\n", n1, n2, n3, n4, n5);
   }
return 0;
 }
